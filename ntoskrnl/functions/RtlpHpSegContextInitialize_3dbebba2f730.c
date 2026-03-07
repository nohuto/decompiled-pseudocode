void __fastcall RtlpHpSegContextInitialize(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        __int128 *a8,
        unsigned int a9)
{
  __int64 v10; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int128 *v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rcx

  v10 = a2;
  memset(a1, 0, 0xC0uLL);
  *(_WORD *)((char *)a1 + 11) = 1031;
  v13 = v10 - 1;
  v14 = (unsigned int)v10 >> 8;
  *a1 = ~v13;
  _BitScanReverse((unsigned int *)&v13, v14);
  *((_BYTE *)a1 + 8) = v13;
  _BitScanForward(&v15, (unsigned int)v14 >> 12);
  *((_BYTE *)a1 + 9) = v15;
  *((_BYTE *)a1 + 10) = (v14 + 0x1FFF) / (unsigned __int64)(unsigned int)v14;
  v16 = a8;
  *((_DWORD *)a1 + 4) = ((~*(_DWORD *)a1 + (((_DWORD)v14 - 1) & (unsigned int)(v14 + 0x1FFF)) - (unsigned int)v14 - 8190) >> 1)
                      - ((v14 - 1) & ((~*(_DWORD *)a1
                                     + (((_DWORD)v14 - 1) & (unsigned int)(v14 + 0x1FFF))
                                     - (unsigned int)v14
                                     - 8190) >> 1));
  v17 = a9;
  *((_BYTE *)a1 + 13) = a9;
  a1[8] = 0LL;
  v18 = *v16;
  a1[10] = (__int64)(a1 + 9);
  a1[9] = (__int64)(a1 + 9);
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[3] = a4;
  *((_WORD *)a1 + 10) = a7 - (_WORD)a1;
  a1[7] = a3;
  *((_WORD *)a1 + 11) = a6 - (_WORD)a1;
  a1[4] = a5;
  v19 = *(_QWORD *)v16 >> 8;
  *(_OWORD *)(a1 + 5) = v18;
  if ( (_BYTE)v19 == 3 || BYTE1(*(_QWORD *)v16) == 2 )
  {
    *((_BYTE *)a1 + 13) |= 0x10u;
    *((_BYTE *)a1 + 13) = *((_BYTE *)a1 + 13) & 0xF8 | 3;
    if ( (v17 & 0x20) != 0 )
    {
      a8 = 0LL;
      RtlpHpQueryVA(a3, v17, &a8, &a9);
      RtlpHpSegMgrVaCtxInitialize(v20, a3, -*(_DWORD *)a1, 0x200000u);
      *(_WORD *)a8 = *(_WORD *)a8 & 0x7800 | 0x8001;
      RtlpHpSegMgrVaCtxInsert((__int64)a1, a3);
    }
  }
}
