/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C007D944
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C007C030 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C007D9E0 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C00940FC (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  char *v3; // rbx
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r9
  char *v7; // r8
  __int64 *v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+68h] [rbp+10h]

  v3 = (char *)a2;
  if ( a2 >= *((_DWORD *)this + 642) )
  {
    v9 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3724LL);
    v6 = *((unsigned int *)this + 642);
    v7 = v3;
LABEL_7:
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v7, v6, 0LL, 0LL, 0LL, 0LL, 0);
    return;
  }
  v4 = (char *)this + 40 * a2;
  v5 = *((_QWORD *)v4 + 3);
  if ( !v5 )
  {
    v9 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3742LL);
    v6 = 0LL;
    v7 = v4 + 8;
    goto LABEL_7;
  }
  if ( IOCPDispatcher::SetupIOCPForDispatcherHandle(this, v5, *((_QWORD *)v4 + 1), 1LL, a2) == *((_QWORD *)v4 + 3) )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v8, "HandleSensorDispatcherSignal", 0LL);
    (*((void (__fastcall **)(_QWORD, _QWORD))v4 + 4))(*((_QWORD *)v4 + 2), *((_QWORD *)v4 + 5));
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v8);
  }
  else
  {
    IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v4 + 8));
  }
}
