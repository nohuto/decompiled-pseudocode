void __fastcall wil_details_ReevaluateOnFeatureConfigurationChange(void *Context)
{
  wil_details_UpdateFeatureConfiguredStates(Context);
  wil_details_EvaluateFeatureDependencies();
}
