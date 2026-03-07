NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  NTSTATUS result; // eax
  char v7; // al
  int v8; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 *v12; // [rsp+60h] [rbp-9h]
  int v13; // [rsp+68h] [rbp-1h]
  int v14; // [rsp+6Ch] [rbp+3h]
  __int64 v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  __int64 v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  __int64 v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]

  v23 = 0;
  v20 = 0;
  v17 = 0;
  v21 = a6;
  v18 = a5;
  v19 = 4;
  v16 = 4;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C02C93E0;
  v22 = 8;
  v15 = a4;
  UserData.Size = *(unsigned __int16 *)off_1C02C93E0;
  v13 = *(unsigned __int16 *)(a2 + 11);
  v12 = a2 + 11;
  UserData.Reserved = 2;
  v14 = 1;
  v10 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C02C9400 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v7 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v7 )
    {
      LOBYTE(v8) = 5;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C02C93D8,
               (unsigned int)&EventDescriptor,
               v8,
               (unsigned int)&UserData,
               v7);
    }
    else
    {
      return EtwWriteTransfer(qword_1C02C93F8, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  return result;
}
