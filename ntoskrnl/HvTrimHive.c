/*
 * XREFs of HvTrimHive @ 0x14085BB7C
 * Callers:
 *     CmpTrimHive @ 0x1407317CC (CmpTrimHive.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062B2BC (MiDeprioritizeVirtualAddresses.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 */

void __fastcall HvTrimHive(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 CellMap; // rax
  __int64 v7; // r10
  char *AnyMultiplexedVm; // rax
  __int64 v9; // r11
  __int64 v10; // r10

  v4 = a2;
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) == 0 && a2 < a3 )
  {
    do
    {
      CellMap = HvpGetCellMap(a1, v4);
      v7 = *(_QWORD *)(CellMap + 8);
      if ( (v7 & 2) == 0 )
      {
        *(_QWORD *)(CellMap + 8) = v7 | 4;
        if ( (v7 & 1) != 0 && (v7 & 8) != 0 )
        {
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
          MiDeprioritizeVirtualAddresses(
            v10 & 0xFFFFFFFFFFFFFFF0uLL,
            (unsigned __int64)*(unsigned int *)(v9 + 16) >> 12,
            (__int64)AnyMultiplexedVm,
            24);
        }
      }
      v4 += 4096;
    }
    while ( v4 < a3 );
  }
}
