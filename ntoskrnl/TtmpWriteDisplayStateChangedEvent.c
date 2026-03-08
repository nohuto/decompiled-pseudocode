/*
 * XREFs of TtmpWriteDisplayStateChangedEvent @ 0x1409A8F04
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1409A82BC (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     TtmiWriteEventToAllQueues @ 0x1409A1ED8 (TtmiWriteEventToAllQueues.c)
 *     TtmiLogTerminalDisplayStateChangedEvent @ 0x1409A72C8 (TtmiLogTerminalDisplayStateChangedEvent.c)
 */

void __fastcall TtmpWriteDisplayStateChangedEvent(__int64 a1, _DWORD *a2)
{
  int v4; // edx
  int v5; // r8d
  _DWORD v6[138]; // [rsp+20h] [rbp-228h] BYREF

  memset(v6, 0, 0x220uLL);
  v4 = a2[69];
  v5 = a2[70];
  v6[2] = a2[7];
  v6[3] = v4;
  v6[4] = v5;
  v6[0] = 2;
  TtmiLogTerminalDisplayStateChangedEvent(v6[2], v4, v5);
  TtmiWriteEventToAllQueues(a1, (__int64)v6);
}
