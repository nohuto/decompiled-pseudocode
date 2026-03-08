/*
 * XREFs of ?ADAPTER_DISPLAY_DdiCancelFlips@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CANCELFLIPS@@@Z @ 0x1C0047990
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCancelFlips@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CANCELFLIPS@@@Z @ 0x1C00423E8 (-DdiCancelFlips@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CANCELFLIPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiCancelFlips(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CANCELFLIPS *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiCancelFlips(a1, a2, a3);
}
