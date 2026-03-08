/*
 * XREFs of VrpOutputBufferParameter @ 0x1406C16FC
 * Callers:
 *     VrpPostQueryKey @ 0x1406C14A4 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x140736428 (VrpPostEnumerateKey.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
