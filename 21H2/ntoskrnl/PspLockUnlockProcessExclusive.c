/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x140241524
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x14063C6BC (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14077D040 (PspSetProcessAffinityUpdateMode.c)
 *     NtGetNextProcess @ 0x14078AA70 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x1407BC1D0 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
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
