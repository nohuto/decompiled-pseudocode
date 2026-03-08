/*
 * XREFs of ?ClearQueueServerEvent@@YAXG@Z @ 0x1C0094494
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C0094300 (xxxDesktopThreadWaiter.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0095CF4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearQueueServerEvent(unsigned __int16 a1)
{
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), a1);
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
}
