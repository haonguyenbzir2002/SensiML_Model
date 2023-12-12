# from sensiml.sml_runner import SMLRunner
from sensiml.model_runner import ModelRunner
import pandas as pd

# Windows Version
sml = ModelRunner("kp_17f5d634-0330-4b11-adf6-12db098fbc8d_Windows-x86_64_lib_9.3-v1.0_d.zip")

sml.init_model()

data = pd.read_csv("data_8-29_autoLabelTest2.csv")

rec_data = sml.recognize_capture(data, model_index=0, model_api="run_model")







# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    print('PyCharm')

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
