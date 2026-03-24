/*
 * XREFs of wil_StagingConfig_QueryFeatureState @ 0x1406C3240
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1402D33C4 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_StagingConfig_Load @ 0x14038C688 (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x14038D320 (wil_details_StagingConfig_QueryFeatureState.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     wil_details_StagingConfig_AreAnyFeaturesConfigured @ 0x1404EF844 (wil_details_StagingConfig_AreAnyFeaturesConfigured.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall wil_StagingConfig_QueryFeatureState(int a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  unsigned int FeatureState; // esi
  __int64 v10; // r8
  PVOID v12[12]; // [rsp+30h] [rbp-168h] BYREF
  char v13[208]; // [rsp+90h] [rbp-108h] BYREF

  FeatureState = 0;
  memset(v12, 0, 0x58uLL);
  if ( !(unsigned int)wil_details_StagingConfig_Load((__int64)v12, a1, v10, v13) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState((__int64)v12, a2, a3, a4);
    if ( a5 )
      *a5 |= wil_details_StagingConfig_AreAnyFeaturesConfigured((__int64)v12);
    if ( LODWORD(v12[10]) )
      ExFreePoolWithTag(v12[7], 0x4C4957u);
  }
  return FeatureState;
}
