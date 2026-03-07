NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const CHAR **a8)
{
  const CHAR *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  NTSTATUS result; // eax
  char v12; // al
  int v13; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int8 *v17; // [rsp+60h] [rbp-39h]
  int v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+6Ch] [rbp-2Dh]
  __int64 v20; // [rsp+70h] [rbp-29h]
  int v21; // [rsp+78h] [rbp-21h]
  int v22; // [rsp+7Ch] [rbp-1Dh]
  __int64 v23; // [rsp+80h] [rbp-19h]
  int v24; // [rsp+88h] [rbp-11h]
  int v25; // [rsp+8Ch] [rbp-Dh]
  __int64 v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+98h] [rbp-1h]
  int v28; // [rsp+9Ch] [rbp+3h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  int v30; // [rsp+A8h] [rbp+Fh]
  int v31; // [rsp+ACh] [rbp+13h]
  const CHAR *v32; // [rsp+B0h] [rbp+17h]
  int v33; // [rsp+B8h] [rbp+1Fh]
  int v34; // [rsp+BCh] [rbp+23h]

  v8 = *a8;
  if ( *a8 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v8 = File;
    v10 = 1;
  }
  v34 = 0;
  v31 = 0;
  v28 = 0;
  v25 = 0;
  v22 = 0;
  v33 = v10;
  v29 = a7;
  v26 = a6;
  v23 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v32 = v8;
  v30 = 4;
  v27 = 4;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C013A8B0;
  v24 = 8;
  v20 = a4;
  v21 = 8;
  UserData.Size = *(unsigned __int16 *)off_1C013A8B0;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  UserData.Reserved = 2;
  v19 = 1;
  v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C013A8D0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v12 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v12 )
    {
      LOBYTE(v13) = 7;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C013A8A8,
               (unsigned int)&EventDescriptor,
               v13,
               (unsigned int)&UserData,
               v12);
    }
    else
    {
      return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
    }
  }
  return result;
}
