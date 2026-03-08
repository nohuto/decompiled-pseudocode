/*
 * XREFs of ?ADAPTER_RENDER_DdiDestroyProcess@@YAJPEAVADAPTER_RENDER@@PEAX@Z @ 0x1C0047BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C01D71BC (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiDestroyProcess(struct ADAPTER_RENDER *a1, void *a2)
{
  return ADAPTER_RENDER::DdiDestroyProcess(a1, a2);
}
