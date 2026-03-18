/*
 * XREFs of ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0037E68
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0037E30 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0037F08 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IOCPDispatcher::HandleThreadDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  __int64 v4; // rbx
  void (__fastcall *v5)(_QWORD); // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 < *((_DWORD *)this + 724) )
  {
    v4 = 32LL * a2;
    if ( *(_QWORD *)((char *)this + v4 + 2584) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)&v6,
        "HandleInputThreadSignal",
        0LL);
      IOCPDispatcher::SetupIOCPForDispatcherHandle(
        this,
        *(_QWORD *)((char *)this + v4 + 2584),
        *(_QWORD *)((char *)this + v4 + 2576),
        2LL,
        a2);
      v5 = *(void (__fastcall **)(_QWORD))((char *)this + v4 + 2592);
      if ( v5 )
        v5(*(_QWORD *)((char *)this + v4 + 2600));
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
    }
  }
}
