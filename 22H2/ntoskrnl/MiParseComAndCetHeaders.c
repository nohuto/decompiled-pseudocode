/*
 * XREFs of MiParseComAndCetHeaders @ 0x1407000C4
 * Callers:
 *     MiCreateNewSection @ 0x140700490 (MiCreateNewSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402D7994 (MiDereferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiLogRelocationRva @ 0x1406632A4 (MiLogRelocationRva.c)
 *     MiUnmapImageInSystemSpace @ 0x14066BB40 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x14066BCCC (MiMapImageInSystemSpace.c)
 */

__int64 __fastcall MiParseComAndCetHeaders(__int64 *a1, unsigned int *a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  ULONG_PTR v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r10
  int v15; // r8d
  __int64 v16; // rdx
  char v17; // cl
  char v18; // cl
  unsigned __int64 v19; // r14
  unsigned int i; // r8d
  __int64 v21; // rdx
  unsigned int v22; // edx
  int v23; // ecx
  unsigned int v24; // edi
  int v25; // [rsp+24h] [rbp-144h]
  unsigned __int64 v26; // [rsp+28h] [rbp-140h]
  unsigned int v27; // [rsp+30h] [rbp-138h]
  unsigned __int64 v28; // [rsp+48h] [rbp-120h]
  __int64 v29; // [rsp+68h] [rbp-100h]
  unsigned __int64 v30[10]; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+D0h] [rbp-98h]
  __int128 v32; // [rsp+E0h] [rbp-88h]
  __int128 v33; // [rsp+F0h] [rbp-78h]
  __int128 v34; // [rsp+100h] [rbp-68h]
  __int64 v35; // [rsp+110h] [rbp-58h]

  memset(v30, 0, sizeof(v30));
  v6 = 0;
  v26 = 0LL;
  *a3 = 0;
  v7 = a2[20];
  if ( (_DWORD)v7 )
  {
    if ( (v7 & 3) == 0 )
    {
      v8 = a2[21];
      if ( v8 >= 0x48 && (unsigned int)v7 + v8 > (unsigned int)v7 )
        v6 = v7 + 72 <= (unsigned __int64)a2[4];
    }
  }
  v9 = a2[26];
  if ( v9 )
  {
    if ( (v9 & 3) == 0 )
    {
      v10 = a2[27];
      if ( v10 >= 0x1C && v10 + v9 > v9 && v10 + v9 <= a2[4] )
        v6 |= 2u;
    }
  }
  if ( !v6 )
    return 0LL;
  v25 = MiMapImageInSystemSpace(a1, 3, (__int64)v30);
  if ( v25 >= 0 )
  {
    v12 = MiReferenceControlAreaFile((__int64)a1);
    v26 = v12;
    v6 |= 0xCu;
    v13 = *a1;
    v28 = v30[0];
    if ( (v6 & 1) != 0 )
    {
      v14 = a2[20];
      v31 = *(_OWORD *)(v30[0] + v14);
      v32 = *(_OWORD *)(v30[0] + v14 + 16);
      v33 = *(_OWORD *)(v30[0] + v14 + 32);
      v34 = *(_OWORD *)(v30[0] + v14 + 48);
      v35 = *(_QWORD *)(v30[0] + v14 + 64);
      MiLogRelocationRva(v14, 0x48u, v12, (__int64)a1);
      v15 = v32;
      if ( (v32 & 1) != 0 )
      {
        *a3 = 1;
        *(_BYTE *)(v13 + 15) |= 1u;
        if ( WORD2(v31) > 2u || WORD2(v31) == 2 && WORD3(v31) >= 5u )
        {
          v16 = *(_QWORD *)(v13 + 56);
          v17 = *(_BYTE *)(v16 + 51) | 2;
          *(_BYTE *)(v16 + 51) = v17;
          if ( (v15 & 0x20002) != 2 && (*(_BYTE *)(v13 + 14) & 0x40) != 0 )
          {
            v18 = v17 | 1;
            *(_BYTE *)(v16 + 51) = v18;
            if ( (v15 & 0x20000) != 0 )
              *(_BYTE *)(v16 + 51) = v18 | 0x20;
          }
        }
      }
    }
    if ( (v6 & 2) != 0 )
    {
      v19 = v28 + a2[26];
      for ( i = 0; ; i = v27 + 1 )
      {
        v27 = i;
        v21 = (a2[27] * (unsigned __int128)0x2492492492492493uLL) >> 64;
        if ( i >= (v21 + (((unsigned __int64)a2[27] - v21) >> 1)) >> 4 )
          break;
        MiLogRelocationRva(a2[26] + 28 * i, 0x1Cu, v26, (__int64)a1);
        v29 = *(_QWORD *)(v19 + 16);
        if ( HIDWORD(*(_OWORD *)v19) == 20 )
        {
          if ( !HIDWORD(v29) )
            break;
          if ( (v29 & 0x300000000LL) != 0 )
            break;
          if ( !(_DWORD)v29 )
            break;
          if ( (v29 & 3) != 0 )
            break;
          v22 = a2[4];
          if ( (unsigned int)v29 >= v22 || HIDWORD(v29) >= v22 || HIDWORD(v29) + (int)v29 >= v22 )
            break;
          MiLogRelocationRva(HIDWORD(v29), 4u, v26, (__int64)a1);
          v23 = *(_DWORD *)(v28 + HIDWORD(v29));
          if ( (v23 & 1) != 0 )
            *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 1u;
          if ( (v23 & 2) != 0 )
            *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 2u;
          if ( (v23 & 4) != 0 )
            *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 4u;
          if ( (v23 & 8) != 0 )
            *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 8u;
          if ( (v23 & 0x10) != 0 )
            *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 0x10u;
          v24 = v25;
          if ( (v23 & 0x20) != 0 )
            *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 0x20u;
          goto LABEL_49;
        }
        v19 += 28LL;
      }
    }
  }
  v24 = v25;
LABEL_49:
  if ( (v6 & 4) != 0 )
    MiUnmapImageInSystemSpace(v30);
  if ( v6 >= 8 )
    MiDereferenceControlAreaFile((__int64)a1, v26);
  return v24;
}
