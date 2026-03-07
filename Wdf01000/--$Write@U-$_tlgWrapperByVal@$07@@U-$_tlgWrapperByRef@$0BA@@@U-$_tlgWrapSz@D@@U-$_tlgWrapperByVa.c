NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        const _tlgProvider_t *pEventMetadata,
        char *<wrappedArgs_0>,
        const _GUID *<wrappedArgs_1>,
        const _GUID *<wrappedArgs_2>,
        const _tlgWrapperByVal<8> *<wrappedArgs_3>,
        const _tlgWrapperByRef<16> *<wrappedArgs_4>,
        const _tlgWrapSz<char> *<wrappedArgs_5>,
        const _tlgWrapperByVal<1> *<wrappedArgs_6>,
        const _tlgWrapperByVal<1> *<wrappedArgs_7>,
        const _tlgWrapperByVal<1> *<wrappedArgs_8>,
        const _tlgWrapperByVal<1> *<wrappedArgs_9>,
        const _tlgWrapperByVal<1> *<wrappedArgs_10>,
        const _tlgWrapperByVal<1> *<wrappedArgs_11>,
        const _tlgWrapperByVal<1> *<wrappedArgs_12>,
        const _tlgWrapperByVal<1> *<wrappedArgs_13>,
        const _tlgWrapperByVal<1> *<wrappedArgs_14>,
        const _tlgWrapperByVal<1> *<wrappedArgs_15>,
        const _tlgWrapperByVal<1> *<wrappedArgs_16>,
        const _tlgWrapperByVal<1> *<wrappedArgs_17>,
        const _tlgWrapperByVal<1> *<wrappedArgs_18>,
        const _tlgWrapperByVal<1> *<wrappedArgs_19>,
        const _tlgWrapperByVal<1> *<wrappedArgs_20>,
        const _tlgWrapperByVal<1> *<wrappedArgs_21>,
        const _tlgWrapperByVal<1> *<wrappedArgs_22>,
        const _tlgWrapperByVal<1> *<wrappedArgs_23>,
        const _tlgWrapperByVal<1> *<wrappedArgs_24>,
        const _tlgWrapperByVal<1> *<wrappedArgs_25>,
        const _tlgWrapperByVal<1> *<wrappedArgs_26>,
        const _tlgWrapperByVal<1> *<wrappedArgs_27>,
        const _tlgWrapperByVal<1> *<wrappedArgs_28>,
        const _tlgWrapperByVal<1> *<wrappedArgs_29>,
        const _tlgWrapSz<unsigned short> *<wrappedArgs_30>,
        const _tlgWrapSz<unsigned short> *hProvider,
        const _tlgWrapSz<unsigned short> *pEventMetadata_0,
        const _tlgWrapSz<unsigned short> *<writerArgs_0>)
{
  __int64 v36; // rcx
  unsigned int v37; // r8d
  const wchar_t *Psz; // rdx
  __int64 v39; // rax
  unsigned int v40; // r9d
  const wchar_t *v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // r9d
  const wchar_t *v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // r9d
  const wchar_t *v47; // rdx
  __int64 v48; // rax
  const char *v49; // rdx
  unsigned int v50; // ecx
  const void *Ptr; // rcx
  _EVENT_DATA_DESCRIPTOR data[33]; // [rsp+30h] [rbp-D0h] BYREF

  v36 = -1LL;
  v37 = 2;
  Psz = <writerArgs_0>->Psz;
  if ( <writerArgs_0>->Psz )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( Psz[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    Psz = (const wchar_t *)&unk_1C00920B8;
    v40 = 2;
  }
  data[32].Ptr = (unsigned __int64)Psz;
  data[32].Size = v40;
  data[32].Reserved = 0;
  v41 = pEventMetadata_0->Psz;
  if ( pEventMetadata_0->Psz )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( v41[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v41 = (const wchar_t *)&unk_1C00920B8;
    v43 = 2;
  }
  data[31].Ptr = (unsigned __int64)v41;
  data[31].Size = v43;
  data[31].Reserved = 0;
  v44 = hProvider->Psz;
  if ( hProvider->Psz )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( v44[v45] );
    v46 = 2 * v45 + 2;
  }
  else
  {
    v44 = (const wchar_t *)&unk_1C00920B8;
    v46 = 2;
  }
  data[30].Ptr = (unsigned __int64)v44;
  data[30].Size = v46;
  data[30].Reserved = 0;
  v47 = <wrappedArgs_30>->Psz;
  if ( <wrappedArgs_30>->Psz )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( v47[v48] );
    v37 = 2 * v48 + 2;
  }
  else
  {
    v47 = (const wchar_t *)&unk_1C00920B8;
  }
  data[28].Ptr = (unsigned __int64)<wrappedArgs_29>;
  data[27].Ptr = (unsigned __int64)<wrappedArgs_28>;
  data[26].Ptr = (unsigned __int64)<wrappedArgs_27>;
  data[25].Ptr = (unsigned __int64)<wrappedArgs_26>;
  data[24].Ptr = (unsigned __int64)<wrappedArgs_25>;
  data[23].Ptr = (unsigned __int64)<wrappedArgs_24>;
  data[22].Ptr = (unsigned __int64)<wrappedArgs_23>;
  data[21].Ptr = (unsigned __int64)<wrappedArgs_22>;
  data[20].Ptr = (unsigned __int64)<wrappedArgs_21>;
  data[19].Ptr = (unsigned __int64)<wrappedArgs_20>;
  data[18].Ptr = (unsigned __int64)<wrappedArgs_19>;
  data[17].Ptr = (unsigned __int64)<wrappedArgs_18>;
  data[16].Ptr = (unsigned __int64)<wrappedArgs_17>;
  data[15].Ptr = (unsigned __int64)<wrappedArgs_16>;
  data[14].Ptr = (unsigned __int64)<wrappedArgs_15>;
  data[13].Ptr = (unsigned __int64)<wrappedArgs_14>;
  data[12].Ptr = (unsigned __int64)<wrappedArgs_13>;
  data[11].Ptr = (unsigned __int64)<wrappedArgs_12>;
  data[10].Ptr = (unsigned __int64)<wrappedArgs_11>;
  data[9].Ptr = (unsigned __int64)<wrappedArgs_10>;
  data[8].Ptr = (unsigned __int64)<wrappedArgs_9>;
  data[7].Ptr = (unsigned __int64)<wrappedArgs_8>;
  data[6].Ptr = (unsigned __int64)<wrappedArgs_7>;
  data[5].Ptr = (unsigned __int64)<wrappedArgs_6>;
  data[29].Ptr = (unsigned __int64)v47;
  data[29].Size = v37;
  data[29].Reserved = 0;
  v49 = <wrappedArgs_5>->Psz;
  *(_QWORD *)&data[28].Size = 1LL;
  *(_QWORD *)&data[27].Size = 1LL;
  *(_QWORD *)&data[26].Size = 1LL;
  *(_QWORD *)&data[25].Size = 1LL;
  *(_QWORD *)&data[24].Size = 1LL;
  *(_QWORD *)&data[23].Size = 1LL;
  *(_QWORD *)&data[22].Size = 1LL;
  *(_QWORD *)&data[21].Size = 1LL;
  *(_QWORD *)&data[20].Size = 1LL;
  *(_QWORD *)&data[19].Size = 1LL;
  *(_QWORD *)&data[18].Size = 1LL;
  *(_QWORD *)&data[17].Size = 1LL;
  *(_QWORD *)&data[16].Size = 1LL;
  *(_QWORD *)&data[15].Size = 1LL;
  *(_QWORD *)&data[14].Size = 1LL;
  *(_QWORD *)&data[13].Size = 1LL;
  *(_QWORD *)&data[12].Size = 1LL;
  *(_QWORD *)&data[11].Size = 1LL;
  *(_QWORD *)&data[10].Size = 1LL;
  *(_QWORD *)&data[9].Size = 1LL;
  *(_QWORD *)&data[8].Size = 1LL;
  *(_QWORD *)&data[7].Size = 1LL;
  *(_QWORD *)&data[6].Size = 1LL;
  *(_QWORD *)&data[5].Size = 1LL;
  if ( v49 )
  {
    do
      ++v36;
    while ( v49[v36] );
    v50 = v36 + 1;
  }
  else
  {
    v49 = a5;
    v50 = 1;
  }
  data[4].Size = v50;
  data[4].Ptr = (unsigned __int64)v49;
  data[4].Reserved = 0;
  Ptr = <wrappedArgs_4>->Ptr;
  data[2].Ptr = (unsigned __int64)<wrappedArgs_3>;
  data[3].Ptr = (unsigned __int64)Ptr;
  *(_QWORD *)&data[3].Size = 16LL;
  *(_QWORD *)&data[2].Size = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&Tlgg_TelemetryProviderProv, <wrappedArgs_0>, 0LL, 0LL, 0x21u, data);
}
