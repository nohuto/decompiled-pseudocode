/*
 * XREFs of SetConnectCompletedState @ 0x1C0016780
 * Callers:
 *     xxxRemoteConnect @ 0x1C000F480 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C00167E0 (ReferenceDwmApiPort.c)
 *     PowerConnectionEvent @ 0x1C0016838 (PowerConnectionEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  __int64 v1; // rcx

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( qword_1C02D72C8 )
    {
      if ( (int)qword_1C02D72C8() >= 0 )
      {
        v1 = ReferenceDwmApiPort();
        if ( qword_1C02D72D0 )
          qword_1C02D72D0(v1);
      }
    }
  }
}
