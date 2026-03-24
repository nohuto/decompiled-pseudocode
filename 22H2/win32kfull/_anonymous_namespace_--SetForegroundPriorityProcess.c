/*
 * XREFs of _anonymous_namespace_::SetForegroundPriorityProcess @ 0x1C0038FF0
 * Callers:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C0038E6C (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0038EF0 (-UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::SetProcessPriorityByClass @ 0x1C0039110 (_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::SetForegroundPriorityProcess(
        struct _KPROCESS **a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  struct _KPROCESS *v5; // rbp
  char v7; // si
  __int64 v8; // rdx
  HANDLE ProcessId; // rax
  char ProcessPriorityClass; // al
  __int64 v11; // rdx

  result = *(unsigned int *)(a2 + 488);
  v4 = a3;
  v5 = *a1;
  if ( (result & 0xC) == 0 && (result & 1) == 0 && ((result & 0x40000) == 0 || a3 == 1) )
  {
    v7 = 0;
    if ( (*((_DWORD *)a1 + 3) & 0x400000) != 0 )
    {
      v4 = 0;
      ProcessPriorityClass = PsGetProcessPriorityClass(*a1);
      LOBYTE(v11) = 1;
      v7 = ProcessPriorityClass;
      result = PsSetProcessPriorityClass(v5, v11);
    }
    if ( v4 )
    {
      if ( v4 - 1 > 1 )
        return result;
    }
    else if ( grpdeskIODefault == grpdeskRitInput && gppiScreenSaver && (struct _KPROCESS **)gppiScreenSaver != a1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 294LL);
    }
    anonymous_namespace_::SetProcessPriorityByClass(a1, v4);
    if ( v7 )
    {
      LOBYTE(v8) = v7;
      PsSetProcessPriorityClass(v5, v8);
    }
    if ( v4 )
    {
      if ( (unsigned int)RtlGetActiveConsoleId() == gSessionId )
      {
        ProcessId = PsGetProcessId(v5);
        RtlSetConsoleSessionForegroundProcessId(ProcessId);
      }
    }
    return GreDxgkSetProcessStatus(a1, 1LL);
  }
  return result;
}
