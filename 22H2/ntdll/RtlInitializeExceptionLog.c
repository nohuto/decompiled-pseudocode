/*
 * XREFs of RtlInitializeExceptionLog @ 0x180100798
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

PVOID RtlInitializeExceptionLog()
{
  PVOID result; // rax

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x11620uLL);
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
    return memset(result, 0, 0x11620uLL);
  return result;
}
