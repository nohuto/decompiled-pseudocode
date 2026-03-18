/*
 * XREFs of UsbhSetIdleIrpState @ 0x1C0001418
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001330 (UsbhCompletePdoIdleIrp.c)
 *     UsbhIdleExIrp_IdleReady @ 0x1C00571C4 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C0057338 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C0057434 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C005755C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_Event @ 0x1C00576A8 (UsbhIdleIrp_Event.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0057830 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C0057C88 (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 */

void __fastcall UsbhSetIdleIrpState(__int64 a1, __int64 a2, int a3, int a4, KIRQL NewIrql)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  v7 = PdoExt(a2);
  v8 = 32 * (*(unsigned int *)(v7 + 1788) + 56LL);
  *(_DWORD *)(v8 + v7) = a3;
  *(_DWORD *)(v7 + 1536) = a4;
  *(_DWORD *)(v8 + v7 + 8) = a4;
  *(_DWORD *)(v7 + 1788) = ((unsigned __int8)*(_DWORD *)(v7 + 1788) + 1) & 7;
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 2048), NewIrql);
}
