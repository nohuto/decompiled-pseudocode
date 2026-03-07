bool DXGVAILOBJECT::IsIFlipFeatureEnabled(void)
{
  bool v0; // zf
  bool v1; // sf

  v0 = g_IsVailIFlipEnabled == 0;
  v1 = g_IsVailIFlipEnabled < 0;
  if ( g_IsVailIFlipEnabled < 0 )
  {
    Feature_Vail_iFLIP__private_ReportDeviceUsage();
    _InterlockedCompareExchange(&g_IsVailIFlipEnabled, 1, -1);
    v0 = g_IsVailIFlipEnabled == 0;
    v1 = g_IsVailIFlipEnabled < 0;
  }
  return !v1 && !v0;
}
