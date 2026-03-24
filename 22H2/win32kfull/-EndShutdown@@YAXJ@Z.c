/*
 * XREFs of ?EndShutdown@@YAXJ@Z @ 0x1C00D76E0
 * Callers:
 *     xxxSetInformationThread @ 0x1C00D8CE0 (xxxSetInformationThread.c)
 * Callees:
 *     ?NotifyLogon@@YAHK@Z @ 0x1C00D77A0 (-NotifyLogon@@YAHK@Z.c)
 *     _PostThreadMessage @ 0x1C00DA3F8 (_PostThreadMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EndShutdown(int a1)
{
  unsigned int v1; // edx
  unsigned int v2; // ecx

  gpidEndSession = 0LL;
  gdwThreadEndSession = 0;
  *(_DWORD *)(gpsi + 2236LL) &= ~1u;
  v1 = *(_DWORD *)(grpwinstaLogoff + 64LL) & 0xFFFFFFF7;
  *(_DWORD *)(grpwinstaLogoff + 64LL) = v1;
  if ( a1 < 0 )
  {
    if ( gptiShutdownNotify )
    {
      PostThreadMessage(gptiShutdownNotify, 22LL, 0LL);
      gptiShutdownNotify = 0LL;
      v1 = *(_DWORD *)(grpwinstaLogoff + 64LL);
    }
    v2 = gdwShutdownFlags | 0x80;
    *(_DWORD *)(grpwinstaLogoff + 64LL) = gdwLocks | v1 & 0xFFFFFFFD;
    NotifyLogon(v2);
  }
  else
  {
    gptiShutdownNotify = 0LL;
    NotifyLogon(gdwShutdownFlags);
    if ( (gdwShutdownFlags & 0x40580B) != 0 && !gProtocolType )
    {
      if ( gSqmIsOptedIn )
        SqmPowerState();
      PTPTelemetry::Usage::HandlePTPTelemetry();
    }
  }
  UnlockObjectAssignment(grpwinstaLogoff);
}
