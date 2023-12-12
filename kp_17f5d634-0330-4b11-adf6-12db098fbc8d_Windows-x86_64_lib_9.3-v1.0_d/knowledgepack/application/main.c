#include "kb.h"
#include "testdata.h"
#include "kb_output.h"

static char str_buffer[4092];
#if SML_PROFILER
float recent_fv_times[4092];
uint32_t recent_fv_cycles[4092];
#endif

void sml_output_results(int32_t model_index, int32_t model_result)
{
    bool feature_vectors = true;
    int32_t size = 0;
    kb_sprint_model_result(model_index, str_buffer, 1, 1, 1);
    printf("%s\n", str_buffer);
#if SML_PROFILER
    memset(str_buffer, 0, 2048);
    kb_sprint_model_cycles(model_index, str_buffer, recent_fv_cycles);
    printf("%s\n", str_buffer);
    memset(str_buffer, 0, 2048);
    kb_sprint_model_times(model_index, str_buffer, recent_fv_times);
    printf("%s\n", str_buffer);
#endif
};

int32_t main(void)
{
    kb_print_model_map();
    kb_model_init();
    int32_t ret = 0;
    int32_t index = 0;
    int32_t num_sensors = 0;
    int16_t *data;

    for (index = 0; index < TD_NUMROWS; index++)
    {
        data = (int16_t *)&testdata[index];
        //FILL_RUN_MODEL_CUSTOM
    }
}
