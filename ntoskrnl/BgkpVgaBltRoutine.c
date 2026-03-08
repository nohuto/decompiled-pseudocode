/*
 * XREFs of BgkpVgaBltRoutine @ 0x14054CC90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall BgkpVgaBltRoutine(void **a1, unsigned int *a2, char a3)
{
  if ( a3 )
  {
    memset(a1[2], 0, *((unsigned int *)a1 + 3));
    return 3221225473LL;
  }
  else
  {
    VidBitBltEx(*a2, a2[1], *((unsigned int *)a1 + 1), *(unsigned int *)a1, a1[2]);
    return 0LL;
  }
}
