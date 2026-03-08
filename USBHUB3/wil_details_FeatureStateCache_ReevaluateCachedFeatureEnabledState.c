/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C000CAA8
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C000CAA8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_IsEnabledFallback @ 0x1C000CD00 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C000CAA8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // r12d
  signed __int32 v5; // ebx
  char v7; // cl
  BOOL v8; // r14d
  bool v9; // cf
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // edi
  int v13; // ecx
  int v14; // r8d
  int v15; // eax
  int v16; // edx
  int v17; // edi
  int v18; // eax
  char v19; // cl
  int v20; // edx
  int v21; // edi
  unsigned int v22; // edi
  unsigned int ***v23; // rsi
  unsigned int **v24; // rcx
  unsigned __int8 v25; // al
  BOOL v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edi
  signed __int32 v29; // eax
  char i; // cl
  signed __int32 v31; // esi
  __int64 v34; // [rsp+20h] [rbp-50h]
  __int64 v35; // [rsp+28h] [rbp-48h]
  __int64 v36; // [rsp+30h] [rbp-40h] BYREF
  __int128 v37; // [rsp+38h] [rbp-38h]
  __int64 v38; // [rsp+48h] [rbp-28h]
  __int64 v39; // [rsp+50h] [rbp-20h] BYREF
  int v40; // [rsp+58h] [rbp-18h]

  v3 = 0;
  v5 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges(a1);
  v7 = *(_BYTE *)(a3 + 28) - 2;
  v37 = 0LL;
  v8 = 1;
  v9 = v7 == 0;
  v10 = v7 == 1;
  v11 = *(unsigned int *)(a3 + 24);
  v36 = 0LL;
  v12 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0;
  v13 = RtlQueryFeatureConfiguration(v11, !v9 && !v10, &v36, &v39, a2);
  if ( v13 )
  {
    v14 = v37;
    v15 = 0;
    v16 = 0;
    if ( v13 != 279 )
      goto LABEL_8;
    v15 = (HIDWORD(v39) >> 7) & 1;
  }
  else
  {
    v14 = (HIDWORD(v39) >> 4) & 3;
    v15 = (HIDWORD(v39) >> 7) & 1;
    LODWORD(v37) = v14;
    v16 = (HIDWORD(v39) >> 6) & 1;
  }
  v12 = 1;
LABEL_8:
  v17 = -v12;
  v18 = 8 * v15;
  v19 = v18 | (16 * v16) | (v17 != 0 ? v14 : 0) & 3;
  v20 = (v18 | (16 * v16) | (unsigned __int8)v14 & (unsigned __int8)-(v17 != 0) & 3) << 7;
  if ( (v19 & 3) != 0 )
  {
    v21 = 0;
    if ( v14 == 2 )
      v21 = 64;
  }
  else
  {
    v21 = *(_BYTE *)(a3 + 31) != 0 ? 0x40 : 0;
  }
  v22 = ((v20 | v21) ^ ((v20 | (unsigned int)v21) >> 6)) & 1 ^ (v20 | v21);
  if ( (v22 & 1) != 0 )
  {
    v23 = *(unsigned int ****)(a3 + 32);
    if ( v23 )
    {
      do
      {
        v24 = *v23;
        if ( !*v23 )
          break;
        if ( *((_BYTE *)v24 + 30) || *((_BYTE *)v24 + 29) )
        {
          v27 = (v22 & 1) != 0 && *((_BYTE *)v24 + 31);
          v28 = v22 & 0xFFFFFFFE;
        }
        else
        {
          v35 = **v24;
          v25 = (v35 & 2) != 0
              ? **v24
              : wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*v24, v35, v24);
          v26 = ((unsigned __int8)v22 & v25 & 1) != 0;
          v27 = v22 & 0xFFFFFFFE;
          v28 = v26;
        }
        v22 = v27 | v28;
        ++v23;
      }
      while ( (v22 & 1) != 0 );
    }
  }
  if ( !*(_BYTE *)(a3 + 28) )
    v8 = v3 != 0;
  v29 = v5;
  for ( i = v5; ; i = v29 )
  {
    LODWORD(v34) = v29;
    v31 = v29;
    if ( v8 )
    {
      LODWORD(v34) = v29;
      if ( (i & 2) == 0 )
      {
        v31 = v29 ^ ((unsigned __int16)v22 ^ (unsigned __int16)v29) & 0x9C1 | 2;
        LODWORD(v34) = v31;
      }
    }
    if ( (v5 & 4) == 0 )
    {
      v31 = ((unsigned __int16)v31 ^ (unsigned __int16)v22) & 0x400 ^ v31 | 4;
      LODWORD(v34) = v31;
    }
    v29 = _InterlockedCompareExchange(a1, v31, v5);
    if ( v5 == v29 )
      break;
    v5 = v29;
  }
  if ( (v5 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(a1, *(unsigned __int8 *)(a3 + 28), v3);
  if ( !v8 )
    LODWORD(v34) = ((unsigned __int16)v31 ^ (unsigned __int16)v22) & 0x9C1 ^ v31;
  return v34;
}
