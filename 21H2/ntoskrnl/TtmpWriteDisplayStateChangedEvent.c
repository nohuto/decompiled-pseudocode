/*
 * XREFs of TtmpWriteDisplayStateChangedEvent @ 0x1408FE5D8
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1408FDA90 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     TtmiWriteEventToAllQueues @ 0x1408FF6D8 (TtmiWriteEventToAllQueues.c)
 *     TtmiLogTerminalDisplayStateChangedEvent @ 0x1409049E4 (TtmiLogTerminalDisplayStateChangedEvent.c)
 */

__int64 __fastcall TtmpWriteDisplayStateChangedEvent(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD v7[138]; // [rsp+20h] [rbp-228h] BYREF

  memset(v7, 0, 0x220uLL);
  v4 = (unsigned int)a2[69];
  v5 = (unsigned int)a2[70];
  v7[2] = a2[7];
  v7[3] = v4;
  v7[4] = v5;
  v7[0] = 2;
  TtmiLogTerminalDisplayStateChangedEvent(v7[2], v4, v5);
  return TtmiWriteEventToAllQueues(a1, v7);
}
