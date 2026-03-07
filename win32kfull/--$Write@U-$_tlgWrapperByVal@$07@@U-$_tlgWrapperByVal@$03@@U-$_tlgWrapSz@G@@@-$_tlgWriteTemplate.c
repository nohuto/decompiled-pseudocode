NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const unsigned __int16 **a6)
{
  const unsigned __int16 *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  NTSTATUS result; // eax
  char v11; // al
  int v12; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 *v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]
  __int64 v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  __int64 v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]
  const unsigned __int16 *v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+98h] [rbp+2Fh]
  int v25; // [rsp+9Ch] [rbp+33h]

  v7 = *a6;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v7 = &word_1C03142AC;
    v9 = 2;
  }
  v21 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v23 = v7;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C0357068;
  v24 = v9;
  v25 = 0;
  v22 = 4LL;
  v19 = a4;
  v20 = 8LL;
  UserData.Size = *(unsigned __int16 *)off_1C0357068;
  v17 = *(unsigned __int16 *)(a2 + 11);
  v16 = a2 + 11;
  UserData.Reserved = 2;
  v18 = 1;
  v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C0357088 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v11 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v11 )
    {
      LOBYTE(v12) = 5;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C0357060,
               (unsigned int)&EventDescriptor,
               v12,
               (unsigned int)&UserData,
               v11);
    }
    else
    {
      return EtwWriteTransfer(qword_1C0357080, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  return result;
}
