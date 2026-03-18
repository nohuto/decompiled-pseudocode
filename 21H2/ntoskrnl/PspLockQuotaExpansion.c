/*
 * XREFs of PspLockQuotaExpansion @ 0x14024393C
 * Callers:
 *     PspReturnResourceQuota @ 0x140243648 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x1402436C8 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403DAB6C (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x1405E0320 (PspExpandLimit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
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
