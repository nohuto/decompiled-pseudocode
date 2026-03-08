/*
 * XREFs of ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C007DAC8
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C007C030 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C007D9E0 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IOCPDispatcher::HandleThreadDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(_QWORD); // rax
  __int64 *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 < *((_DWORD *)this + 724) )
  {
    v4 = 32LL * a2;
    if ( *(_QWORD *)((char *)this + v4 + 2584) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v6, "HandleInputThreadSignal", 0LL);
      IOCPDispatcher::SetupIOCPForDispatcherHandle(
        (__int64)this,
        *(_QWORD *)((char *)this + v4 + 2584),
        *(_QWORD *)((char *)this + v4 + 2576),
        2,
        a2);
      v5 = *(void (__fastcall **)(_QWORD))((char *)this + v4 + 2592);
      if ( v5 )
        v5(*(_QWORD *)((char *)this + v4 + 2600));
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
    }
  }
}
