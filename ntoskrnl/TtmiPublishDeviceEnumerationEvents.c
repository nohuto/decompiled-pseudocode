/*
 * XREFs of TtmiPublishDeviceEnumerationEvents @ 0x14099FC9C
 * Callers:
 *     TtmiWriteEnumerationEventsToQueue @ 0x1409A1E3C (TtmiWriteEnumerationEventsToQueue.c)
 * Callees:
 *     TtmpPublishDeviceEvent @ 0x1409A0904 (TtmpPublishDeviceEvent.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 */

__int64 __fastcall TtmiPublishDeviceEnumerationEvents(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *i; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v2 = (__int64 *)(a1 + 96);
  for ( i = *(__int64 **)(a1 + 96); ; i = (__int64 *)*i )
  {
    if ( i == v2 )
      return 0;
    if ( (i[75] & 0xA) == 2 )
    {
      v6 = TtmpPublishDeviceEvent(a1, a2, i, 0LL);
      v7 = v6;
      if ( v6 < 0 )
        break;
    }
  }
  TtmiLogError("TtmiPublishDeviceEnumerationEvents", 1054LL, (unsigned int)v6, (unsigned int)v6);
  return v7;
}
