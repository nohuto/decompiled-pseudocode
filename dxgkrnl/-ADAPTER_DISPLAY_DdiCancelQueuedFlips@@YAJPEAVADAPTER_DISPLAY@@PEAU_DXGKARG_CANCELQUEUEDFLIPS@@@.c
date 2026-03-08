/*
 * XREFs of ?ADAPTER_DISPLAY_DdiCancelQueuedFlips@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CANCELQUEUEDFLIPS@@@Z @ 0x1C00479B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCancelQueuedFlips@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CANCELQUEUEDFLIPS@@@Z @ 0x1C0042630 (-DdiCancelQueuedFlips@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CANCELQUEUEDFLIPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiCancelQueuedFlips(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CANCELQUEUEDFLIPS *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiCancelQueuedFlips(a1, a2, a3);
}
