/*
 * XREFs of WheapEtwEnableCallback @ 0x14085D170
 * Callers:
 *     <none>
 * Callees:
 *     WheaFlushETWEventsDpcWorkerInit @ 0x1403AC228 (WheaFlushETWEventsDpcWorkerInit.c)
 *     WheapProcessWaitingETWEvents @ 0x14085D1A0 (WheapProcessWaitingETWEvents.c)
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
