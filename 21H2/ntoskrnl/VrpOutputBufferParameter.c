/*
 * XREFs of VrpOutputBufferParameter @ 0x140780D00
 * Callers:
 *     VrpPostEnumerateKey @ 0x140691CD8 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140780AA8 (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
