__int64 __fastcall MiFreeLargePageMemory(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // r12
  unsigned int v7; // r15d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(a1);
  v6 = MiLargePageSizes[v3];
  v7 = 1;
  if ( (a3 & 1) != 0 && (unsigned int)MiColdPageSizeSupported(v3) )
  {
    v7 = 0;
    MiChangePageHeatImmediate(a1, (unsigned int)v3, 0LL);
  }
  v8 = 512LL;
  v9 = a1;
  if ( (unsigned int)v3 > 1 )
    v9 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  else
    v8 = v6;
  MiUpdateLargePageBitMap(
    *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(48 * a1 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)),
    v9,
    v8,
    0,
    0);
  if ( (unsigned int)MiReadyLargePageToFree(a1, (unsigned int)v3, a3) )
    return MiFinishLargePageFree(48 * a1 - 0x220000000000LL, (a3 & 1) == 0, v7, (a3 >> 3) & 1);
  else
    return 0LL;
}
