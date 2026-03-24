/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C00A4C88
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0043730 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0042830 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0042964 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C00445D4 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C00A935C (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  char *v3; // rbx
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r9
  char *v8; // r8
  __int64 *v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h]

  v3 = (char *)a2;
  if ( a2 >= *((_DWORD *)this + 642) )
  {
    v10 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3524LL);
    v7 = *((unsigned int *)this + 642);
    v8 = v3;
LABEL_7:
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v8, v7, 0LL, 0LL, 0LL, 0LL, 0);
    return;
  }
  v4 = (char *)this + 40 * a2;
  v5 = *((_QWORD *)v4 + 3);
  if ( !v5 )
  {
    v10 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3542LL);
    v7 = 0LL;
    v8 = v4 + 8;
    goto LABEL_7;
  }
  if ( IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, v5, *((_QWORD *)v4 + 1), 1, a2) == *((_QWORD *)v4 + 3) )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v9, "HandleSensorDispatcherSignal", 0LL, v6);
    (*((void (__fastcall **)(_QWORD, _QWORD))v4 + 4))(*((_QWORD *)v4 + 2), *((_QWORD *)v4 + 5));
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v9);
  }
  else
  {
    IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v4 + 8));
  }
}
