/*
 * XREFs of ?ADAPTER_DISPLAY_DdiDestroyPeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_DESTROYPERIODICFRAMENOTIFICATION@@@Z @ 0x1C0047A10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiDestroyPeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DESTROYPERIODICFRAMENOTIFICATION@@@Z @ 0x1C02C20D0 (-DdiDestroyPeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DESTROYPERIODICFRAMENOTI.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiDestroyPeriodicFrameNotification(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_DESTROYPERIODICFRAMENOTIFICATION *a2)
{
  return ADAPTER_DISPLAY::DdiDestroyPeriodicFrameNotification(a1, a2);
}
