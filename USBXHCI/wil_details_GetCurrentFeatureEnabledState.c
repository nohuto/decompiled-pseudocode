/*
 * XREFs of wil_details_GetCurrentFeatureEnabledState @ 0x1C001F4DC
 * Callers:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C001F388 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C001F388 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C006D330 (wil_RtlStagingConfig_QueryFeatureState.c)
 */

__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  _BOOL8 v5; // r8
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ecx
  int v9; // ebx
  unsigned int ***v10; // rdi
  unsigned int **v11; // rcx
  int v12; // eax
  BOOL v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp+8h]
  __int64 v20; // [rsp+58h] [rbp+10h]

  v3 = *(unsigned int *)(a1 + 24);
  v5 = (unsigned __int8)(*(_BYTE *)(a1 + 28) - 2) <= 1u;
  *a2 = 1;
  v18 = 0LL;
  v17 = 0LL;
  v6 = wil_RtlStagingConfig_QueryFeatureState(&v17, v3, v5);
  HIDWORD(v19) = 0;
  if ( ((((unsigned __int8)v17 & (unsigned __int8)-(v6 != 0) & 3) << 7) & 0x180) != 0 )
  {
    v7 = 0;
    if ( (_DWORD)v17 == 2 )
      v7 = 64;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v8 = ((_DWORD)v18 != 0 ? 0x400 : 0) | (HIDWORD(v18) != 0 ? 0x800 : 0) | (((unsigned __int8)v17 & (unsigned __int8)-(v6 != 0) & 3) << 7) | v7;
  v9 = v8 | (v8 >> 6) & 1;
  LODWORD(v19) = v9;
  if ( v8 & 1 | ((v8 & 0x40) != 0) )
  {
    v10 = *(unsigned int ****)(a1 + 32);
    if ( v10 )
    {
      while ( (v9 & 1) != 0 )
      {
        v11 = *v10;
        if ( !*v10 )
          break;
        if ( *((_BYTE *)v11 + 30) || *((_BYTE *)v11 + 29) )
        {
          v14 = (v9 & 1) != 0 && *((_BYTE *)v11 + 31);
          v15 = v9 & 0xFFFFFFFE;
        }
        else
        {
          v20 = **v11;
          if ( (v20 & 2) != 0 )
            v12 = **v11;
          else
            LOBYTE(v12) = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
                            (volatile signed __int32 *)*v11,
                            v20,
                            (__int64)v11);
          v13 = ((unsigned __int8)v9 & (unsigned __int8)v12 & 1) != 0;
          v14 = v9 & 0xFFFFFFFE;
          v15 = v13;
        }
        v9 = v14 | v15;
        LODWORD(v19) = v9;
        ++v10;
      }
    }
  }
  return v19;
}
