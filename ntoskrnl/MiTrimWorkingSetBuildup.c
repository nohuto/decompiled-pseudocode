/*
 * XREFs of MiTrimWorkingSetBuildup @ 0x1402E2A60
 * Callers:
 *     MiTrimWorkingSetTail @ 0x1402E29B0 (MiTrimWorkingSetTail.c)
 *     MiTrimPteWorker @ 0x140349308 (MiTrimPteWorker.c)
 * Callees:
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 */

void __fastcall MiTrimWorkingSetBuildup(__int64 a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // r15
  unsigned int v6; // r8d
  unsigned __int64 v7; // r12
  __int64 v8; // r12
  int v9; // r13d
  char *v10; // rsi
  __int64 v11; // r9
  unsigned int v12; // eax
  ULONG v13; // r11d
  unsigned int v14; // ecx
  char *v15; // rbx
  __int64 i; // rdx
  unsigned __int64 v17; // rax
  ULONG v18; // ebx
  unsigned int v19; // esi
  unsigned __int64 v20; // r10
  int *v21; // r8
  _DWORD *v22; // rax
  int j; // r9d
  __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned __int64 k; // rax
  unsigned int *v27; // rax
  unsigned int v28; // esi
  ULONG v29; // edi
  unsigned int SizeOfBitMap; // eax
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+90h] [rbp+18h]

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  v3 = 0;
  LODWORD(BitMapHeader.Buffer) = 0;
  v32 = *(_QWORD *)(a1 + 24);
  while ( v3 != 2 )
  {
    v4 = 80LL * v3;
    v5 = v4 + a2 + 256;
    if ( !*(_BYTE *)(v5 + 72) )
      goto LABEL_4;
    v6 = 0;
    v7 = (*(_QWORD *)(v5 + 64) & 0xFFFFFFFFFFFFF000uLL) << 16;
    BitMapHeader.SizeOfBitMap = 512;
    BitMapHeader.Buffer = (unsigned int *)(v4 + a2 + 256);
    v8 = (__int64)(v7 & 0xFFFFFFE000000000uLL) >> 16;
    v9 = (((_BYTE)v4 + (_BYTE)a2) & 4) != 0LL ? 0x20 : 0;
    v10 = (char *)BitMapHeader.Buffer - ((((_BYTE)v4 + (_BYTE)a2) & 4) != 0LL ? 4 : 0);
    do
    {
      v11 = v6 < BitMapHeader.SizeOfBitMap ? v6 : 0;
      v12 = BitMapHeader.SizeOfBitMap - 1;
      while ( 1 )
      {
        v13 = v12 + v9;
        v14 = v11 + v9;
        if ( v12 - (_DWORD)v11 != -1 )
        {
          v15 = &v10[8 * ((unsigned __int64)v14 >> 6)];
          for ( i = ~*(_QWORD *)v15 | ((1LL << (v14 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v15 )
          {
            v15 += 8;
            if ( v15 > &v10[8 * ((unsigned __int64)v13 >> 6)] )
              goto LABEL_36;
          }
          _BitScanForward64(&v17, ~i);
          v18 = v17 + ((unsigned int)((v15 - v10) >> 3) << 6);
          if ( v18 <= v13 )
            break;
        }
LABEL_36:
        v18 = -1;
LABEL_41:
        if ( !(_DWORD)v11 )
          goto LABEL_17;
        SizeOfBitMap = v6 + 1;
        if ( v6 + 1 > BitMapHeader.SizeOfBitMap )
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v12 = SizeOfBitMap - 1;
        v11 = 0LL;
      }
      if ( v18 == -1 )
        goto LABEL_41;
      v18 -= v9;
LABEL_17:
      if ( v18 < v6 || v18 == -1 )
        break;
      v19 = 0;
      if ( v18 < 0x200 )
      {
        v20 = v5 + 60;
        v21 = (int *)(v5 + 4 * ((unsigned __int64)v18 >> 5));
        v22 = v21 + 1;
        for ( j = ((1 << (v18 & 0x1F)) - 1) | *v21; ; j = *v21 )
        {
          v11 = (unsigned int)~j;
          if ( (_DWORD)v11 )
            break;
          if ( (unsigned __int64)v22 > v20 )
            goto LABEL_39;
          ++v21;
          ++v22;
        }
        _BitScanForward64((unsigned __int64 *)&v24, (unsigned int)v11);
        v25 = v24 + 32 * (((__int64)v21 - v5) >> 2);
        if ( v25 > 0x200 )
        {
LABEL_39:
          v25 = 512;
          goto LABEL_31;
        }
        for ( k = ~((unsigned int)v11 | ((1 << v24) - 1)); ; k = *v27 )
        {
          if ( (_DWORD)k )
          {
            _BitScanForward64(&k, k);
            goto LABEL_28;
          }
          v27 = (unsigned int *)(v21 + 1);
          if ( (unsigned __int64)(v21 + 1) > v20 )
            break;
          ++v21;
        }
        LODWORD(k) = 32;
LABEL_28:
        v28 = k + 32 * (((__int64)v21 - v5) >> 2);
        if ( v28 > 0x200 )
          v28 = 512;
        v19 = v28 - v25;
LABEL_31:
        if ( v19 )
          goto LABEL_47;
      }
      v25 = 512;
LABEL_47:
      LOBYTE(v11) = v3 != 0 ? 6 : 0;
      v29 = v25 - v18;
      MiSetVaAgeList(v32, v8 + (v18 << 12), v29, v11);
      RtlClearBits(&BitMapHeader, v18, v29);
      v6 = v29 + v19 + v18;
      if ( !v19 )
        break;
      v10 = (char *)(v5 - ((v5 & 4) != 0 ? 4 : 0));
    }
    while ( v6 != 512 );
    *(_BYTE *)(v5 + 72) = 0;
LABEL_4:
    ++v3;
  }
  if ( *(_DWORD *)(a2 + 76) )
    *(_QWORD *)(a2 + 16) -= MiFreeWsleList(v32, a2 + 64, (*(_DWORD *)a2 >> 12) & 1);
}
