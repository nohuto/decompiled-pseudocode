/*
 * XREFs of SetConnectedState @ 0x1C00B0CC0
 * Callers:
 *     xxxRemoteConnect @ 0x1C0117AB0 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x1C00B0D4C (PowerConnectionEvent.c)
 */

__int64 __fastcall SetConnectedState(int a1, int a2)
{
  __int64 result; // rax

  gbConnected = a1;
  if ( a2 != gbConnectCompleted )
  {
    gbConnectCompleted = a2;
    return PowerConnectionEvent();
  }
  return result;
}
