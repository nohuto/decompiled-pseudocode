__int64 __fastcall MiInitializeLargePageAllocationPacket(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // rsi
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // edx
  int v15; // r10d
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned int v20; // r8d

  v10 = a4;
  v11 = 25408LL * a6 + *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 160) = v11;
  if ( !*(_QWORD *)(v11 + 22832) && (MiFlags & 0x30) != 0 )
    return 0LL;
  v12 = 0LL;
  *(_QWORD *)(a1 + 24) = a5;
  *(_DWORD *)(a1 + 36) = a7;
  *(_DWORD *)(a1 + 40) = a8;
  *(_QWORD *)(a1 + 48) = a10;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 16) = v10;
  v13 = MiLargePageSizes[v10];
  *(_QWORD *)(a1 + 176) = v11 + 1072 * v10;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 32) = a6;
  *(_DWORD *)(a1 + 44) = a9;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_WORD *)(a1 + 57) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = v13;
  *(_DWORD *)(a1 + 84) = (a9 & 1) == 0;
  if ( (a9 & 4) != 0 || (a9 & 8) != 0 )
  {
    v14 = 1;
    v15 = 0;
  }
  else
  {
    v14 = 0;
    v15 = 1;
  }
  *(_DWORD *)(a1 + 88) = v15;
  *(_DWORD *)(a1 + 92) = v14;
  *(_DWORD *)(a1 + 80) = ((a9 & 2) != 0) + 1;
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 59) = 17;
  *(_QWORD *)(a1 + 168) = 0LL;
  if ( a3 )
  {
    v16 = v13 << 12;
    if ( v16 == 0x10000 )
      v17 = a3 >> 16;
    else
      v17 = a3 / v16;
    v18 = v10;
  }
  else
  {
    v12 = v11 + 23120;
    v18 = v10;
    LODWORD(v17) = *(_DWORD *)(4 * v10 + v11 + 23120);
  }
  *(_QWORD *)(a1 + 152) = v12;
  v19 = dword_140C65800[v18];
  *(_DWORD *)(a1 + 76) = v19;
  if ( v19 == 16 )
    v20 = v17 & 0xF;
  else
    v20 = (unsigned int)v17 % v19;
  *(_DWORD *)(a1 + 72) = v20;
  return 1LL;
}
