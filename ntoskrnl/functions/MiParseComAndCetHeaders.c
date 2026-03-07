__int64 __fastcall MiParseComAndCetHeaders(__int64 *a1, unsigned int *a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  unsigned int i; // r8d
  __int64 v14; // rdx
  unsigned int v16; // edx
  __int64 v17; // rsi
  int v18; // ecx
  unsigned int v19; // edi
  unsigned int v20; // eax
  __int64 v21; // r10
  int v22; // r8d
  __int64 v23; // rdx
  char v24; // cl
  char v25; // cl
  int v26; // [rsp+24h] [rbp-144h]
  unsigned int v27; // [rsp+28h] [rbp-140h]
  __int64 v28; // [rsp+40h] [rbp-128h]
  __int64 v29; // [rsp+48h] [rbp-120h]
  unsigned __int64 v30; // [rsp+68h] [rbp-100h]
  _QWORD v31[10]; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-98h]
  __int128 v33; // [rsp+E0h] [rbp-88h]
  __int128 v34; // [rsp+F0h] [rbp-78h]
  __int128 v35; // [rsp+100h] [rbp-68h]
  __int64 v36; // [rsp+110h] [rbp-58h]

  memset(v31, 0, sizeof(v31));
  v6 = 0;
  v28 = 0LL;
  *a3 = 0;
  v7 = a2[20];
  if ( (_DWORD)v7 )
  {
    if ( (v7 & 3) == 0 )
    {
      v20 = a2[21];
      if ( v20 >= 0x48 && (unsigned int)v7 + v20 > (unsigned int)v7 )
        v6 = v7 + 72 <= (unsigned __int64)a2[4];
    }
  }
  v8 = a2[26];
  if ( v8 )
  {
    if ( (v8 & 3) == 0 )
    {
      v9 = a2[27];
      if ( v9 >= 0x1C && v9 + v8 > v8 && v9 + v8 <= a2[4] )
        v6 |= 2u;
    }
  }
  if ( !v6 )
    return 0LL;
  v26 = MiMapImageInSystemSpace(a1, 3, (__int64)v31);
  if ( v26 >= 0 )
  {
    v10 = MiReferenceControlAreaFile((__int64)a1);
    v28 = v10;
    v6 |= 0xCu;
    v11 = *a1;
    v29 = v31[0];
    if ( (v6 & 1) != 0 )
    {
      v21 = a2[20];
      v32 = *(_OWORD *)(v31[0] + v21);
      v33 = *(_OWORD *)(v31[0] + v21 + 16);
      v34 = *(_OWORD *)(v31[0] + v21 + 32);
      v35 = *(_OWORD *)(v31[0] + v21 + 48);
      v36 = *(_QWORD *)(v31[0] + v21 + 64);
      MiLogRelocationRva((unsigned int)v21, 72LL, v10, a1);
      v22 = v33;
      if ( (v33 & 1) != 0 )
      {
        *a3 = 1;
        *(_BYTE *)(v11 + 15) |= 1u;
        if ( WORD2(v32) > 2u || WORD2(v32) == 2 && WORD3(v32) >= 5u )
        {
          v23 = *(_QWORD *)(v11 + 56);
          v24 = *(_BYTE *)(v23 + 51) | 2;
          *(_BYTE *)(v23 + 51) = v24;
          if ( ((v22 & 2) == 0 || (v22 & 0x20000) != 0) && (*(_BYTE *)(v11 + 14) & 0x40) != 0 )
          {
            v25 = v24 | 1;
            *(_BYTE *)(v23 + 51) = v25;
            if ( (v22 & 0x20000) != 0 )
              *(_BYTE *)(v23 + 51) = v25 | 0x20;
          }
        }
      }
    }
    if ( (v6 & 2) != 0 )
    {
      v12 = v29 + a2[26];
      for ( i = 0; ; i = v27 + 1 )
      {
        v27 = i;
        v14 = (a2[27] * (unsigned __int128)0x2492492492492493uLL) >> 64;
        if ( i >= (v14 + (((unsigned __int64)a2[27] - v14) >> 1)) >> 4 )
          break;
        MiLogRelocationRva(a2[26] + 28 * i, 28LL, v28, a1);
        v30 = *(_QWORD *)(v12 + 16);
        if ( HIDWORD(*(_OWORD *)v12) == 20 )
        {
          if ( !HIDWORD(v30) )
            break;
          if ( (v30 & 0x300000000LL) != 0 )
            break;
          if ( !(_DWORD)v30 )
            break;
          if ( (v30 & 3) != 0 )
            break;
          v16 = a2[4];
          if ( (unsigned int)v30 >= v16 || HIDWORD(v30) >= v16 || HIDWORD(v30) + (int)v30 >= v16 )
            break;
          v17 = v28;
          MiLogRelocationRva(HIDWORD(v30), 4LL, v28, a1);
          v18 = *(_DWORD *)(v29 + HIDWORD(v30));
          if ( (v18 & 1) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 1u;
          if ( (v18 & 2) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 2u;
          if ( (v18 & 4) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 4u;
          if ( (v18 & 8) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 8u;
          if ( (v18 & 0x10) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 0x10u;
          v19 = v26;
          if ( (v18 & 0x20) != 0 )
            *(_DWORD *)(*(_QWORD *)(v11 + 56) + 76LL) |= 0x20u;
          goto LABEL_36;
        }
        v12 += 28LL;
      }
    }
  }
  v19 = v26;
  v17 = v28;
LABEL_36:
  if ( (v6 & 4) != 0 )
    MiUnmapImageInSystemSpace((__int64)v31);
  if ( v6 >= 8 )
    MiDereferenceControlAreaFile((__int64)a1, v17);
  return v19;
}
