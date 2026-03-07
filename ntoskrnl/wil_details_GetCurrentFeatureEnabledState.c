__int64 __fastcall wil_details_GetCurrentFeatureEnabledState(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  bool v5; // cf
  bool v6; // zf
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // ecx
  int v10; // ebx
  __int64 *v11; // rdi
  __int64 v12; // rax
  BOOL v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp+8h]

  v3 = *(unsigned int *)(a1 + 24);
  v5 = *(_BYTE *)(a1 + 28) == 2;
  v6 = *(_BYTE *)(a1 + 28) == 3;
  *a2 = 1;
  v18 = 0LL;
  v17 = 0LL;
  v7 = wil_RtlStagingConfig_QueryFeatureState(&v17, v3, v5 | (unsigned __int8)v6, 0LL);
  HIDWORD(v19) = 0;
  if ( ((((unsigned __int8)v17 & (unsigned __int8)-(v7 != 0) & 3) << 7) & 0x180) != 0 )
  {
    v8 = 0;
    if ( (_DWORD)v17 == 2 )
      v8 = 64;
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 31) != 0 ? 0x40 : 0;
  }
  v9 = ((_DWORD)v18 != 0 ? 0x400 : 0) | (HIDWORD(v18) != 0 ? 0x800 : 0) | (((unsigned __int8)v17 & (unsigned __int8)-(v7 != 0) & 3) << 7) | v8;
  v10 = v9 | (v9 >> 6) & 1;
  LODWORD(v19) = v10;
  if ( v9 & 1 | ((v9 & 0x40) != 0) )
  {
    v11 = *(__int64 **)(a1 + 32);
    if ( v11 )
    {
      while ( (v10 & 1) != 0 )
      {
        v12 = *v11;
        if ( !*v11 )
          break;
        if ( *(_BYTE *)(v12 + 30) || *(_BYTE *)(v12 + 29) )
        {
          v14 = (v10 & 1) != 0 && *(_BYTE *)(v12 + 31);
          v15 = v10 & 0xFFFFFFFE;
        }
        else
        {
          v13 = ((unsigned __int8)v10 & (unsigned __int8)wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                                           *(_DWORD **)v12,
                                                           *v11) & 1) != 0;
          v14 = v10 & 0xFFFFFFFE;
          v15 = v13;
        }
        v10 = v14 | v15;
        LODWORD(v19) = v10;
        ++v11;
      }
    }
  }
  return v19;
}
