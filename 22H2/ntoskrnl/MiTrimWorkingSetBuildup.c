/*
 * XREFs of MiTrimWorkingSetBuildup @ 0x1403302C8
 * Callers:
 *     MiTrimPte @ 0x140288F80 (MiTrimPte.c)
 *     MiTrimWorkingSetTail @ 0x140330260 (MiTrimWorkingSetTail.c)
 *     MiTrimPteWorker @ 0x14053C128 (MiTrimPteWorker.c)
 * Callees:
 *     RtlClearBits @ 0x140206DC0 (RtlClearBits.c)
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MiSetVaAgeList @ 0x1402ADD40 (MiSetVaAgeList.c)
 */

void __fastcall MiTrimWorkingSetBuildup(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rcx
  __int64 v5; // r14
  unsigned int v6; // r9d
  unsigned __int64 v7; // r12
  __int64 v8; // r12
  int v9; // r13d
  char *v10; // rsi
  unsigned int v11; // r10d
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  char *v15; // rdx
  __int64 i; // r8
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  ULONG v19; // esi
  _DWORD *v20; // r8
  unsigned int v21; // ebx
  _DWORD *v22; // rdx
  __int64 v23; // r9
  int v24; // edi
  __int64 v25; // r9
  unsigned int j; // eax
  unsigned int v27; // ebx
  _DWORD *v28; // rdx
  unsigned int SizeOfBitMap; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+90h] [rbp+18h]

  v2 = 0;
  v31 = *(_QWORD *)(a1 + 24);
  BitMapHeader = 0LL;
  while ( v2 != 2 )
  {
    v4 = 80LL * v2;
    v5 = v4 + a2 + 248;
    if ( !*(_BYTE *)(v5 + 72) )
      goto LABEL_4;
    v6 = 0;
    v7 = (*(_QWORD *)(v5 + 64) & 0xFFFFFFFFFFFFF000uLL) << 16;
    BitMapHeader.SizeOfBitMap = 512;
    BitMapHeader.Buffer = (unsigned int *)(v4 + a2 + 248);
    v8 = (__int64)(v7 & 0xFFFFFFE000000000uLL) >> 16;
    v9 = (((_BYTE)v4 + (_BYTE)a2 - 8) & 4) != 0LL ? 0x20 : 0;
    v10 = (char *)BitMapHeader.Buffer - ((((_BYTE)v4 + (_BYTE)a2 - 8) & 4) != 0LL ? 4 : 0);
    while ( 1 )
    {
      v11 = v6 < BitMapHeader.SizeOfBitMap ? v6 : 0;
      v12 = BitMapHeader.SizeOfBitMap - 1;
      while ( 1 )
      {
        v13 = v12 + v9;
        v14 = v11 + v9;
        if ( v12 - v11 == -1 )
          goto LABEL_41;
        v15 = &v10[8 * ((unsigned __int64)v14 >> 6)];
        for ( i = ~*(_QWORD *)v15 | ((1LL << (v14 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v15 )
        {
          v15 += 8;
          if ( v15 > &v10[8 * ((unsigned __int64)v13 >> 6)] )
            goto LABEL_41;
        }
        _BitScanForward64(&v17, ~i);
        v18 = v17 + ((unsigned int)((v15 - v10) >> 3) << 6);
        if ( v18 > v13 )
        {
LABEL_41:
          v18 = -1;
        }
        else if ( v18 != -1 )
        {
          break;
        }
        if ( !v11 )
          break;
        SizeOfBitMap = v6 + 1;
        if ( v6 + 1 > BitMapHeader.SizeOfBitMap )
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v12 = SizeOfBitMap - 1;
        v11 = 0;
      }
      v19 = v18 - v9;
      if ( v18 == -1 )
        v19 = -1;
      if ( v19 < v6 || v19 == -1 )
        break;
      if ( v19 < 0x200 )
      {
        v20 = (_DWORD *)(v5 + 60);
        v21 = v19;
        v22 = (_DWORD *)(v5 + 4 * ((unsigned __int64)v19 >> 5));
        if ( v22 != (_DWORD *)(v5 + 60) )
        {
          v23 = v19 & 0x1F;
          if ( (*v22 | *((_DWORD *)qword_1400127A0 + v23)) == -1 )
          {
            v21 = v19 - v23 + 32;
            for ( ++v22; v22 < v20 && *v22 == -1; ++v22 )
              v21 += 32;
          }
        }
        while ( v21 < 0x200 && _bittest((const signed __int32 *)v5, v21) )
          ++v21;
        v24 = 0;
        if ( v22 == v20 )
          goto LABEL_32;
        v25 = v21 & 0x1F;
        if ( (*v22 & ~*((_DWORD *)qword_1400127A0 + v25)) != 0 )
          goto LABEL_32;
        v24 = 32 - v25;
        if ( (_DWORD)v25 != 33 )
        {
          v28 = v22 + 1;
          while ( v28 < v20 && !*v28 )
          {
            ++v28;
            v24 += 32;
            if ( v24 == -1 )
              goto LABEL_37;
          }
LABEL_32:
          for ( j = v24 + v21; j < 0x200 && !_bittest((const signed __int32 *)v5, j) && v24 != -1; ++j )
            ++v24;
        }
LABEL_37:
        if ( v24 )
          goto LABEL_38;
        goto LABEL_49;
      }
      v24 = 0;
LABEL_49:
      v21 = 512;
LABEL_38:
      v27 = v21 - v19;
      MiSetVaAgeList(v31, v8 + (v19 << 12), v27, v2 != 0 ? 6 : 0);
      RtlClearBits(&BitMapHeader, v19, v27);
      v6 = v19 + v24 + v27;
      if ( v24 )
      {
        v10 = (char *)(v5 - ((v5 & 4) != 0 ? 4 : 0));
        if ( v6 != 512 )
          continue;
      }
      break;
    }
    *(_BYTE *)(v5 + 72) = 0;
LABEL_4:
    ++v2;
  }
  if ( *(_DWORD *)(a2 + 68) )
    *(_QWORD *)(a2 + 16) -= MiFreeWsleList(v31, a2 + 56, (*(_DWORD *)a2 >> 8) & 1);
}
