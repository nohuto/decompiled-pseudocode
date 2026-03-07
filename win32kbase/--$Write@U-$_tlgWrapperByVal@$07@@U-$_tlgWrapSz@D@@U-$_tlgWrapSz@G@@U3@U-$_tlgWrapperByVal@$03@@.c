NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rcx
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  int v13; // r8d
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  _BYTE *v17; // rdx
  int v18; // ecx
  NTSTATUS result; // eax
  unsigned __int8 AggregateFieldTypes; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-71h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int8 *v24; // [rsp+60h] [rbp-51h]
  int v25; // [rsp+68h] [rbp-49h]
  int v26; // [rsp+6Ch] [rbp-45h]
  __int64 v27; // [rsp+70h] [rbp-41h]
  __int64 v28; // [rsp+78h] [rbp-39h]
  _BYTE *v29; // [rsp+80h] [rbp-31h]
  int v30; // [rsp+88h] [rbp-29h]
  int v31; // [rsp+8Ch] [rbp-25h]
  const WCHAR *v32; // [rsp+90h] [rbp-21h]
  int v33; // [rsp+98h] [rbp-19h]
  int v34; // [rsp+9Ch] [rbp-15h]
  const WCHAR *v35; // [rsp+A0h] [rbp-11h]
  int v36; // [rsp+A8h] [rbp-9h]
  int v37; // [rsp+ACh] [rbp-5h]
  __int64 v38; // [rsp+B0h] [rbp-1h]
  __int64 v39; // [rsp+B8h] [rbp+7h]
  __int64 v40; // [rsp+C0h] [rbp+Fh]
  __int64 v41; // [rsp+C8h] [rbp+17h]

  v40 = a9;
  v10 = -1LL;
  v38 = a8;
  v41 = 8LL;
  v39 = 4LL;
  v11 = *a7;
  if ( *a7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &word_1C02856D8;
    v13 = 2;
  }
  v35 = v11;
  v36 = v13;
  v37 = 0;
  v14 = *a6;
  if ( *a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &word_1C02856D8;
    v16 = 2;
  }
  v32 = v14;
  v33 = v16;
  v34 = 0;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v17[v10] );
    v18 = v10 + 1;
  }
  else
  {
    v17 = &unk_1C02A2108;
    v18 = 1;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v30 = v18;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v29 = v17;
  v31 = 0;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C02C9370;
  v27 = a4;
  v28 = 8LL;
  UserData.Size = *(unsigned __int16 *)off_1C02C9370;
  v25 = *(unsigned __int16 *)(a2 + 11);
  v24 = a2 + 11;
  UserData.Reserved = 2;
  v26 = 1;
  v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C02C9390 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes(
                            (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
                            (__int64)&UserData);
    if ( AggregateFieldTypes )
      return InsertEventEntryInLookUpTable(
               (__int64)&dword_1C02C9368,
               (__int64)&EventDescriptor,
               8,
               (__int64)&UserData,
               AggregateFieldTypes);
    else
      return EtwWriteTransfer(qword_1C02C9388, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  return result;
}
