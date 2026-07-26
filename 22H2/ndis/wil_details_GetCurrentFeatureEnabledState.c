/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1C003E170
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C003E01C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C003E01C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C00F9640 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1C00F9704 (wil_StagingConfig_QueryFeatureState.c)
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
  unsigned int ***v12; // rdi
  int i; // eax
  unsigned int **v14; // rcx
  int v15; // eax
  BOOL v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp+8h]
  __int64 v23; // [rsp+68h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 28) == 2;
  v4 = *(_BYTE *)(a1 + 28) == 3;
  *a2 = 1;
  v6 = v3 || v4;
  v20 = 0LL;
  v21 = 0LL;
  v8 = wil_RtlStagingConfig_QueryFeatureState(&v20, v2, v3 | (unsigned __int8)v4);
  if ( !v8 )
    v8 = wil_StagingConfig_QueryFeatureState(v7, &v20, v2, v6);
  HIDWORD(v22) = 0;
  if ( ((((unsigned __int8)v20 & (unsigned __int8)-(v8 != 0) & 3) << 7) & 0x180) != 0 )
  {
    v9 = 0;
    if ( (_DWORD)v20 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v10 = v9 | ((_DWORD)v21 != 0 ? 0x400 : 0) | (HIDWORD(v21) != 0 ? 0x800 : 0) | (((unsigned __int8)v20 & (unsigned __int8)-(v8 != 0) & 3) << 7);
  v11 = v10 | (v10 >> 6) & 1;
  LODWORD(v22) = v11;
  if ( v10 & 1 | ((v10 & 0x40) != 0) )
  {
    v12 = *(unsigned int ****)(a1 + 32);
    if ( v12 )
    {
      for ( i = v11 & 1; (v11 & 1) != 0; i = v11 & 1 )
      {
        v14 = *v12;
        if ( !*v12 )
          break;
        if ( *((_BYTE *)v14 + 30) || *((_BYTE *)v14 + 29) )
        {
          v17 = i && *((_BYTE *)v14 + 31);
          v18 = v11 & 0xFFFFFFFE;
        }
        else
        {
          v23 = **v14;
          if ( (v23 & 2) != 0 )
            v15 = **v14;
          else
            LOBYTE(v15) = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                            (volatile signed __int32 *)*v14,
                            v23,
                            (__int64)v14);
          v16 = ((unsigned __int8)v11 & (unsigned __int8)v15 & 1) != 0;
          v17 = v11 & 0xFFFFFFFE;
          v18 = v16;
        }
        v11 = v17 | v18;
        ++v12;
        LODWORD(v22) = v11;
      }
    }
  }
  return v22;
}
