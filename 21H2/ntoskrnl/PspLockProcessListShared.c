/*
 * XREFs of PspLockProcessListShared @ 0x140580FD0
 * Callers:
 *     PsGetPreviousProcess @ 0x14090E8C4 (PsGetPreviousProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessListShared(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
