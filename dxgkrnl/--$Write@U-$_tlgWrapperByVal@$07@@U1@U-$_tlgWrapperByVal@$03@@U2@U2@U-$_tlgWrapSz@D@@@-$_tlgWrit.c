NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const CHAR **a9)
{
  const CHAR *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  NTSTATUS result; // eax
  char v13; // al
  int v14; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-71h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int8 *v18; // [rsp+60h] [rbp-51h]
  int v19; // [rsp+68h] [rbp-49h]
  int v20; // [rsp+6Ch] [rbp-45h]
  __int64 v21; // [rsp+70h] [rbp-41h]
  int v22; // [rsp+78h] [rbp-39h]
  int v23; // [rsp+7Ch] [rbp-35h]
  __int64 v24; // [rsp+80h] [rbp-31h]
  int v25; // [rsp+88h] [rbp-29h]
  int v26; // [rsp+8Ch] [rbp-25h]
  __int64 v27; // [rsp+90h] [rbp-21h]
  int v28; // [rsp+98h] [rbp-19h]
  int v29; // [rsp+9Ch] [rbp-15h]
  __int64 v30; // [rsp+A0h] [rbp-11h]
  int v31; // [rsp+A8h] [rbp-9h]
  int v32; // [rsp+ACh] [rbp-5h]
  __int64 v33; // [rsp+B0h] [rbp-1h]
  int v34; // [rsp+B8h] [rbp+7h]
  int v35; // [rsp+BCh] [rbp+Bh]
  const CHAR *v36; // [rsp+C0h] [rbp+Fh]
  int v37; // [rsp+C8h] [rbp+17h]
  int v38; // [rsp+CCh] [rbp+1Bh]

  v9 = *a9;
  if ( *a9 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v9 = File;
    v11 = 1;
  }
  v38 = 0;
  v35 = 0;
  v32 = 0;
  v29 = 0;
  v26 = 0;
  v23 = 0;
  v37 = v11;
  v33 = a8;
  v30 = a7;
  v27 = a6;
  v24 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v36 = v9;
  v34 = 4;
  v31 = 4;
  v28 = 4;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C013A8B0;
  v25 = 8;
  v21 = a4;
  v22 = 8;
  UserData.Size = *(unsigned __int16 *)off_1C013A8B0;
  v19 = *(unsigned __int16 *)(a2 + 11);
  v18 = a2 + 11;
  UserData.Reserved = 2;
  v20 = 1;
  v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C013A8D0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v13 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v13 )
    {
      LOBYTE(v14) = 8;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C013A8A8,
               (unsigned int)&EventDescriptor,
               v14,
               (unsigned int)&UserData,
               v13);
    }
    else
    {
      return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
    }
  }
  return result;
}
