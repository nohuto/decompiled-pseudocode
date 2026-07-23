/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x14032C634
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F12E0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14032C5E4 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     RtlQueryFeatureConfiguration @ 0x14038C100 (RtlQueryFeatureConfiguration.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1406A5C00 (wil_StagingConfig_QueryFeatureState.c)
 */

ULONGLONG __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  RTL_FEATURE_ID v2; // esi
  unsigned __int8 v3; // al
  BOOL v5; // ebx
  NTSTATUS v6; // eax
  int v7; // r8d
  int v8; // r9d
  int v9; // edx
  int v10; // eax
  int FeatureState; // eax
  int v12; // r8d
  int v13; // ecx
  unsigned int v14; // r8d
  int v15; // ebx
  __int64 *v16; // rdi
  int i; // eax
  __int64 v18; // rcx
  BOOL v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // ebx
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+30h] [rbp-30h] BYREF
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  ULONGLONG ChangeStamp; // [rsp+80h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 28) - 2;
  v24 = 0LL;
  *a2 = 1;
  v5 = v3 <= 1u;
  v25 = 0LL;
  *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
  FeatureConfiguration.VariantPayload = 0;
  v6 = RtlQueryFeatureConfiguration(v2, (RTL_FEATURE_CONFIGURATION_TYPE)(v3 > 1u), &ChangeStamp, &FeatureConfiguration);
  if ( v6 )
  {
    if ( v6 == 279 )
      LODWORD(v25) = (*((_DWORD *)&FeatureConfiguration + 1) >> 7) & 1;
    FeatureState = wil_StagingConfig_QueryFeatureState(0, (unsigned int)&v24, v2, v5, 0LL);
    v9 = HIDWORD(v25);
    v7 = FeatureState;
    v10 = v25;
    v8 = v24;
  }
  else
  {
    v7 = 1;
    v8 = (*((_DWORD *)&FeatureConfiguration + 1) >> 4) & 3;
    v9 = (*((_DWORD *)&FeatureConfiguration + 1) >> 6) & 1;
    v10 = (*((_DWORD *)&FeatureConfiguration + 1) >> 7) & 1;
  }
  ChangeStamp = 0LL;
  v12 = (v10 != 0 ? 0x400 : 0) | (v9 != 0 ? 0x800 : 0) | (((unsigned __int8)v8 & (unsigned __int8)-(v7 != 0) & 3) << 7);
  if ( (v12 & 0x180) != 0 )
  {
    v13 = 0;
    if ( v8 == 2 )
      v13 = 64;
  }
  else
  {
    v13 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v14 = v13 | v12;
  v15 = v14 | (v14 >> 6) & 1;
  LODWORD(ChangeStamp) = v15;
  if ( v14 & 1 | ((v14 & 0x40) != 0) )
  {
    v16 = *(__int64 **)(a1 + 32);
    if ( v16 )
    {
      for ( i = v15 & 1; (v15 & 1) != 0; i = v15 & 1 )
      {
        v18 = *v16;
        if ( !*v16 )
          break;
        if ( *(_BYTE *)(v18 + 30) || *(_BYTE *)(v18 + 29) )
        {
          v20 = i && *(_BYTE *)(v18 + 31);
          v21 = v15 & 0xFFFFFFFE;
        }
        else
        {
          v19 = ((unsigned __int8)v15 & (unsigned __int8)wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                                           *(unsigned int **)v18,
                                                           *v16) & 1) != 0;
          v20 = v15 & 0xFFFFFFFE;
          v21 = v19;
        }
        v15 = v20 | v21;
        ++v16;
        LODWORD(ChangeStamp) = v15;
      }
    }
  }
  return ChangeStamp;
}
