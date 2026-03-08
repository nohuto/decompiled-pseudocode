/*
 * XREFs of ?ADAPTER_RENDER_DdiQueryCurrentFence@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_QUERYCURRENTFENCE@@@Z @ 0x1C0047C90
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryCurrentFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYCURRENTFENCE@@@Z @ 0x1C0042F5C (-DdiQueryCurrentFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYCURRENTFENCE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiQueryCurrentFence(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_QUERYCURRENTFENCE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryCurrentFence(a1, a2, a3);
}
