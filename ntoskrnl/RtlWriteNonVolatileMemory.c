/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x1405AD540
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x140420E80 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlFlushNonVolatileMemory @ 0x1405A57F0 (RtlFlushNonVolatileMemory.c)
 */

__int64 __fastcall RtlWriteNonVolatileMemory(char a1, void *a2, const void *a3, size_t a4, __int16 a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( (a5 & 3) == 1 )
  {
    if ( (a5 & 0x100) != 0 )
      LOBYTE(v5) = 1;
    goto LABEL_11;
  }
  if ( (a5 & 2) == 0 )
  {
    memmove(a2, a3, a4);
    return v5;
  }
  if ( a4 < 8 )
  {
LABEL_11:
    memmove(a2, a3, a4);
    return (unsigned int)RtlFlushNonVolatileMemory(a1, (__int64)a2, a4, v5);
  }
  RtlCopyMemoryNonTemporal(a2, a3, a4);
  return v5;
}
