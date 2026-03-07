__int64 __fastcall IvtGetPageFault(_QWORD *a1, int *a2, _QWORD *a3, _WORD *a4, unsigned __int64 *a5, __int64 *a6)
{
  unsigned __int64 v6; // r11
  __int64 v7; // r10
  __int64 v9; // r9
  unsigned __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // r8d
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int128 v29; // [rsp+0h] [rbp-28h] BYREF
  __int128 v30; // [rsp+10h] [rbp-18h]

  v6 = a1[20];
  v7 = a1[1];
  v9 = a1[18];
  v29 = 0LL;
  v12 = v6 >> 5;
  v30 = 0LL;
  while ( 1 )
  {
    v20 = *(_QWORD *)(v7 + 192);
    v21 = (v20 >> 5) & 0x3FFF;
    if ( v21 == ((*(_QWORD *)(v7 + 200) >> 5) & 0x3FFFLL) )
      break;
    v13 = 32 * v21;
    v14 = (*(_QWORD *)(v7 + 192) >> 5) + 1LL;
    v15 = *(_OWORD *)(v13 + v9);
    v16 = *(_OWORD *)(v13 + v9 + 16);
    v17 = 0;
    LODWORD(v13) = ((*(_QWORD *)(v7 + 192) >> 5) & 0x3FFF) + 1;
    v29 = v15;
    if ( (_DWORD)v13 != (_DWORD)v12 )
      v17 = v14;
    v30 = v16;
    *(_QWORD *)(v7 + 192) = v20 ^ ((unsigned int)v20 ^ (32 * v17)) & 0x7FFE0;
    _InterlockedOr((volatile signed __int32 *)&v29, 0);
    v18 = *((_QWORD *)&v29 + 1);
    v19 = BYTE8(v29) & 1;
    if ( (BYTE8(v29) & 1) != 0 || (BYTE8(v29) & 2) != 0 )
    {
      v23 = v29;
      if ( (v29 & 0x100) != 0 )
        v24 = DWORD1(v29) & 0xFFFFF;
      else
        v24 = -1;
      *a2 = v24;
      *a4 = (v18 >> 3) & 0x1FF;
      *a5 = v18 & 0xFFFFFFFFFFFFF000uLL;
      *a3 = WORD1(v23);
      v25 = (16 * ((v18 >> 2) & 1)) | 2;
      if ( (v18 & 2) == 0 )
        v25 = 16 * ((v18 >> 2) & 1);
      v26 = v25 | 1;
      if ( !v19 )
        v26 = v25;
      v27 = v26 | 8;
      if ( (v23 & 0x20000000000000LL) == 0 )
        v27 = v26;
      v28 = v27 | 4;
      if ( (v23 & 0x10000000000000LL) == 0 )
        v28 = v27;
      *a6 = v28;
      return 1LL;
    }
  }
  if ( (*(_DWORD *)(v7 + 220) & 2) == 0 )
    return 0LL;
  *(_DWORD *)(v7 + 220) = 2;
  _InterlockedOr((volatile signed __int32 *)&v29, 0);
  *a2 = -1;
  *a4 = -1;
  *a5 = 0LL;
  *a6 = 32LL;
  return 1LL;
}
