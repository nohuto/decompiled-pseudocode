/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0034548
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0037E30 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0037F08 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C005A140 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  char *v5; // rdi
  __int64 v6; // rax
  char v7; // [rsp+60h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 642) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v4, *((unsigned int *)this + 642), 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v5 = (char *)this + 40 * (unsigned int)a2;
    v6 = *((_QWORD *)v5 + 3);
    if ( v6 )
    {
      if ( IOCPDispatcher::SetupIOCPForDispatcherHandle(this, v6, *((_QWORD *)v5 + 1), 1LL, a2) == *((_QWORD *)v5 + 3) )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)&v7,
          "HandleSensorDispatcherSignal",
          0LL);
        (*((void (__fastcall **)(_QWORD, _QWORD))v5 + 4))(*((_QWORD *)v5 + 2), *((_QWORD *)v5 + 5));
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v7);
      }
      else
      {
        IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v5 + 8));
      }
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v5 + 8, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
}
