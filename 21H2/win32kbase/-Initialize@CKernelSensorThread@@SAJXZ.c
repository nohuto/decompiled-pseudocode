/*
 * XREFs of ?Initialize@CKernelSensorThread@@SAJXZ @ 0x1C0053A48
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKernelSensorThread::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rdi
  __int64 Pool2; // rbx
  __int64 result; // rax
  __int64 v6; // rax
  PVOID BackTrace[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( gpKernelSensorThread )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v3 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7054534B) == 0x7054534B
    && (v6 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1884574539 )
    {
      if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_4;
    }
    Pool2 = ExAllocatePool2(260LL, 104LL);
    if ( !Pool2 )
      goto LABEL_15;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v3,
                               Pool2,
                               BackTrace) )
      {
LABEL_14:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_15;
      }
LABEL_6:
      memset((void *)Pool2, 0, 0x58uLL);
      *(_DWORD *)(Pool2 + 24) = 0;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      *(_DWORD *)(Pool2 + 48) = 0;
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)Pool2 = &CKernelSensorThread::`vftable';
      result = 0LL;
      *(_OWORD *)(Pool2 + 56) = 0LL;
      gpKernelSensorThread = (CKernelSensorThread *)Pool2;
      *(_OWORD *)(Pool2 + 72) = 0LL;
      return result;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v3,
                             Pool2,
                             BackTrace) )
      goto LABEL_14;
    Pool2 += 16LL;
  }
  else
  {
LABEL_4:
    Pool2 = ExAllocatePool2(260LL, 88LL);
  }
  if ( Pool2 )
    goto LABEL_6;
LABEL_15:
  gpKernelSensorThread = 0LL;
  return 3221225495LL;
}
