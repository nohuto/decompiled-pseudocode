/*
 * XREFs of ?VidSchiValidateHwFlipQueueCompletionTimestamp@@YAXPEAUVIDSCH_FLIP_QUEUE@@K_K1@Z @ 0x1C004B250
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000CDD0 (VidSchiProcessVsyncCompletedFlipEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiValidateHwFlipQueueCompletionTimestamp(
        struct VIDSCH_FLIP_QUEUE *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // r14

  v6 = 1384LL * a2;
  if ( a3 > *(_QWORD *)((char *)a1 + v6 + 1424) || a3 > a4 )
  {
    ++g_HwFlipQueueScheduleErrorCount;
    if ( g_BreakOnHwFlipQueueScheduleErrors && !KdRefreshDebuggerNotPresent() )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "The GPU Scheduler detected driver completing flip request prior to its TargetFlipTime.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "TargetFlipTime            = 0x%I64x.\n"
        "LogReportedCompletionTime = 0x%I64x.\n"
        "DpcFrameTime              = 0x%I64x.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "Run \"!dxgkdx.flipentry 0x%p 0n%d\" command to display the flip entry.\n"
        "To disable debug breaks on these failures, run \"?? dxgmms2!g_BreakOnHwFlipQueueScheduleErrors=0\" command,\n"
        "or \"ed 0x%p 0\"\n"
        "\n",
        a3,
        *(_QWORD *)((char *)a1 + v6 + 1424),
        a4,
        a1,
        a2,
        (const void *)&g_BreakOnHwFlipQueueScheduleErrors);
      __debugbreak();
    }
  }
}
