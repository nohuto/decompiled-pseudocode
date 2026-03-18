/*
 * XREFs of ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C0053784
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 * Callees:
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C0053658 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C0053874 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rbx
  __int64 v4; // rcx
  int *Pool2; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  CInputSystemMetrics *v8; // rcx
  __int64 v10; // rax
  PVOID BackTrace[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( gpInputSystemMetrics )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v3 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x654D7953) == 0x654D7953
    && (v10 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1699576147 )
    {
      if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_4;
    }
    Pool2 = (int *)ExAllocatePool2(260LL, 28LL);
    if ( !Pool2 )
      goto LABEL_15;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v3,
                               Pool2,
                               BackTrace) )
      {
LABEL_14:
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_15;
      }
LABEL_6:
      gpInputSystemMetrics = Pool2;
      *(_QWORD *)Pool2 = 0LL;
      Pool2[2] = 0;
      *Pool2 = 0;
      Pool2[1] = 0;
      Pool2[2] = 0;
      v6 = *Pool2;
      CInputSystemMetrics::WriteSystemMetricsKey(v4, (unsigned int)*Pool2, 0LL);
      CInputSystemMetrics::WriteSystemMetricsKey(v7, v6, 1LL);
      CInputSystemMetrics::WritePointerDevicePresenceKey(v8, Pool2[1]);
      return 0LL;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v3,
                             Pool2,
                             BackTrace) )
      goto LABEL_14;
    Pool2 += 4;
  }
  else
  {
LABEL_4:
    Pool2 = (int *)ExAllocatePool2(260LL, 12LL);
  }
  if ( Pool2 )
    goto LABEL_6;
LABEL_15:
  gpInputSystemMetrics = 0LL;
  return 3221225495LL;
}
