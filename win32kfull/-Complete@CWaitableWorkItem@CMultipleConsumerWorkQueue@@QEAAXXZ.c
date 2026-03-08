/*
 * XREFs of ?Complete@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C0309200
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB490 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMultipleConsumerWorkQueue::CWaitableWorkItem::Complete(
        CMultipleConsumerWorkQueue::CWaitableWorkItem *this)
{
  *((_DWORD *)this + 2) = 3;
  KeSetEvent(**(PRKEVENT **)(*((_QWORD *)this + 5) + 8LL), 1, 0);
}
