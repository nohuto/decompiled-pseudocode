/*
 * XREFs of ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C01DCC84
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0053374 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
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
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx

  if ( a1 <= 8 )
  {
    if ( a1 == 8 )
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
    if ( v6 == 1 )
      return "FlushDelayZonePalmRejectInputTimer";
    return "UNKNOWN";
  }
  v8 = a1 - 9;
  if ( !v8 )
    return "RemoteCloseEvent";
  v9 = v8 - 1;
  if ( !v9 )
    return "DirectStartStopReadEvent";
  v10 = v9 - 1;
  if ( !v10 )
    return "TSLocalDeviceAttachedEvent";
  v11 = v10 - 1;
  if ( !v11 )
    return "PTPMarshalEvent";
  v12 = v11 - 1;
  if ( !v12 )
    return "MouseCursorUpdateEvent";
  v13 = v12 - 1;
  if ( !v13 )
    return "TouchSynthesizeEvent";
  v14 = v13 - 1;
  if ( !v14 )
    return "PTPInertiaHandleEvent";
  if ( v14 != 1 )
    return "UNKNOWN";
  return "RawMouseThrottlingTimer";
}
