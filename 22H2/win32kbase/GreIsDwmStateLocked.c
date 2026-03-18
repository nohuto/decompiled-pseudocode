/*
 * XREFs of GreIsDwmStateLocked @ 0x1C0086F20
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0086F50 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

__int64 __fastcall GreIsDwmStateLocked(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  return GreIsSemaphoreOwnedOrSharedByCurrentThread(*(PERESOURCE *)(*(_QWORD *)(v1 + 24) + 72LL));
}
