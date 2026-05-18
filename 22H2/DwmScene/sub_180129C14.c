/*
 * XREFs of sub_180129C14 @ 0x180129C14
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_96 @ 0x18000F280 (unknown_libname_96.c)
 */

void __fastcall sub_180129C14(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 84) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 84) &= ~1u;
    unknown_libname_96(*(_QWORD **)(a2 + 112));
  }
}
