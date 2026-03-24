/*
 * XREFs of PspLockQuotaExpansion @ 0x140318B90
 * Callers:
 *     PspReturnResourceQuota @ 0x140318838 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x1403188B8 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403CB554 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14058117C (PspExpandLimit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
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
