/*
 * XREFs of SetConnectedState @ 0x1C00D4370
 * Callers:
 *     <none>
 * Callees:
 *     PowerConnectionEvent @ 0x1C0016838 (PowerConnectionEvent.c)
 */

void __fastcall SetConnectedState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  gbConnected = a1;
  if ( (_DWORD)a2 != gbConnectCompleted )
  {
    gbConnectCompleted = a2;
    PowerConnectionEvent(a1, a2, a3, a4);
  }
}
