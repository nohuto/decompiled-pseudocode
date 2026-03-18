/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C000C9E4
 * Callers:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C000CC18 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     Feature_USB4PowerImprovements__private_IsEnabled @ 0x1C000CC4C (Feature_USB4PowerImprovements__private_IsEnabled.c)
 *     Feature_DropPowerReferenceOnLPE__private_IsEnabled @ 0x1C000CCD4 (Feature_DropPowerReferenceOnLPE__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C000CC18 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     __security_check_cookie @ 0x1C0044810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // r12d
  signed __int32 v5; // ebx
  char v7; // cl
  bool v8; // cf
  BOOL v9; // r15d
  __int64 v10; // rcx
  int v11; // edi
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // eax
  char v18; // cl
  int v19; // edx
  int v20; // edi
  unsigned __int16 v21; // di
  _QWORD *v22; // rsi
  __int64 v23; // rax
  char CachedFeatureEnabledState; // al
  bool v25; // zf
  __int16 v26; // ax
  signed __int32 v27; // eax
  char i; // cl
  signed __int32 v29; // esi
  __int64 v32; // [rsp+20h] [rbp-40h]
  __int64 v33; // [rsp+28h] [rbp-38h] BYREF
  __int128 v34; // [rsp+30h] [rbp-30h]
  __int64 v35; // [rsp+40h] [rbp-20h]
  __int64 v36; // [rsp+48h] [rbp-18h] BYREF
  int v37; // [rsp+50h] [rbp-10h]

  v3 = 0;
  v5 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges(a1);
  v7 = *(_BYTE *)(a3 + 20) - 2;
  v34 = 0LL;
  v8 = v7 == 0;
  v25 = v7 == 1;
  v9 = 1;
  v10 = *(unsigned int *)(a3 + 16);
  v33 = 0LL;
  v11 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v12 = ((__int64 (__fastcall *)(__int64, bool, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
          v10,
          !v8 && !v25,
          &v33,
          &v36,
          a2);
  if ( v12 )
  {
    v13 = v34;
    v14 = 0;
    v15 = 0;
    if ( v12 != 279 )
      goto LABEL_8;
    v14 = (HIDWORD(v36) >> 7) & 1;
  }
  else
  {
    v13 = (HIDWORD(v36) >> 4) & 3;
    v14 = (HIDWORD(v36) >> 7) & 1;
    LODWORD(v34) = v13;
    v15 = (HIDWORD(v36) >> 6) & 1;
  }
  v11 = 1;
LABEL_8:
  v16 = -v11;
  v17 = 8 * v14;
  v18 = v17 | (16 * v15) | (v16 != 0 ? v13 : 0) & 3;
  v19 = 32 * (v17 | (16 * v15) | (unsigned __int8)v13 & (unsigned __int8)-(v16 != 0) & 3);
  if ( (v18 & 3) != 0 )
  {
    v20 = 0;
    if ( v13 == 2 )
      v20 = 16;
  }
  else
  {
    v20 = *(_BYTE *)(a3 + 23) != 0 ? 0x10 : 0;
  }
  v21 = ((unsigned __int8)(v19 | v20) ^ (unsigned __int8)((v19 | (unsigned int)v20) >> 1)) & 8 ^ (v19 | v20);
  if ( (v21 & 8) != 0 )
  {
    v22 = *(_QWORD **)(a3 + 24);
    if ( v22 )
    {
      do
      {
        v23 = *v22;
        if ( !*v22 )
          break;
        if ( *(_BYTE *)(v23 + 22) || *(_BYTE *)(v23 + 21) )
        {
          if ( (v21 & 8) == 0 )
            goto LABEL_23;
          v25 = *(_BYTE *)(v23 + 23) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(*(_QWORD *)v23, *v22);
          if ( (v21 & 8) == 0 )
            goto LABEL_23;
          v25 = (CachedFeatureEnabledState & 8) == 0;
        }
        if ( v25 )
        {
LABEL_23:
          v26 = 0;
          goto LABEL_24;
        }
        v26 = 8;
LABEL_24:
        ++v22;
        v21 = v26 | v21 & 0xFFF7;
      }
      while ( (v21 & 8) != 0 );
    }
  }
  if ( !*(_BYTE *)(a3 + 20) )
    v9 = v3 != 0;
  v27 = v5;
  for ( i = v5; ; i = v27 )
  {
    LODWORD(v32) = v27;
    v29 = v27;
    if ( v9 )
    {
      LODWORD(v32) = v27;
      if ( (i & 1) == 0 )
      {
        v29 = v27 ^ (v21 ^ (unsigned __int16)v27) & 0x278 | 1;
        LODWORD(v32) = v29;
      }
    }
    if ( (v5 & 2) == 0 )
    {
      v29 = ((unsigned __int16)v29 ^ v21) & 0x100 ^ v29 | 2;
      LODWORD(v32) = v29;
    }
    v27 = _InterlockedCompareExchange(a1, v29, v5);
    if ( v5 == v27 )
      break;
    v5 = v27;
  }
  if ( (v5 & 2) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(a1, *(unsigned __int8 *)(a3 + 20), v3);
  if ( !v9 )
    LODWORD(v32) = ((unsigned __int16)v29 ^ v21) & 0x278 ^ v29;
  return v32;
}
