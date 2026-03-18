/*
 * XREFs of IopDeleteIoCompletion @ 0x140700E90
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x14028C5F8 (IopDeleteIoCompletionInternal.c)
 */

__int64 __fastcall IopDeleteIoCompletion(KSPIN_LOCK *a1)
{
  return IopDeleteIoCompletionInternal(a1, 0LL);
}
