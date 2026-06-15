/*
 * XREFs of sub_1800B4914 @ 0x1800B4914
 * Callers:
 *     sub_18007CA78 @ 0x18007CA78 (sub_18007CA78.c)
 * Callees:
 *     sub_180068E94 @ 0x180068E94 (sub_180068E94.c)
 */

BOOL __fastcall sub_1800B4914(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_180068E94(v1);
  return result;
}
