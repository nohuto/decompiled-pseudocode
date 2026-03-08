/*
 * XREFs of PfSnTraceBufferAllocate @ 0x14035AFEC
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     PfSnTraceGetLogEntry @ 0x14030841C (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x1407E31A8 (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = (_DWORD *)ExAllocatePool2(64LL, 69632LL, 1112564547LL);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x11000uLL);
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
