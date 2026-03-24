/*
 * XREFs of sub_140402C99 @ 0x140402C99
 * Callers:
 *     sub_140402CA2 @ 0x140402CA2 (sub_140402CA2.c)
 * Callees:
 *     sub_140402C90 @ 0x140402C90 (sub_140402C90.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_140402C99()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_140402C90();
  return sub_140402CA2(v1, v0);
}
