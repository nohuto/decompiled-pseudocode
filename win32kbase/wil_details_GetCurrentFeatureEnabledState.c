/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1C0155280
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0155180 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1C00CC088 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C03025D0 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  _BOOL8 v5; // r8
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ecx
  int v9; // ebx
  __int64 *v10; // rdi
  __int64 v11; // rax
  BOOL v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp+8h]

  v3 = *(unsigned int *)(a1 + 24);
  v5 = (unsigned __int8)(*(_BYTE *)(a1 + 28) - 2) <= 1u;
  *a2 = 1;
  v17 = 0LL;
  v16 = 0LL;
  v6 = wil_RtlStagingConfig_QueryFeatureState(&v16, v3, v5);
  HIDWORD(v18) = 0;
  if ( ((((unsigned __int8)v16 & (unsigned __int8)-(v6 != 0) & 3) << 7) & 0x180) != 0 )
  {
    v7 = 0;
    if ( (_DWORD)v16 == 2 )
      v7 = 64;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v8 = ((_DWORD)v17 != 0 ? 0x400 : 0) | (HIDWORD(v17) != 0 ? 0x800 : 0) | (((unsigned __int8)v16 & (unsigned __int8)-(v6 != 0) & 3) << 7) | v7;
  v9 = v8 | (v8 >> 6) & 1;
  LODWORD(v18) = v9;
  if ( v8 & 1 | ((v8 & 0x40) != 0) )
  {
    v10 = *(__int64 **)(a1 + 32);
    if ( v10 )
    {
      while ( (v9 & 1) != 0 )
      {
        v11 = *v10;
        if ( !*v10 )
          break;
        if ( *(_BYTE *)(v11 + 30) || *(_BYTE *)(v11 + 29) )
        {
          v13 = (v9 & 1) != 0 && *(_BYTE *)(v11 + 31);
          v14 = v9 & 0xFFFFFFFE;
        }
        else
        {
          v12 = ((unsigned __int8)v9 & (unsigned __int8)wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                                          *(unsigned int **)v11,
                                                          *v10) & 1) != 0;
          v13 = v9 & 0xFFFFFFFE;
          v14 = v12;
        }
        v9 = v13 | v14;
        LODWORD(v18) = v9;
        ++v10;
      }
    }
  }
  return v18;
}
