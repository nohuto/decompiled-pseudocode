/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U?$_tlgWrapSz@G@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6AEBU?$_tlgWrapSz@G@@6@Z @ 0x1C0036DA8
 * Callers:
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C00377C0 (imp_WdfDriverErrorReportApiMissing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002CB8C (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        const _tlgProvider_t *pEventMetadata,
        char *<wrappedArgs_0>,
        const _GUID *<wrappedArgs_1>,
        const _GUID *<wrappedArgs_2>,
        const _tlgWrapperByVal<8> *<wrappedArgs_3>,
        const _tlgWrapperByRef<16> *<wrappedArgs_4>,
        const _tlgWrapSz<char> *<wrappedArgs_5>,
        const _tlgWrapperByVal<4> *<wrappedArgs_6>,
        const _tlgWrapperByVal<4> *hProvider,
        const _tlgWrapSz<unsigned short> *pEventMetadata_0,
        const _tlgWrapperByVal<4> *<writerArgs_0>)
{
  __int64 v12; // rcx
  const wchar_t *Psz; // rdx
  __int64 v14; // rax
  unsigned int v15; // r8d
  const char *v16; // rdx
  unsigned int v17; // ecx
  const void *Ptr; // rcx
  _EVENT_DATA_DESCRIPTOR data[9]; // [rsp+30h] [rbp-81h] BYREF

  data[8].Ptr = (unsigned __int64)<writerArgs_0>;
  v12 = -1LL;
  *(_QWORD *)&data[8].Size = 4LL;
  Psz = pEventMetadata_0->Psz;
  if ( pEventMetadata_0->Psz )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( Psz[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    Psz = (const wchar_t *)&unk_1C00920B8;
    v15 = 2;
  }
  data[6].Ptr = (unsigned __int64)hProvider;
  data[5].Ptr = (unsigned __int64)<wrappedArgs_6>;
  data[7].Ptr = (unsigned __int64)Psz;
  data[7].Size = v15;
  data[7].Reserved = 0;
  v16 = <wrappedArgs_5>->Psz;
  *(_QWORD *)&data[6].Size = 4LL;
  *(_QWORD *)&data[5].Size = 4LL;
  if ( v16 )
  {
    do
      ++v12;
    while ( v16[v12] );
    v17 = v12 + 1;
  }
  else
  {
    v16 = a5;
    v17 = 1;
  }
  data[4].Size = v17;
  data[4].Ptr = (unsigned __int64)v16;
  data[4].Reserved = 0;
  Ptr = <wrappedArgs_4>->Ptr;
  data[2].Ptr = (unsigned __int64)<wrappedArgs_3>;
  data[3].Ptr = (unsigned __int64)Ptr;
  *(_QWORD *)&data[3].Size = 16LL;
  *(_QWORD *)&data[2].Size = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&Tlgg_TelemetryProviderProv, <wrappedArgs_0>, 0LL, 0LL, 9u, data);
}
