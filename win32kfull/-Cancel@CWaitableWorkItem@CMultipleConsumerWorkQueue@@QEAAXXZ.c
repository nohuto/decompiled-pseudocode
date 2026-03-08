/*
 * XREFs of ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C03091C8
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00BAFD8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB490 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00BCA88 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(
        CMultipleConsumerWorkQueue::CWaitableWorkItem *this)
{
  *((_DWORD *)this + 2) = 4;
  KeSetEvent(**(PRKEVENT **)(*((_QWORD *)this + 5) + 8LL), 1, 0);
}
