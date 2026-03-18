/*
 * XREFs of ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C00CE2F8
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C01591BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void TraceLoggingAutoRotationStateEvent(void)
{
  int v0; // eax
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C03263F8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
    {
      v0 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)qword_1C0335C70 + 16LL))(qword_1C0335C70);
      v6 = 0x1000000LL;
      v4 = v0;
      v5 = dword_1C033196C;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v1,
        (unsigned int)&unk_1C02F0801,
        v2,
        v3,
        (__int64)&v6,
        (__int64)&v5,
        (__int64)&v4);
    }
  }
}
