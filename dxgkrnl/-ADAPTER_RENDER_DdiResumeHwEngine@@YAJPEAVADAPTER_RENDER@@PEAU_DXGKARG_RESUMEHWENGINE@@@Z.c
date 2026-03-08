/*
 * XREFs of ?ADAPTER_RENDER_DdiResumeHwEngine@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_RESUMEHWENGINE@@@Z @ 0x1C0047D50
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiResumeHwEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESUMEHWENGINE@@@Z @ 0x1C0043AEC (-DdiResumeHwEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESUMEHWENGINE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiResumeHwEngine(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_RESUMEHWENGINE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiResumeHwEngine(a1, a2, a3);
}
