/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x14058EB80
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x14058E7A0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x14058E9C0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x14058EA90 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x14058EB00 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x14058EB40 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall RtlpTraceDatabaseAcquireLock(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 56);
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
    *(_BYTE *)(a1 + 40) = KeAcquireSpinLockRaiseToDpc(v2);
  else
    ExAcquireFastMutex((PFAST_MUTEX)v2);
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return 1;
}
