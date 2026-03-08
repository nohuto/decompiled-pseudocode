/*
 * XREFs of RtlFillNonVolatileMemory @ 0x1405AD3C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFillMemoryNonTemporal @ 0x140420FC0 (RtlFillMemoryNonTemporal.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlFlushNonVolatileMemory @ 0x1405A57F0 (RtlFlushNonVolatileMemory.c)
 */

__int64 __fastcall RtlFillNonVolatileMemory(char a1, __m128i *a2, size_t a3, unsigned __int8 a4, __int16 a5)
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
    memset(a2, a4, a3);
    return v5;
  }
  if ( a3 < 8 )
  {
LABEL_11:
    memset(a2, a4, a3);
    return (unsigned int)RtlFlushNonVolatileMemory(a1, (__int64)a2, a3, v5);
  }
  RtlFillMemoryNonTemporal(a2, a3, a4);
  return v5;
}
