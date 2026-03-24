/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x14031C374
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406C068C (PspDisablePrimaryTokenExchange.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14077CD80 (PspSetProcessAffinityUpdateMode.c)
 *     NtGetNextProcess @ 0x14078A7B0 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x1407BC200 (PspAssignPrimaryToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14031C3B4 (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 1080);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread(a2);
}
