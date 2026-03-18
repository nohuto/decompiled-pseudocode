/*
 * XREFs of _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C00539C0
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 * Callees:
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C0086ABC (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 anonymous_namespace_::CFrameIdGenerator::Initialize()
{
  PVOID v0; // rsi
  unsigned int v1; // edi
  __int64 Pool2; // rbx
  __int64 v4; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v0 = gpLeakTrackingAllocator;
  v1 = 0;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70694843) != 0x70694843
    || (v4 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 24LL);
LABEL_3:
    if ( !Pool2 )
    {
LABEL_14:
      qword_1C0296BE0 = 0LL;
      return (unsigned int)-1073741801;
    }
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v4) != 1885947971 )
  {
    if ( ++v4 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 40LL);
  if ( !Pool2 )
    goto LABEL_14;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v0,
                             Pool2,
                             BackTrace) )
      goto LABEL_13;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v0,
                           Pool2,
                           BackTrace) )
  {
LABEL_13:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_14;
  }
LABEL_4:
  *(_DWORD *)Pool2 = 1;
  CInpLockGuard::Initialize((CInpLockGuard *)(Pool2 + 8));
  qword_1C0296BE0 = (void *)Pool2;
  return v1;
}
