/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2@Z @ 0x1C006CC44
 * Callers:
 *     ?LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ @ 0x1C03CD4B4 (-LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ExtractAggregateFieldTypes @ 0x1C0075078 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C007522C (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  NTSTATUS result; // eax
  char v6; // al
  int v7; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-21h] BYREF
  unsigned int v9; // [rsp+40h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-1h] BYREF
  unsigned __int8 *v11; // [rsp+60h] [rbp+Fh]
  int v12; // [rsp+68h] [rbp+17h]
  int v13; // [rsp+6Ch] [rbp+1Bh]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+7Ch] [rbp+2Bh]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+88h] [rbp+37h]
  int v19; // [rsp+8Ch] [rbp+3Bh]

  v19 = 0;
  v16 = 0;
  v17 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C013A8B0;
  v18 = 8;
  v14 = a4;
  v15 = 8;
  UserData.Size = *(unsigned __int16 *)off_1C013A8B0;
  v12 = *(unsigned __int16 *)(a2 + 11);
  v11 = a2 + 11;
  UserData.Reserved = 2;
  v13 = 1;
  v9 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C013A8D0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v6 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v6 )
    {
      LOBYTE(v7) = 4;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C013A8A8,
               (unsigned int)&EventDescriptor,
               v7,
               (unsigned int)&UserData,
               v6);
    }
    else
    {
      return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
  }
  return result;
}
