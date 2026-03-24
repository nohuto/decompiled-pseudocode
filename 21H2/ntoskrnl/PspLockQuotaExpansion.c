/*
 * XREFs of PspLockQuotaExpansion @ 0x1402BF4C0
 * Callers:
 *     PspReturnResourceQuota @ 0x1402BF168 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x1402BF1E8 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403CBC54 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14058123C (PspExpandLimit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
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
