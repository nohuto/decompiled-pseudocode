/*
 * XREFs of NtUserQuerySendMessage @ 0x1C0200850
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _QuerySendMessage @ 0x1C021E40C (_QuerySendMessage.c)
 */

__int64 __fastcall NtUserQuerySendMessage(_OWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // ebx
  __int128 v6; // [rsp+28h] [rbp-40h] BYREF
  __int128 v7; // [rsp+38h] [rbp-30h]
  __int128 v8; // [rsp+48h] [rbp-20h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v2 = EnterSharedCrit(0LL, 1LL);
  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9221);
  if ( *(_QWORD *)(v2 + 512) )
  {
    v4 = QuerySendMessage(v2, &v6);
    if ( v4 && a1 )
    {
      v3 = *((_QWORD *)&v7 + 1);
      if ( *((_QWORD *)&v7 + 1) > MmUserProbeAddress )
        v3 = 0LL;
      *((_QWORD *)&v7 + 1) = v3;
      HIDWORD(v6) = 0;
      HIDWORD(v8) = 0;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v6;
      a1[1] = v7;
      a1[2] = v8;
    }
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
