/*
 * XREFs of memchr_0 @ 0x1800CFE45
 * Callers:
 *     _Stoulx @ 0x1800B2B70 (_Stoulx.c)
 *     _Stoullx @ 0x1800B36B0 (_Stoullx.c)
 *     _Stoxflt @ 0x1800BA074 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
