/*
 * XREFs of ZwSetEvent @ 0x18009D6A0
 * Callers:
 *     RtlpTpWaitRundown @ 0x180009AA8 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerRundown @ 0x180009B48 (RtlpTpTimerRundown.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     EtwpLogger @ 0x18004C5E0 (EtwpLogger.c)
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     EtwpSynchronizeWithLogger @ 0x18004F868 (EtwpSynchronizeWithLogger.c)
 *     EtwpSwitchBuffer @ 0x180051284 (EtwpSwitchBuffer.c)
 *     LdrpDropLastInProgressCount @ 0x18005EE7C (LdrpDropLastInProgressCount.c)
 *     LdrpProcessWork @ 0x1800600EC (LdrpProcessWork.c)
 *     LdrpProcessInitializationComplete @ 0x180081230 (LdrpProcessInitializationComplete.c)
 *     RtlpTpTimerQueueRundown @ 0x180084EA4 (RtlpTpTimerQueueRundown.c)
 *     RtlpWnfMetaCallbackProc @ 0x180085B10 (RtlpWnfMetaCallbackProc.c)
 *     RtlCreateProcessReflection @ 0x1800D5A40 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FD0 (RtlpProcessReflectionStartup.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E92D0 (RtlpUnWaitCriticalSection.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800FE858 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1801024E0 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
