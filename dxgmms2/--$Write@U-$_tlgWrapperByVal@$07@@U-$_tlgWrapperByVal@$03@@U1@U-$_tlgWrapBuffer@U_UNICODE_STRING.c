NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7,
        __int64 a8,
        void **a9,
        __int64 a10)
{
  _BYTE *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  NTSTATUS result; // eax
  char v16; // al
  int v17; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-A9h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-99h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int8 *v21; // [rsp+60h] [rbp-79h]
  int v22; // [rsp+68h] [rbp-71h]
  int v23; // [rsp+6Ch] [rbp-6Dh]
  __int64 v24; // [rsp+70h] [rbp-69h]
  int v25; // [rsp+78h] [rbp-61h]
  int v26; // [rsp+7Ch] [rbp-5Dh]
  __int64 v27; // [rsp+80h] [rbp-59h]
  int v28; // [rsp+88h] [rbp-51h]
  int v29; // [rsp+8Ch] [rbp-4Dh]
  __int64 v30; // [rsp+90h] [rbp-49h]
  int v31; // [rsp+98h] [rbp-41h]
  int v32; // [rsp+9Ch] [rbp-3Dh]
  _DWORD *v33; // [rsp+A0h] [rbp-39h]
  int v34; // [rsp+A8h] [rbp-31h]
  int v35; // [rsp+ACh] [rbp-2Dh]
  __int64 v36; // [rsp+B0h] [rbp-29h]
  _DWORD v37[2]; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-19h]
  int v39; // [rsp+C8h] [rbp-11h]
  int v40; // [rsp+CCh] [rbp-Dh]
  _BYTE *v41; // [rsp+D0h] [rbp-9h]
  int v42; // [rsp+D8h] [rbp-1h]
  int v43; // [rsp+DCh] [rbp+3h]
  __int64 v44; // [rsp+E0h] [rbp+7h]
  int v45; // [rsp+E8h] [rbp+Fh]
  int v46; // [rsp+ECh] [rbp+13h]

  v46 = 0;
  v44 = a10;
  v45 = 4;
  v10 = *a9;
  if ( *a9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v10 = &unk_1C00627B9;
    v12 = 1;
  }
  v43 = 0;
  v40 = 0;
  v35 = 0;
  v42 = v12;
  v38 = a8;
  v33 = v37;
  v41 = v10;
  v39 = 8;
  v34 = 2;
  v13 = **a7;
  v14 = *((_QWORD *)*a7 + 1);
  v37[1] = 0;
  v32 = 0;
  v29 = 0;
  v26 = 0;
  v36 = v14;
  v30 = a6;
  v27 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v37[0] = v13;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v31 = 8;
  v28 = 4;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C0076050;
  v24 = a4;
  v25 = 8;
  UserData.Size = *(unsigned __int16 *)off_1C0076050;
  v22 = *(unsigned __int16 *)(a2 + 11);
  v21 = a2 + 11;
  UserData.Reserved = 2;
  v23 = 1;
  v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C0076070 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v16 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v16 )
    {
      LOBYTE(v17) = 10;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C0076048,
               (unsigned int)&EventDescriptor,
               v17,
               (unsigned int)&UserData,
               v16);
    }
    else
    {
      return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
    }
  }
  return result;
}
