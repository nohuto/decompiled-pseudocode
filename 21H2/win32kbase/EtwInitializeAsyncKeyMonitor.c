/*
 * XREFs of EtwInitializeAsyncKeyMonitor @ 0x1C00C4DC8
 * Callers:
 *     EtwTraceGetAsyncKeyState @ 0x1C003CF4C (EtwTraceGetAsyncKeyState.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 EtwInitializeAsyncKeyMonitor()
{
  PVOID v0; // rdi
  signed __int64 Pool2; // rbx
  __int64 v3; // rax
  PVOID BackTrace[21]; // [rsp+20h] [rbp-A8h] BYREF

  v0 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x61734B45) != 0x61734B45
    || (v3 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 104LL);
LABEL_3:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v3) != 1634945861 )
  {
    if ( ++v3 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 120LL);
  if ( !Pool2 )
    return 3221225495LL;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v0,
                             Pool2,
                             BackTrace) )
      goto LABEL_15;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v0,
                           Pool2,
                           BackTrace) )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 3221225495LL;
  }
LABEL_4:
  *(_DWORD *)Pool2 = 0;
  *(_DWORD *)(Pool2 + 4) = 0;
  *(_QWORD *)(Pool2 + 96) = 0LL;
  *(_BYTE *)(Pool2 + 88) = 0;
  memset((void *)(Pool2 + 8), -1, 0x50uLL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpAsyncKeyEventMonitor, Pool2, 0LL) )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  return 0LL;
}
