/*
 * XREFs of PfSnTraceBufferAllocate @ 0x14026DCA4
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     PfSnTraceGetLogEntry @ 0x14029AF20 (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x14062E040 (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11000uLL, 0x42506343u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x11000uLL);
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
