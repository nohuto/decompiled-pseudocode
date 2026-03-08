/*
 * XREFs of ?VidSchiNodePerfTracingThread@@YAXPEAX@Z @ 0x1C0035E60
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiGpuPerfTracing@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0035B2C (-VidSchiGpuPerfTracing@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiNodePerfTracingThread(struct _VIDSCH_NODE *a1)
{
  VidSchiGpuPerfTracing(a1);
  *((_DWORD *)a1 + 736) = 0;
}
