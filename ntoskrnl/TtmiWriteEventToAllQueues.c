/*
 * XREFs of TtmiWriteEventToAllQueues @ 0x1409A1ED8
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1409A0904 (TtmpPublishDeviceEvent.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1409A2F00 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmpWriteDisplayStateChangedEvent @ 0x1409A8F04 (TtmpWriteDisplayStateChangedEvent.c)
 * Callees:
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiCloseEventQueue @ 0x1409A8F78 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409A92D8 (TtmiWriteEventToSingleQueue.c)
 */

void __fastcall TtmiWriteEventToAllQueues(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  int v6; // eax

  v2 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD **)(a1 + 80);
  while ( v4 != v2 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    v6 = TtmiWriteEventToSingleQueue(v5, a2);
    if ( v6 < 0 )
    {
      TtmiLogError("TtmiWriteEventToAllQueues", 2194LL, (unsigned int)v6, 0xFFFFFFFFLL);
      TtmiCloseEventQueue(v5);
    }
  }
}
