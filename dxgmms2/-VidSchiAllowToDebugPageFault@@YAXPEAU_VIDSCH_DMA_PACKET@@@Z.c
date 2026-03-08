/*
 * XREFs of ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C0035124
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0004B90 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAllowToDebugPageFault(struct _VIDSCH_DMA_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d

  if ( !g_PageFaultDebugMode && !KdRefreshDebuggerNotPresent() )
  {
    v2 = *((_QWORD *)a1 + 6);
    v3 = *(_QWORD *)(v2 + 104);
    v4 = *(_QWORD *)(v2 + 96);
    v5 = *(_QWORD *)(v3 + 40);
    v6 = *(_QWORD *)(v3 + 232);
    v7 = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4LL);
    if ( g_pVidSchSystemProcess == v5 )
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "The GPU Scheduler detected a page fault at GPU VA 0x%I64X.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "Run \"!dxgkdx.gpuva -a %d -o %d 0x%I64X  [-h]\" command for more info.\n"
        "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        v6,
        *(unsigned __int16 *)(v4 + 6),
        v7,
        v6,
        &g_PageFaultDebugMode);
    else
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "The GPU Scheduler detected a page fault at GPU VA 0x%I64X.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "Run \"!dxgkdx.gpuva -a %d -p 0x%p -o %d 0x%I64X[ -h]\" command for more info.\n"
        "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        v6,
        *(unsigned __int16 *)(v4 + 6),
        *(const void **)(v5 + 2656),
        v7,
        v6,
        &g_PageFaultDebugMode);
    __debugbreak();
  }
}
