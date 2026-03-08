/*
 * XREFs of ?EndShutdown@@YAXJ@Z @ 0x1C0095B2C
 * Callers:
 *     xxxSetInformationThread @ 0x1C0093B70 (xxxSetInformationThread.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C009575C (_PostThreadMessage.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C0095BD0 (-NotifyLogon@@YAHK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EndShutdown(int a1)
{
  unsigned int v1; // ecx

  gpidEndSession = 0LL;
  gdwThreadEndSession = 0;
  *(_DWORD *)(gpsi + 2236LL) &= ~1u;
  *(_DWORD *)(grpwinstaLogoff + 64LL) &= ~8u;
  if ( a1 < 0 )
  {
    if ( gptiShutdownNotify )
    {
      PostThreadMessage(gptiShutdownNotify, 0x16u, 0LL, 0LL);
      gptiShutdownNotify = 0LL;
    }
    v1 = gdwShutdownFlags | 0x80;
    *(_DWORD *)(grpwinstaLogoff + 64LL) = gdwLocks | *(_DWORD *)(grpwinstaLogoff + 64LL) & 0xFFFFFFFD;
    NotifyLogon(v1);
  }
  else
  {
    gptiShutdownNotify = 0LL;
    NotifyLogon(gdwShutdownFlags);
    if ( (gdwShutdownFlags & 0x40580B) != 0 && !gProtocolType )
      PTPTelemetry::Usage::HandlePTPTelemetry();
  }
  UnlockObjectAssignment(grpwinstaLogoff);
}
