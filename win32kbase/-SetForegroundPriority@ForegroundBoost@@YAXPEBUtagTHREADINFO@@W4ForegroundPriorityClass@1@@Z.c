_UNKNOWN **__fastcall ForegroundBoost::SetForegroundPriority(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  char v5; // si
  unsigned int v6; // edi
  int v7; // r14d
  int v8; // edi
  __int64 v9; // r8
  int v10; // r9d
  _UNKNOWN **result; // rax
  const char *v12; // rdx
  bool v13; // zf
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 424);
  v3 = 0;
  v5 = 1;
  if ( a2 == 1 )
  {
    v6 = ((*(_DWORD *)(v2 + 12) & 0x800) != 0) + 1;
  }
  else
  {
    if ( a2 )
    {
      v15 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 301LL);
    }
    v6 = 0;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v14, (struct _EX_PUSH_LOCK *)&unk_1C02D2E50);
  v7 = (*(_DWORD *)(v2 + 812) >> 17) & 3;
  anonymous_namespace_::SetForegroundPriorityProcess(v2, a1, v6);
  v8 = (*(_DWORD *)(v2 + 812) >> 17) & 3;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = "foreground";
    LOBYTE(v12) = v5;
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_Ds(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v12, v9, v10);
  }
  if ( v8 != v7 )
  {
    v13 = v8 == 0;
    if ( v8 )
    {
      if ( v7 )
        return result;
      v13 = v8 == 0;
    }
    LOBYTE(v3) = !v13;
    return (_UNKNOWN **)ApiSetEditionProcessForegroundPriorityChanged(v2, v3, v9);
  }
  return result;
}
