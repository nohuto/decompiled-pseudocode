NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        const _tlgProvider_t *pEventMetadata,
        char *<wrappedArgs_0>,
        const _GUID *<wrappedArgs_1>,
        const _GUID *<wrappedArgs_2>,
        const _tlgWrapperByVal<8> *<wrappedArgs_3>,
        const _tlgWrapperByRef<16> *<wrappedArgs_4>,
        const _tlgWrapSz<char> *<wrappedArgs_5>,
        const _tlgWrapSz<unsigned short> *<wrappedArgs_6>,
        const _tlgWrapSz<unsigned short> *<wrappedArgs_7>,
        const _tlgWrapperByVal<4> *<wrappedArgs_8>,
        const _tlgWrapperByVal<4> *<wrappedArgs_9>,
        const _tlgWrapperByVal<1> *<wrappedArgs_10>,
        const _tlgWrapperByVal<1> *hProvider,
        const _tlgWrapperByVal<1> *pEventMetadata_0,
        const _tlgWrapperByVal<4> *<writerArgs_0>)
{
  __int64 v16; // rcx
  unsigned int v17; // r9d
  const wchar_t *Psz; // rdx
  __int64 v19; // rax
  unsigned int v20; // r8d
  const wchar_t *v21; // rdx
  __int64 v22; // rax
  const char *v23; // rdx
  unsigned int v24; // ecx
  const void *Ptr; // rcx
  _EVENT_DATA_DESCRIPTOR data[13]; // [rsp+30h] [rbp-D0h] BYREF

  data[12].Ptr = (unsigned __int64)<writerArgs_0>;
  v16 = -1LL;
  data[11].Ptr = (unsigned __int64)pEventMetadata_0;
  v17 = 2;
  data[10].Ptr = (unsigned __int64)hProvider;
  data[9].Ptr = (unsigned __int64)<wrappedArgs_10>;
  data[8].Ptr = (unsigned __int64)<wrappedArgs_9>;
  data[7].Ptr = (unsigned __int64)<wrappedArgs_8>;
  *(_QWORD *)&data[12].Size = 4LL;
  *(_QWORD *)&data[11].Size = 1LL;
  *(_QWORD *)&data[10].Size = 1LL;
  Psz = <wrappedArgs_7>->Psz;
  *(_QWORD *)&data[9].Size = 1LL;
  *(_QWORD *)&data[8].Size = 4LL;
  *(_QWORD *)&data[7].Size = 4LL;
  if ( Psz )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( Psz[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    Psz = (const wchar_t *)&unk_1C00920B8;
    v20 = 2;
  }
  data[6].Ptr = (unsigned __int64)Psz;
  data[6].Size = v20;
  data[6].Reserved = 0;
  v21 = <wrappedArgs_6>->Psz;
  if ( <wrappedArgs_6>->Psz )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v17 = 2 * v22 + 2;
  }
  else
  {
    v21 = (const wchar_t *)&unk_1C00920B8;
  }
  data[5].Ptr = (unsigned __int64)v21;
  data[5].Size = v17;
  data[5].Reserved = 0;
  v23 = <wrappedArgs_5>->Psz;
  if ( <wrappedArgs_5>->Psz )
  {
    do
      ++v16;
    while ( v23[v16] );
    v24 = v16 + 1;
  }
  else
  {
    v23 = a5;
    v24 = 1;
  }
  data[4].Size = v24;
  data[4].Ptr = (unsigned __int64)v23;
  data[4].Reserved = 0;
  Ptr = <wrappedArgs_4>->Ptr;
  data[2].Ptr = (unsigned __int64)<wrappedArgs_3>;
  data[3].Ptr = (unsigned __int64)Ptr;
  *(_QWORD *)&data[3].Size = 16LL;
  *(_QWORD *)&data[2].Size = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&Tlgg_TelemetryProviderProv, <wrappedArgs_0>, 0LL, 0LL, 0xDu, data);
}
