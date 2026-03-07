__int64 __fastcall PostWinlogonMessage(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  int v4; // edi

  v2 = a1;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  v4 = WmsgpPostMessage(a1, (unsigned int)a1, a2);
  if ( v4 >= 0 && v2 == 1027 )
  {
    TraceLoggingLockMessagePosted(v3);
    CInputGlobals::UpdateGlobalTickCount((__int64)gpInputGlobals, 1);
    if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
    {
      if ( qword_1C02D6AA0 )
        qword_1C02D6AA0(3LL);
    }
  }
  return (unsigned int)v4;
}
