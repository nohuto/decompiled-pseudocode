/*
 * XREFs of sub_18012617E @ 0x18012617E
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_96 @ 0x18000F280 (unknown_libname_96.c)
 */

void __fastcall sub_18012617E(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 36) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 36) &= ~1u;
    unknown_libname_96(*(_QWORD **)(a2 + 40));
  }
}
