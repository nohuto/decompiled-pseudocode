__int64 __fastcall MNItemHitTest(struct tagMENU *a1, struct tagWND *a2, struct tagPOINT a3)
{
  struct tagMENU *v3; // r10
  __int64 v4; // rax
  int v5; // r11d
  __int64 v6; // r9
  __int64 v7; // r9
  bool v8; // sf
  int v9; // eax
  _QWORD *v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // r10
  unsigned int v14; // r11d
  _QWORD *v15; // r9
  __int64 v16; // rcx
  int v17; // ebx
  int v18; // edi
  int v19; // r10d
  unsigned int v20; // r8d
  __int64 v21; // r9
  unsigned int v22; // r11d
  __int64 *v23; // r10
  __int64 v24; // r8
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // r9d
  __int64 v28; // r10
  unsigned int v29; // r11d
  __int128 v30; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp+20h]

  v31 = (unsigned __int64)a3;
  v3 = a1;
  v30 = 0LL;
  if ( !a1 )
    return 0xFFFFFFFFLL;
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_DWORD *)(v4 + 44);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v4 + 40) & 1) != 0 )
  {
    LODWORD(v30) = *(_DWORD *)(v6 + 88) + 3;
    DWORD2(v30) = *(_DWORD *)(v6 + 96) - 3;
    DWORD1(v30) = *(_DWORD *)(v6 + 92) + 3;
    HIDWORD(v30) = *(_DWORD *)(v6 + 100) - 3;
    if ( !PtInRect(&v30, *(_QWORD *)&a3) )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v7 + 26) & 0x40) != 0 )
      LODWORD(v31) = *(_DWORD *)(v7 + 112) - v31;
    else
      LODWORD(v31) = v31 - *(_DWORD *)(v7 + 104);
    v8 = HIDWORD(v31) - *(_DWORD *)(v7 + 108) < 0;
    v9 = HIDWORD(v31) - *(_DWORD *)(v7 + 108);
    HIDWORD(v31) = v9;
    if ( v8 )
      return 4294967293LL;
    if ( v9 >= *((_DWORD *)v3 + 17) )
      return 4294967292LL;
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 26) & 0x40) != 0 )
      LODWORD(v31) = *(_DWORD *)(v6 + 96) - a3.x;
    else
      LODWORD(v31) = a3.x - *(_DWORD *)(v6 + 88);
    HIDWORD(v31) = a3.y - *(_DWORD *)(v6 + 92);
  }
  if ( (*((_DWORD *)v3 + 31) & 3) != 0 )
  {
    v11 = (_QWORD *)MNGetpItemFromIndex((__int64)v3, *((_DWORD *)v3 + 29));
    v15 = v11;
    if ( v11 )
    {
      v16 = *v11;
      v17 = 0;
      *(_QWORD *)&v30 = 0LL;
      v18 = 0;
      DWORD2(v30) = *(_DWORD *)(v16 + 72);
      if ( v12 < v14 )
      {
        v19 = *(_DWORD *)(v13 + 68);
        while ( v17 < v19 )
        {
          v17 = v18 + *(_DWORD *)(*v15 + 76LL);
          v18 = v17;
          HIDWORD(v30) = v17;
          if ( PtInRect(&v30, v31) )
            return v20;
          DWORD1(v30) = v17;
          v15 = (_QWORD *)(v21 + 96);
          if ( v20 + 1 >= v22 )
            return 0xFFFFFFFFLL;
        }
      }
    }
    return 0xFFFFFFFFLL;
  }
  v23 = (__int64 *)*((_QWORD *)v3 + 11);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v24 = *v23;
    v25 = *(_DWORD *)(*v23 + 68);
    LODWORD(v30) = *(_DWORD *)(*v23 + 64);
    DWORD2(v30) = *(_DWORD *)(v24 + 72) + v30;
    v26 = v25 + *(_DWORD *)(v24 + 76);
    DWORD1(v30) = v25;
    HIDWORD(v30) = v26;
    if ( PtInRect(&v30, v31) )
      break;
    v23 = (__int64 *)(v28 + 96);
    if ( v27 + 1 >= v29 )
      return 0xFFFFFFFFLL;
  }
  return v27;
}
