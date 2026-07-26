/*
 * XREFs of ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x1C0021EB0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012D504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@_W@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@_W@@3@Z @ 0x1C00229E4 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapp.c)
 *     _tlgKeywordOn @ 0x1C0023554 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@_W@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@_W@@3@Z @ 0x1C008BA4C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U-$_tlg.c)
 */

void __fastcall NdisTraceLoggingDeviceAdded(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  void *v5; // rcx

  if ( (int)a4 < 0 )
  {
    if ( (unsigned int)dword_1C00E4108 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C00E4108, 0x400000000000LL, a3, a4) )
    {
      v5 = &unk_1C00CA700;
      if ( a5 )
        v5 = a5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>>(
        v5,
        &unk_1C00D0C87);
    }
  }
  else if ( (unsigned int)dword_1C00E4108 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E4108, 0x400000000000LL, a3, a4) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>>(
        65534LL,
        &unk_1C00D0CF8);
  }
}
