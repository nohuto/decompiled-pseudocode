/*
 * XREFs of ?Initialize@CMasterInputThread@@SAJXZ @ 0x1C0053B04
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMasterInputThread::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  PVOID v4; // rsi
  __int64 Pool2; // rbx
  __int64 v7; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = 0;
  if ( gpInputThread )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7054494D) != 0x7054494D
    || (v7 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_4:
    Pool2 = ExAllocatePool2(260LL, 56LL);
LABEL_5:
    if ( !Pool2 )
    {
LABEL_16:
      gpInputThread = 0LL;
      return (unsigned int)-1073741801;
    }
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1884571981 )
  {
    if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(260LL, 72LL);
  if ( !Pool2 )
    goto LABEL_16;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v4,
                             Pool2,
                             BackTrace) )
      goto LABEL_15;
    Pool2 += 16LL;
    goto LABEL_5;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v4,
                           Pool2,
                           BackTrace) )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_16;
  }
LABEL_6:
  gpInputThread = (CInputThreadBase *)Pool2;
  *(_OWORD *)Pool2 = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_OWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 48) = 0LL;
  *(_QWORD *)Pool2 = &CMasterInputThread::`vftable';
  *(_DWORD *)(Pool2 + 24) = 0;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  return v3;
}
