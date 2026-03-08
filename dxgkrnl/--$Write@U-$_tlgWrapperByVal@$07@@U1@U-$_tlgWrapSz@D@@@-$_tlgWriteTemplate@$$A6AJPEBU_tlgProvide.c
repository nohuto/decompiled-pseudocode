/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C006CD64
 * Callers:
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C01C69E8 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ExtractAggregateFieldTypes @ 0x1C0075078 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C007522C (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const CHAR **a6)
{
  const CHAR *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  NTSTATUS result; // eax
  char v10; // al
  int v11; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 *v15; // [rsp+60h] [rbp-9h]
  int v16; // [rsp+68h] [rbp-1h]
  int v17; // [rsp+6Ch] [rbp+3h]
  __int64 v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  __int64 v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]
  const CHAR *v24; // [rsp+90h] [rbp+27h]
  int v25; // [rsp+98h] [rbp+2Fh]
  int v26; // [rsp+9Ch] [rbp+33h]

  v6 = *a6;
  if ( *a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v6 = File;
    v8 = 1;
  }
  v26 = 0;
  v23 = 0;
  v20 = 0;
  v25 = v8;
  v21 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v24 = v6;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C013A8B0;
  v22 = 8;
  v18 = a4;
  v19 = 8;
  UserData.Size = *(unsigned __int16 *)off_1C013A8B0;
  v16 = *(unsigned __int16 *)(a2 + 11);
  v15 = a2 + 11;
  UserData.Reserved = 2;
  v17 = 1;
  v13 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C013A8D0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v10 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v10 )
    {
      LOBYTE(v11) = 5;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C013A8A8,
               (unsigned int)&EventDescriptor,
               v11,
               (unsigned int)&UserData,
               v10);
    }
    else
    {
      return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  return result;
}
