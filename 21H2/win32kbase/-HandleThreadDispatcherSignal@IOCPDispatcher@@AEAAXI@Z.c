/*
 * XREFs of ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0043030
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C00422C0 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00413C0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00414F4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ApiSetEditionHandleMitSignal @ 0x1C00430B8 (ApiSetEditionHandleMitSignal.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0043164 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 */

void __fastcall IOCPDispatcher::HandleThreadDispatcherSignal(
        IOCPDispatcher *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rbx
  __int64 *v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 < *((_DWORD *)this + 684) )
  {
    v6 = (_QWORD *)((char *)this + 16 * a2 + 2576);
    if ( v6[1] )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v7, "HandleMitSignal", 0LL, a4);
      IOCPDispatcher::SetupIOCPForDispatcherHandle(this, v6[1], *v6, 2LL, a2);
      ApiSetEditionHandleMitSignal(*v6);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v7);
    }
  }
}
