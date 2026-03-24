/*
 * XREFs of PspLockProcessListShared @ 0x140580CD0
 * Callers:
 *     PsGetPreviousProcess @ 0x14090E7B4 (PsGetPreviousProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessListShared(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
