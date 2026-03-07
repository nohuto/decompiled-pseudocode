NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        const unsigned __int16 **a7)
{
  __int64 v7; // rcx
  const unsigned __int16 *v9; // r8
  __int64 v10; // rax
  int v11; // edx
  _BYTE *v12; // rdx
  int v13; // ecx
  NTSTATUS result; // eax
  char v15; // al
  int v16; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int8 *v20; // [rsp+60h] [rbp-21h]
  int v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+6Ch] [rbp-15h]
  __int64 v23; // [rsp+70h] [rbp-11h]
  __int64 v24; // [rsp+78h] [rbp-9h]
  _BYTE *v25; // [rsp+80h] [rbp-1h]
  int v26; // [rsp+88h] [rbp+7h]
  int v27; // [rsp+8Ch] [rbp+Bh]
  __int64 v28; // [rsp+90h] [rbp+Fh]
  __int64 v29; // [rsp+98h] [rbp+17h]
  const unsigned __int16 *v30; // [rsp+A0h] [rbp+1Fh]
  int v31; // [rsp+A8h] [rbp+27h]
  int v32; // [rsp+ACh] [rbp+2Bh]

  v7 = -1LL;
  v9 = *a7;
  if ( *a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &word_1C03142AC;
    v11 = 2;
  }
  v28 = a6;
  v31 = v11;
  v30 = v9;
  v32 = 0;
  v12 = *a5;
  v29 = 4LL;
  if ( v12 )
  {
    do
      ++v7;
    while ( v12[v7] );
    v13 = v7 + 1;
  }
  else
  {
    v12 = &unk_1C03206E9;
    v13 = 1;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v26 = v13;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C0357068;
  v25 = v12;
  v27 = 0;
  v23 = a4;
  v24 = 8LL;
  UserData.Size = *(unsigned __int16 *)off_1C0357068;
  v21 = *(unsigned __int16 *)(a2 + 11);
  v20 = a2 + 11;
  UserData.Reserved = 2;
  v22 = 1;
  v18 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C0357088 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v15 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v15 )
    {
      LOBYTE(v16) = 6;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C0357060,
               (unsigned int)&EventDescriptor,
               v16,
               (unsigned int)&UserData,
               v15);
    }
    else
    {
      return EtwWriteTransfer(qword_1C0357080, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
  }
  return result;
}
