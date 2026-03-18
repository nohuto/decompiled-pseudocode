/*
 * XREFs of PfSnTraceBufferAllocate @ 0x1402F5D0C
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     PfSnTraceGetLogEntry @ 0x1403147FC (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x14074DEC8 (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
