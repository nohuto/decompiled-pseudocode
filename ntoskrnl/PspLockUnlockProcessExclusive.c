/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x1402F6A6C
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     NtGetNextProcess @ 0x140784C70 (NtGetNextProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1407ED630 (PspDisablePrimaryTokenExchange.c)
 *     PspAssignPrimaryToken @ 0x14083F864 (PspAssignPrimaryToken.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409ACA80 (PspSetProcessAffinityUpdateMode.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201D54 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2)
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
