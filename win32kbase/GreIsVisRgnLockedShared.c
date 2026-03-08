/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1C0197390
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C00C1360 (GreIsSemaphoreSharedByCurrentThread.c)
 */

_BOOL8 __fastcall GreIsVisRgnLockedShared(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  return GreIsSemaphoreSharedByCurrentThread(*(struct _ERESOURCE **)(*(_QWORD *)(v1 + 24) + 88LL));
}
