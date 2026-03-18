/*
 * XREFs of ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00CD6E0
 * Callers:
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00CA134 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C00CA494 (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall ProcessDpiAwarenessFromKernelDpiAwarenessContext(char a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // ecx

  v2 = -1;
  v3 = a1 & 0xF;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        return 2;
      else
        UserSetLastError(87LL, a2);
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
