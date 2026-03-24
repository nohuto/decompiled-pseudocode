/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x14058EC40
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x14058E860 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x14058EA80 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x14058EB50 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x14058EBC0 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x14058EC00 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
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
