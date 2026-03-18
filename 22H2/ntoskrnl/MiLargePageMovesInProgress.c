/*
 * XREFs of MiLargePageMovesInProgress @ 0x14064F384
 * Callers:
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 */

_BOOL8 __fastcall MiLargePageMovesInProgress(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 16LL)
                   + 25408LL
                   * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2)
                   + 23004) != 0;
}
