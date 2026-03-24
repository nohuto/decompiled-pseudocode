/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1C011467C
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C00C71FC (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C0114648 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C027F184 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1C027F248 (wil_StagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // esi
  bool v3; // cf
  bool v4; // zf
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // r10d
  int v9; // ecx
  unsigned int v10; // r8d
  int v11; // ebx
  __int64 *v12; // rdi
  int i; // eax
  __int64 v14; // rcx
  BOOL v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 28) == 2;
  v4 = *(_BYTE *)(a1 + 28) == 3;
  *a2 = 1;
  v6 = v3 || v4;
  v19 = 0LL;
  v20 = 0LL;
  v8 = wil_RtlStagingConfig_QueryFeatureState(&v19, v2, v3 | (unsigned __int8)v4);
  if ( !v8 )
    v8 = wil_StagingConfig_QueryFeatureState(v7, &v19, v2, v6);
  HIDWORD(v21) = 0;
  if ( ((((unsigned __int8)v19 & (unsigned __int8)-(v8 != 0) & 3) << 7) & 0x180) != 0 )
  {
    v9 = 0;
    if ( (_DWORD)v19 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v10 = v9 | ((_DWORD)v20 != 0 ? 0x400 : 0) | (HIDWORD(v20) != 0 ? 0x800 : 0) | (((unsigned __int8)v19 & (unsigned __int8)-(v8 != 0) & 3) << 7);
  v11 = v10 | (v10 >> 6) & 1;
  LODWORD(v21) = v11;
  if ( v10 & 1 | ((v10 & 0x40) != 0) )
  {
    v12 = *(__int64 **)(a1 + 32);
    if ( v12 )
    {
      for ( i = v11 & 1; (v11 & 1) != 0; i = v11 & 1 )
      {
        v14 = *v12;
        if ( !*v12 )
          break;
        if ( *(_BYTE *)(v14 + 30) || *(_BYTE *)(v14 + 29) )
        {
          v16 = i && *(_BYTE *)(v14 + 31);
          v17 = v11 & 0xFFFFFFFE;
        }
        else
        {
          v15 = ((unsigned __int8)v11 & (unsigned __int8)wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                                           *(volatile signed __int32 **)v14,
                                                           *v12) & 1) != 0;
          v16 = v11 & 0xFFFFFFFE;
          v17 = v15;
        }
        v11 = v16 | v17;
        ++v12;
        LODWORD(v21) = v11;
      }
    }
  }
  return v21;
}
