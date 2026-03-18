/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x1409AD5B8
 * Callers:
 *     NtGetNextThread @ 0x1406D7150 (NtGetNextThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140927D44 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
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
  return KiLeaveCriticalRegionUnsafe(a2);
}
