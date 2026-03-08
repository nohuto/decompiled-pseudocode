/*
 * XREFs of ?ADAPTER_DISPLAY_DdiUpdateFlipQueueLog@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_UPDATEFLIPQUEUELOG@@@Z @ 0x1C0047AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiUpdateFlipQueueLog@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEFLIPQUEUELOG@@@Z @ 0x1C0044A70 (-DdiUpdateFlipQueueLog@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEFLIPQUEUELOG@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiUpdateFlipQueueLog(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_UPDATEFLIPQUEUELOG *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiUpdateFlipQueueLog(a1, a2, a3);
}
