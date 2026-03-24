/*
 * XREFs of VidSchiCleanupPacket_PriorityTable @ 0x1C00D3018
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C003C818 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiSelectContext @ 0x1C000B3E0 (VidSchiSelectContext.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002F4D4 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0030618 (VidSchiProcessPrimariesTerminationList.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiCleanupPacket_PriorityTable(__int64 a1)
{
  struct _VIDSCH_CONTEXT *result; // rax

  VidSchiProcessPrimariesTerminationList(a1);
  while ( 1 )
  {
    result = VidSchiSelectContext(a1, 0);
    if ( !result )
      break;
    VidSchiDrainContextFromWorkerThread((__int64)result);
  }
  return result;
}
