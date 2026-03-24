/*
 * XREFs of ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C021347C
 * Callers:
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C02134E8 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2PEAU_PTPMouseLatencyTracker@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D85AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

int __fastcall InputTraceLogging::Mouse::DropInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  const char *v6; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C0330B20 > 4 && (qword_1C0330B30 & 0x40) != 0 )
  {
    v4 = qword_1C0330B38 & 0x40;
    if ( v4 == qword_1C0330B38 )
    {
      v7 = a1;
      v6 = "PTPQueueFull";
      LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
                      (__int64)&dword_1C0330B20,
                      byte_1C02F2E33,
                      a3,
                      a4,
                      (__int64)&v7,
                      (void **)&v6);
    }
  }
  return v4;
}
