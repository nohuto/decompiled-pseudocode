/*
 * XREFs of VrpOutputBufferParameter @ 0x1405D57FC
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405D551C (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
