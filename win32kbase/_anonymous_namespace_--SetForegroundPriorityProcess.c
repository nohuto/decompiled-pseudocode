__int64 __fastcall anonymous_namespace_::SetForegroundPriorityProcess(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  char v6; // di
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rdx
  char ProcessPriorityClass; // al
  __int64 v11; // rdx

  result = *(unsigned int *)(a2 + 488);
  if ( (result & 0xC) != 0 || (result & 1) != 0 || (result & 0x40000) != 0 && a3 != 1 )
    return result;
  v5 = *a1;
  if ( (*((_DWORD *)a1 + 3) & 0x400000) != 0 )
  {
    ProcessPriorityClass = PsGetProcessPriorityClass(*a1);
    LOBYTE(v11) = 1;
    v6 = ProcessPriorityClass;
    PsSetProcessPriorityClass(v5, v11);
LABEL_9:
    if ( gppiScreenSaver && (__int64 *)gppiScreenSaver != a1 && (struct tagDESKTOP *)grpdeskIODefault == grpdeskRitInput )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 258LL);
    result = anonymous_namespace_::SetProcessPriorityByClass(a1, 0LL);
    if ( v6 )
    {
      LOBYTE(v9) = v6;
      return PsSetProcessPriorityClass(v5, v9);
    }
    return result;
  }
  v6 = 0;
  if ( !a3 )
    goto LABEL_9;
  v7 = a3 - 1;
  if ( !v7 )
  {
    v8 = 1LL;
    return anonymous_namespace_::SetProcessPriorityByClass(a1, v8);
  }
  if ( v7 == 1 )
  {
    v8 = 2LL;
    return anonymous_namespace_::SetProcessPriorityByClass(a1, v8);
  }
  return result;
}
