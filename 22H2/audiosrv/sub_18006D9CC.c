/*
 * XREFs of sub_18006D9CC @ 0x18006D9CC
 * Callers:
 *     sub_18006D9FC @ 0x18006D9FC (sub_18006D9FC.c)
 *     sub_18006DFE8 @ 0x18006DFE8 (sub_18006DFE8.c)
 * Callees:
 *     sub_1800CA4EC @ 0x1800CA4EC (sub_1800CA4EC.c)
 */

__int64 __fastcall sub_18006D9CC(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 8) )
    sub_1800CA4EC();
  return sub_1800472E0(a2, 0x10uLL);
}
