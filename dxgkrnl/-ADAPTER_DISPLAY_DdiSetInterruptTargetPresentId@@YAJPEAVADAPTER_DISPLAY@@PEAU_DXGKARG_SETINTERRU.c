/*
 * XREFs of ?ADAPTER_DISPLAY_DdiSetInterruptTargetPresentId@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_SETINTERRUPTTARGETPRESENTID@@@Z @ 0x1C0047A50
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetInterruptTargetPresentId@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETINTERRUPTTARGETPRESENTID@@@Z @ 0x1C0043CF8 (-DdiSetInterruptTargetPresentId@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETINTERRUPTTARGETPRESENTID@@.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetInterruptTargetPresentId(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_SETINTERRUPTTARGETPRESENTID *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiSetInterruptTargetPresentId(a1, a2, a3);
}
