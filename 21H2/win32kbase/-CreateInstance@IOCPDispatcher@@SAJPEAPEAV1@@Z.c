/*
 * XREFs of ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C005CC08
 * Callers:
 *     UserKSTInitialize @ 0x1C0054360 (UserKSTInitialize.c)
 *     UserActivateMITInputProcessing @ 0x1C00B5A44 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C005C93C (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     CreateKernelIocp @ 0x1C005CCB0 (CreateKernelIocp.c)
 *     ??0IOCPDispatcher@@IEAA@XZ @ 0x1C005CD5C (--0IOCPDispatcher@@IEAA@XZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall IOCPDispatcher::CreateInstance(struct IOCPDispatcher **a1)
{
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  IOCPDispatcher *v4; // rbx
  __int64 KernelIocp; // rax
  __int64 v7; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  *a1 = 0LL;
  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70694843) == 0x70694843
    && (v7 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1885947971 )
    {
      if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_2;
    }
    Pool2 = ExAllocatePool2(260LL, 2936LL);
    if ( !Pool2 )
      return 3221225495LL;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v1,
                               Pool2,
                               BackTrace) )
      {
LABEL_15:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return 3221225495LL;
      }
      goto LABEL_4;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v1,
                             Pool2,
                             BackTrace) )
      goto LABEL_15;
    Pool2 += 16LL;
  }
  else
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 2920LL);
  }
  if ( !Pool2 )
    return 3221225495LL;
LABEL_4:
  v4 = IOCPDispatcher::IOCPDispatcher((IOCPDispatcher *)Pool2);
  if ( !v4 )
    return 3221225495LL;
  KernelIocp = CreateKernelIocp(1u);
  *((_QWORD *)v4 + 363) = KernelIocp;
  if ( KernelIocp )
  {
    *a1 = v4;
    return 0LL;
  }
  else
  {
    IOCPDispatcher::`scalar deleting destructor'((HANDLE *)v4);
    return 3221225473LL;
  }
}
