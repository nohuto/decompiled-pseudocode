/*
 * XREFs of ?ADAPTER_RENDER_DdiResetEngine@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_RESETENGINE@@@Z @ 0x1C0047D10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z @ 0x1C00436D0 (-DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiResetEngine(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_RESETENGINE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiResetEngine(a1, a2, a3);
}
