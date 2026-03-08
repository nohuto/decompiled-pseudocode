/*
 * XREFs of IopDeleteIoCompletion @ 0x1406F7A80
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x140292B28 (IopDeleteIoCompletionInternal.c)
 */

__int64 __fastcall IopDeleteIoCompletion(KSPIN_LOCK *a1)
{
  return IopDeleteIoCompletionInternal(a1, 0LL);
}
