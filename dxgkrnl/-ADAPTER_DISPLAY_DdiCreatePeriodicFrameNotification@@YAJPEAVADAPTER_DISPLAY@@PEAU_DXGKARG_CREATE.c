/*
 * XREFs of ?ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C00479F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCreatePeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C02C0A74 (-DdiCreatePeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPERIODICFRAMENOTIFI.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *a2)
{
  return ADAPTER_DISPLAY::DdiCreatePeriodicFrameNotification(a1, a2);
}
