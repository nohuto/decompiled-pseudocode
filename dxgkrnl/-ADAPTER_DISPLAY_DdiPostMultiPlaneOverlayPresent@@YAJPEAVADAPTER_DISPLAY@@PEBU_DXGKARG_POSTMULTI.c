/*
 * XREFs of ?ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT@@@Z @ 0x1C0047A30
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiPostMultiPlaneOverlayPresent@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT@@@Z @ 0x1C0042D14 (-DdiPostMultiPlaneOverlayPresent@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent(
        struct ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_POSTMULTIPLANEOVERLAYPRESENT *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiPostMultiPlaneOverlayPresent(a1, a2, a3);
}
