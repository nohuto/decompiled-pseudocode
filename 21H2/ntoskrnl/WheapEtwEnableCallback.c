/*
 * XREFs of WheapEtwEnableCallback @ 0x140860F30
 * Callers:
 *     <none>
 * Callees:
 *     WheaFlushETWEventsDpcWorkerInit @ 0x1403DC298 (WheaFlushETWEventsDpcWorkerInit.c)
 *     WheapProcessWaitingETWEvents @ 0x140860F60 (WheapProcessWaitingETWEvents.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  WheapEventingInitialized = ControlCode;
  if ( ControlCode == 1 )
  {
    WheaFlushETWEventsDpcWorkerInit();
    WheapProcessWaitingETWEvents();
  }
}
