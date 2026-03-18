/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0001008
 * Callers:
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C0041664 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004244C (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

int __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        const _tlgProvider_t *pEventMetadata,
        const void *<wrappedArgs_0>,
        const _GUID *<wrappedArgs_1>,
        const _GUID *<wrappedArgs_2>,
        const _tlgWrapBuffer<_UNICODE_STRING> *hProvider,
        const _tlgWrapperByVal<4> *pEventMetadata_0,
        const _tlgWrapperByVal<4> *<writerArgs_0>)
{
  unsigned int Length; // ecx
  _EVENT_DATA_DESCRIPTOR data[6]; // [rsp+30h] [rbp-31h] BYREF

  data[5].Ptr = (unsigned __int64)<writerArgs_0>;
  data[4].Ptr = (unsigned __int64)pEventMetadata_0;
  data[2].Ptr = (unsigned __int64)&data[3].Size;
  *(_QWORD *)&data[5].Size = 4LL;
  *(_QWORD *)&data[4].Size = 4LL;
  *(_QWORD *)&data[2].Size = 2LL;
  Length = hProvider->Ptr->Length;
  data[3].Ptr = (unsigned __int64)hProvider->Ptr->Buffer;
  data[3].Size = Length;
  data[3].Reserved = 0;
  return tlgWriteTransfer_EtwWriteTransfer(&Tlgg_TelemetryProviderProv, <wrappedArgs_0>, 0LL, 0LL, 6u, data);
}
