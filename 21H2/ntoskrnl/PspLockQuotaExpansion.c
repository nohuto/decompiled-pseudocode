/*
 * XREFs of PspLockQuotaExpansion @ 0x14023D910
 * Callers:
 *     PspReturnResourceQuota @ 0x14023D5B8 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14023D638 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403CBDC4 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14058147C (PspExpandLimit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PspLockQuotaExpansion(__int64 a1, KIRQL *a2)
{
  KIRQL result; // al
  struct _KTHREAD *CurrentThread; // rax

  if ( *(_DWORD *)a1 )
  {
    result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    *a2 = result;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    return ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  }
  return result;
}
