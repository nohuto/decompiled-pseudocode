/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x1405AF1B8
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405AEE00 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1405AF020 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1405AF0E0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1405AF150 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1405AF190 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
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
