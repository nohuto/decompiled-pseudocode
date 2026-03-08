/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x1409AB528
 * Callers:
 *     NtGetNextThread @ 0x140790200 (NtGetNextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140934820 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201D54 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall PsSynchronizeWithThreadInsertion(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 1360);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread(a2);
}
