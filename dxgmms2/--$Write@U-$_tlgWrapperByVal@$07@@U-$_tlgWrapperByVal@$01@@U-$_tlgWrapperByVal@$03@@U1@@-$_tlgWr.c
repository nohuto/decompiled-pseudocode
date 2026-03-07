NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  NTSTATUS result; // eax
  char v8; // al
  int v9; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int8 *v13; // [rsp+60h] [rbp-21h]
  int v14; // [rsp+68h] [rbp-19h]
  int v15; // [rsp+6Ch] [rbp-15h]
  __int64 v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+7Ch] [rbp-5h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+8Ch] [rbp+Bh]
  __int64 v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+98h] [rbp+17h]
  int v24; // [rsp+9Ch] [rbp+1Bh]
  __int64 v25; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A8h] [rbp+27h]
  int v27; // [rsp+ACh] [rbp+2Bh]

  v27 = 0;
  v24 = 0;
  v21 = 0;
  v18 = 0;
  v25 = a7;
  v22 = a6;
  v19 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C0076050;
  v26 = 8;
  v23 = 4;
  v20 = 2;
  v16 = a4;
  v17 = 8;
  UserData.Size = *(unsigned __int16 *)off_1C0076050;
  v14 = *(unsigned __int16 *)(a2 + 11);
  v13 = a2 + 11;
  UserData.Reserved = 2;
  v15 = 1;
  v11 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C0076070 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v8 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v8 )
    {
      LOBYTE(v9) = 6;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C0076048,
               (unsigned int)&EventDescriptor,
               v9,
               (unsigned int)&UserData,
               v8);
    }
    else
    {
      return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
  }
  return result;
}
