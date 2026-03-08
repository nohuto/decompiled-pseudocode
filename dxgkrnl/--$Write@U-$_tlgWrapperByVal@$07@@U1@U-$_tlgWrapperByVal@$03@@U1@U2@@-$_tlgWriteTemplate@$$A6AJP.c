/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@23@Z @ 0x1C006CEB8
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01CB880 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ExtractAggregateFieldTypes @ 0x1C0075078 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C007522C (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  NTSTATUS result; // eax
  char v9; // al
  int v10; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int8 *v14; // [rsp+60h] [rbp-39h]
  int v15; // [rsp+68h] [rbp-31h]
  int v16; // [rsp+6Ch] [rbp-2Dh]
  __int64 v17; // [rsp+70h] [rbp-29h]
  int v18; // [rsp+78h] [rbp-21h]
  int v19; // [rsp+7Ch] [rbp-1Dh]
  __int64 v20; // [rsp+80h] [rbp-19h]
  int v21; // [rsp+88h] [rbp-11h]
  int v22; // [rsp+8Ch] [rbp-Dh]
  __int64 v23; // [rsp+90h] [rbp-9h]
  int v24; // [rsp+98h] [rbp-1h]
  int v25; // [rsp+9Ch] [rbp+3h]
  __int64 v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A8h] [rbp+Fh]
  int v28; // [rsp+ACh] [rbp+13h]
  __int64 v29; // [rsp+B0h] [rbp+17h]
  int v30; // [rsp+B8h] [rbp+1Fh]
  int v31; // [rsp+BCh] [rbp+23h]

  v31 = 0;
  v28 = 0;
  v25 = 0;
  v22 = 0;
  v19 = 0;
  v29 = a8;
  v26 = a7;
  v23 = a6;
  v20 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v30 = 4;
  v24 = 4;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v27 = 8;
  v21 = 8;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C013A8B0;
  v17 = a4;
  v18 = 8;
  UserData.Size = *(unsigned __int16 *)off_1C013A8B0;
  v15 = *(unsigned __int16 *)(a2 + 11);
  v14 = a2 + 11;
  UserData.Reserved = 2;
  v16 = 1;
  v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C013A8D0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v9 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v9 )
    {
      LOBYTE(v10) = 7;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C013A8A8,
               (unsigned int)&EventDescriptor,
               v10,
               (unsigned int)&UserData,
               v9);
    }
    else
    {
      return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
    }
  }
  return result;
}
