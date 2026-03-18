/*
 * XREFs of ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C003CFA4
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01A93DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void TraceLoggingMouseWheelRoutingValueAtStartup(void)
{
  int v0; // r8d
  int v1; // r9d
  int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  UPDWORDPointer(8220LL);
  if ( (unsigned int)dword_1C0354098 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0354098, 0x200000000000LL) )
    {
      v2 = v1;
      v3 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C0354098,
        (unsigned int)&unk_1C031C8BF,
        v0,
        v1,
        (__int64)&v3,
        (__int64)&v2);
    }
  }
}
