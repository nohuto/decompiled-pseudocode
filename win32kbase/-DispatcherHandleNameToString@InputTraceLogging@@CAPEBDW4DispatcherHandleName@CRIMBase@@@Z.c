/*
 * XREFs of ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C020BA74
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C007A800 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DispatcherHandleNameToString(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx

  if ( a1 <= 9 )
  {
    if ( a1 == 9 )
      return "RemoteOpenEvent";
    if ( !a1 )
      return "RimPnpEvent";
    v1 = a1 - 1;
    if ( !v1 )
      return "RimAsyncPnpWorkNotificationSemaphore";
    v2 = v1 - 1;
    if ( !v2 )
      return "RimReadCompletionEvent";
    v3 = v2 - 1;
    if ( !v3 )
      return "RimTimer";
    v4 = v3 - 1;
    if ( !v4 )
      return "PTPTimer";
    v5 = v4 - 1;
    if ( !v5 )
      return "PTPInertiaTimer";
    v6 = v5 - 1;
    if ( !v6 )
      return "DelayZonePalmRejectionTimer";
    v7 = v6 - 1;
    if ( !v7 )
      return "FlushDelayZonePalmRejectInputTimer";
    if ( v7 == 1 )
      return "MouseReportRateLimitingTimer";
    return "UNKNOWN";
  }
  v9 = a1 - 10;
  if ( !v9 )
    return "RemoteCloseEvent";
  v10 = v9 - 1;
  if ( !v10 )
    return "DirectStartStopReadEvent";
  v11 = v10 - 1;
  if ( !v11 )
    return "TSLocalDeviceAttachedEvent";
  v12 = v11 - 1;
  if ( !v12 )
    return "PTPMarshalEvent";
  v13 = v12 - 1;
  if ( !v13 )
    return "MouseCursorUpdateEvent";
  v14 = v13 - 1;
  if ( !v14 )
    return "TouchSynthesizeEvent";
  v15 = v14 - 1;
  if ( !v15 )
    return "PTPInertiaHandleEvent";
  if ( v15 != 1 )
    return "UNKNOWN";
  return "RawMouseThrottlingTimer";
}
