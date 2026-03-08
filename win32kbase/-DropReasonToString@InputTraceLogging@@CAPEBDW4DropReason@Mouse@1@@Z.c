/*
 * XREFs of ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Mouse@1@@Z @ 0x1C020D7EC
 * Callers:
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C00F486A (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C020D77C (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C022C67C (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C022C6EC (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DropReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( a1 <= 11 )
  {
    if ( a1 == 11 )
      return "NoPositionChange";
    if ( a1 > 5 )
    {
      v5 = a1 - 6;
      if ( !v5 )
        return "PTPQueueFull";
      v6 = v5 - 1;
      if ( !v6 )
        return "InputSuppressed";
      v7 = v6 - 1;
      if ( !v7 )
        return "InputBlocked";
      v8 = v7 - 1;
      if ( !v8 )
        return "BadReadStatus";
      if ( v8 == 1 )
        return "UIPI";
    }
    else
    {
      if ( a1 == 5 )
        return "QueueFull";
      if ( !a1 )
        return "ButtonHook";
      v1 = a1 - 1;
      if ( !v1 )
        return "WheelHook";
      v2 = v1 - 1;
      if ( !v2 )
        return "MoveHook";
      v3 = v2 - 1;
      if ( !v3 )
        return "WheelAppCompat";
      if ( v3 == 1 )
        return "ISMSuppression";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 17 )
  {
    if ( a1 == 17 )
      return "Capture";
    v9 = a1 - 12;
    if ( !v9 )
      return "RawInputMode";
    v10 = v9 - 1;
    if ( !v10 )
      return "NoHitTestResult";
    v11 = v10 - 1;
    if ( !v11 )
      return "AltTabCancel";
    v12 = v11 - 1;
    if ( !v12 )
      return "BadPayload";
    if ( v12 == 1 )
      return "ClickLock";
    return "UNKNOWN";
  }
  v13 = a1 - 18;
  if ( !v13 )
    return "WindowDestroyed";
  v14 = v13 - 1;
  if ( !v14 )
    return "NoActivation";
  v15 = v14 - 1;
  if ( !v15 )
    return "NoForeground";
  if ( v15 != 1 )
    return "UNKNOWN";
  return "ISMForwardingFailed";
}
