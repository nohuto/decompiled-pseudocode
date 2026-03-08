/*
 * XREFs of ?_PurgeComplete@FxIoQueue@@KAXPEAUWDFQUEUE__@@PEAX@Z @ 0x1C0066DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueue::_PurgeComplete(WDFQUEUE__ *Queue, _KEVENT *Context)
{
  KeSetEvent(Context, 1, 0);
}
