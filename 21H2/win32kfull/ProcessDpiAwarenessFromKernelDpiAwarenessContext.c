/*
 * XREFs of ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C012B83C
 * Callers:
 *     DestroyProcessInfoEditionRundown @ 0x1C0118D90 (DestroyProcessInfoEditionRundown.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C012B7A0 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall ProcessDpiAwarenessFromKernelDpiAwarenessContext(char a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // ecx

  v3 = -1;
  v4 = a1 & 0xF;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        return 2;
      else
        UserSetLastError(87LL, a2, a3);
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
  return v3;
}
