/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F1BA0
 * Callers:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1402516A4 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_details_IsEnabledFallback @ 0x1403F1CF4 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1402516F4 (wil_details_GetCurrentFeatureEnabledState.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // r14d
  signed __int32 v5; // edi
  unsigned __int16 CurrentFeatureEnabledState; // bx
  signed __int32 v8; // esi
  signed __int32 v9; // eax
  int v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h]

  v3 = 0;
  v11 = 0;
  v12 = a2;
  v5 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  CurrentFeatureEnabledState = wil_details_GetCurrentFeatureEnabledState(a3, &v11);
  if ( !*(_BYTE *)(a3 + 28) )
    v11 = v3 != 0 ? v11 : 0;
  while ( 1 )
  {
    v8 = v5;
    LODWORD(v12) = v5;
    if ( v11 && (v5 & 2) == 0 )
    {
      v8 = v5 ^ (CurrentFeatureEnabledState ^ (unsigned __int16)v5) & 0x9C1 | 2;
      LODWORD(v12) = v8;
    }
    if ( (v5 & 4) == 0 )
    {
      v8 = ((unsigned __int16)v8 ^ CurrentFeatureEnabledState) & 0x400 ^ v8 | 4;
      LODWORD(v12) = v8;
    }
    v9 = _InterlockedCompareExchange(a1, v8, v5);
    if ( v5 == v9 )
      break;
    v5 = v9;
  }
  if ( (v5 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(a1, *(unsigned __int8 *)(a3 + 28), v3);
  if ( !v11 )
    LODWORD(v12) = ((unsigned __int16)v8 ^ CurrentFeatureEnabledState) & 0x9C1 ^ v8;
  return v12;
}
