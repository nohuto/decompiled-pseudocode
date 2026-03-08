/*
 * XREFs of MiLargePageMovesInProgress @ 0x14064CD64
 * Callers:
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 */

_BOOL8 __fastcall MiLargePageMovesInProgress(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 16LL)
                   + 25408LL
                   * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2)
                   + 23004) != 0;
}
