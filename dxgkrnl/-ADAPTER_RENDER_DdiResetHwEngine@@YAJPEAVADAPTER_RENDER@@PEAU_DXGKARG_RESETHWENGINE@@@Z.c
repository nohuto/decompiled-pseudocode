/*
 * XREFs of ?ADAPTER_RENDER_DdiResetHwEngine@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_RESETHWENGINE@@@Z @ 0x1C0047D30
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiResetHwEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETHWENGINE@@@Z @ 0x1C00438E0 (-DdiResetHwEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETHWENGINE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiResetHwEngine(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_RESETHWENGINE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiResetHwEngine(a1, a2, a3);
}
