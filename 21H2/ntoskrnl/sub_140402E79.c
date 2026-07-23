/*
 * XREFs of sub_140402E79 @ 0x140402E79
 * Callers:
 *     sub_140402E82 @ 0x140402E82 (sub_140402E82.c)
 * Callees:
 *     sub_140402E70 @ 0x140402E70 (sub_140402E70.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_140402E79()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_140402E70();
  return sub_140402E82(v1, v0);
}
