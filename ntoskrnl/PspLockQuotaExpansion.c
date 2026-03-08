/*
 * XREFs of PspLockQuotaExpansion @ 0x1402954EC
 * Callers:
 *     PspReturnResourceQuota @ 0x1402953A0 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x140295420 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403A94F4 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x1405A1758 (PspExpandLimit.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockQuotaExpansion(__int64 a1, KIRQL *a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( *(_DWORD *)a1 )
  {
    *a2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  }
}
