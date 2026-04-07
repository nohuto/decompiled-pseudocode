/*
 * XREFs of wil_QueryFeatureState @ 0x180054F10
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18004DDAC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x180054F90 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x180055120 (wil_StagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_QueryFeatureState(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v7; // edi
  int v8; // esi
  int v9; // ebp
  __int64 result; // rax

  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( a5 )
    *a5 = 0;
  *a6 = 1;
  result = wil_RtlStagingConfig_QueryFeatureState(a1, a2, a3, a5);
  if ( !(_DWORD)result )
    return wil_StagingConfig_QueryFeatureState(a4, v9, v8, v7, (__int64)a5);
  return result;
}
