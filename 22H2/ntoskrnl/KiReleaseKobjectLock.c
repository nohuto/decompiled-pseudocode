/*
 * XREFs of KiReleaseKobjectLock @ 0x1402F1D10
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleaseKobjectLock(volatile signed __int32 *a1)
{
  _InterlockedAnd(a1, 0xFFFFFF7F);
}
