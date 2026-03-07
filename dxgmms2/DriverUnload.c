__int64 DriverUnload()
{
  DxgMmsDeInitDebug();
  VIDMM_GLOBAL::DeInitGlobals();
  return wil_UninitializeFeatureStaging();
}
