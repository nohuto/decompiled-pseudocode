/*
 * XREFs of wil_StagingConfig_QueryFeatureState @ 0x1C00F9704
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C003E170 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     wil_details_StagingConfig_Load @ 0x1C003E46C (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_QueryFeatureState @ 0x1C003E768 (wil_details_StagingConfig_QueryFeatureState.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall wil_StagingConfig_QueryFeatureState(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int FeatureState; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  PVOID v11[12]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v12[208]; // [rsp+90h] [rbp-E8h] BYREF

  FeatureState = 0;
  memset(v11, 0, 0x58uLL);
  if ( !(unsigned int)wil_details_StagingConfig_Load((__int64)v11, v8, v9, v12) )
  {
    FeatureState = wil_details_StagingConfig_QueryFeatureState((__int64)v11, a2, a3, a4);
    if ( LODWORD(v11[10]) )
      ExFreePoolWithTag(v11[7], 0x4C4957u);
  }
  return FeatureState;
}
