/*
 * XREFs of sub_140402CA2 @ 0x140402CA2
 * Callers:
 *     KiSetSpecCtrlNmi @ 0x140402B40 (KiSetSpecCtrlNmi.c)
 * Callees:
 *     sub_140402C99 @ 0x140402C99 (sub_140402C99.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_140402CA2()
{
  sub_140402C99();
  return sub_140402CAB();
}
