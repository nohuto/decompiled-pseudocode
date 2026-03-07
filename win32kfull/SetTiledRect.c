__int64 __fastcall SetTiledRect(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v11; // rsi
  unsigned int v12; // r10d
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebp
  unsigned int v22; // eax
  __int64 v23; // rsi
  unsigned int v24; // r10d
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // ebx
  unsigned int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // r10d
  int v31; // ecx
  int v32; // ebx
  int v33; // r11d
  int v34; // r9d
  int v35; // r10d
  int v36; // r8d
  int v37; // ecx
  int v38; // r8d
  int v39; // ecx
  __int64 result; // rax
  __int128 v41; // [rsp+30h] [rbp-28h] BYREF

  v41 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  LODWORD(v6) = 0;
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 8);
    if ( v7 )
      v6 = *(_QWORD *)(v7 + 24);
  }
  InternalGetRealClientRect(v6, (unsigned int)&v41, 2, a3, 0);
  ++*(_WORD *)(a3 + 74);
  DpiForSystem = GetDpiForSystem(v9, v8);
  v11 = 120LL * (int)GetDpiCacheSlot(DpiForSystem);
  v13 = gpsi;
  v14 = gpsi;
  v15 = *(_DWORD *)(v11 + gpsi + 2340);
  if ( v15 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(v12);
    v13 = gpsi;
    v15 = *(_DWORD *)(v11 + gpsi + 2340);
    if ( v15 == -1 )
      v15 = 0;
  }
  v16 = GetDpiForSystem(v13, v14);
  v17 = 120LL * (int)GetDpiCacheSlot(v16);
  v19 = gpsi;
  v20 = *(unsigned int *)(v17 + gpsi + 2332);
  if ( (_DWORD)v20 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(v18);
    v20 = *(unsigned int *)(v17 + gpsi + 2332);
    if ( (_DWORD)v20 == -1 )
      v20 = 0LL;
  }
  v21 = v20 + v15;
  v22 = GetDpiForSystem(v20, v19);
  v23 = 120LL * (int)GetDpiCacheSlot(v22);
  v25 = gpsi;
  v26 = gpsi;
  v27 = *(_DWORD *)(v23 + gpsi + 2344);
  if ( v27 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(v24);
    v25 = gpsi;
    v27 = *(_DWORD *)(v23 + gpsi + 2344);
    if ( v27 == -1 )
      v27 = 0;
  }
  v28 = GetDpiForSystem(v25, v26);
  v29 = 120LL * (int)GetDpiCacheSlot(v28);
  v31 = *(_DWORD *)(v29 + gpsi + 2336);
  if ( v31 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(v30);
    v31 = *(_DWORD *)(v29 + gpsi + 2336);
    if ( v31 == -1 )
      v31 = 0;
  }
  v32 = v31 + v27;
  v33 = DWORD2(v41) - v41;
  v34 = HIDWORD(v41);
  v35 = DWORD1(v41);
  v36 = v21 * *(__int16 *)(a3 + 74);
  v37 = v32 * *(__int16 *)(a3 + 74);
  if ( v36 > (DWORD2(v41) - (int)v41) / 4 || v37 > (HIDWORD(v41) - DWORD1(v41)) / 4 )
  {
    *(_WORD *)(a3 + 74) = 0;
    v36 = v21;
    v37 = v32;
  }
  v38 = v41 + v36;
  *a2 = v38;
  v39 = v35 + v37;
  a2[2] = v38 + (v33 + 2 * (v33 + 1)) / 4;
  a2[1] = v39;
  result = (unsigned int)(v39 + (v34 - v35 + 2 * (v34 - v35 + 1)) / 4);
  a2[3] = result;
  return result;
}
