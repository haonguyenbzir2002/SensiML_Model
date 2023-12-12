#ifndef __MODEL_JSON_H__
#define __MODEL_JSON_H__

const char recognition_model_string_json[] = {"{\"NumModels\":1,\"ModelIndexes\":{\"0\":\"TEST_MODEL_1_RANK_0\"},\"ModelDescriptions\":[{\"Name\":\"TEST_MODEL_1_RANK_0\",\"ClassMaps\":{\"1\":\"Pluggedin\",\"2\":\"Unplugged\",\"0\":\"Unknown\"},\"ModelType\":\"DecisionTreeEnsemble\",\"FeatureFunctions\":[\"100thPercentile\",\"25thPercentile\"]}]}"};

int32_t recognition_model_string_json_len = sizeof(recognition_model_string_json);

#endif /* __MODEL_JSON_H__ */
