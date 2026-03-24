/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0031E54
 * Callers:
 *     Feature_Pldr_Ignore_Vetoes__private_ReportDeviceUsage @ 0x1C0031E04 (Feature_Pldr_Ignore_Vetoes__private_ReportDeviceUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(__int64 a1, int a2)
{
  int v2; // edx
  unsigned int v3; // eax

  v2 = a2 - 3;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    v3 = 32;
  }
  else
  {
    v3 = 16;
  }
  _InterlockedOr(wil_details_featureDescriptors_a, v3);
}
