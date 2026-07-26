/*
 * XREFs of ?ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A5F5C
 * Callers:
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A6684 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A8398 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisClearIdleTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v2; // bl

  SelectiveSuspend = a1->SelectiveSuspend;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  KeCancelTimer((PKTIMER)((char *)SelectiveSuspend + 16));
  *((_DWORD *)SelectiveSuspend + 126) &= ~1u;
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v2);
}
