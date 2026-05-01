/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U1@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@333322AEBU?$_tlgWrapSz@G@@4@Z @ 0x1802D6BD8
 * Callers:
 *     ?GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x1802E04B8 (-GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHe.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     EventWriteTransfer_0 @ 0x180090D5E (EventWriteTransfer_0.c)
 *     ExtractAggregateFieldTypes @ 0x1801AE18C (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1801AE3E0 (InsertEventEntryInLookUpTable.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        const WCHAR **a12,
        const WCHAR **a13)
{
  __int64 v13; // rcx
  const WCHAR *v15; // r8
  __int64 v16; // rax
  int v17; // edx
  const WCHAR *v18; // rdx
  int v19; // eax
  ULONG result; // eax
  unsigned __int8 AggregateFieldTypes; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  __int64 v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  const WCHAR *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  const WCHAR *v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]

  v13 = -1LL;
  v15 = *a13;
  if ( *a13 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &szAgent;
    v17 = 2;
  }
  v48 = v17;
  v47 = v15;
  v49 = 0;
  v18 = *a12;
  if ( *a12 )
  {
    do
      ++v13;
    while ( v18[v13] );
    v19 = 2 * v13 + 2;
  }
  else
  {
    v18 = &szAgent;
    v19 = 2;
  }
  v45 = v19;
  v42 = a11;
  v40 = a10;
  v38 = a9;
  v36 = a8;
  v34 = a7;
  v32 = a6;
  v30 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v44 = v18;
  v46 = 0;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_180647890;
  v43 = 8LL;
  v41 = 8LL;
  v39 = 4LL;
  v37 = 4LL;
  v35 = 4LL;
  v33 = 4LL;
  v31 = 4LL;
  v28 = a4;
  v29 = 8LL;
  UserData.Size = *(unsigned __int16 *)off_180647890;
  v26 = *(unsigned __int16 *)(a2 + 11);
  v25 = a2 + 11;
  UserData.Reserved = 2;
  v27 = 1;
  v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1806478B0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes(
                            (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
                            (__int64)&UserData);
    if ( AggregateFieldTypes )
      return InsertEventEntryInLookUpTable(
               (__int64)&dword_180647888,
               (__int128 *)&EventDescriptor,
               0xCu,
               (__int64)&UserData,
               AggregateFieldTypes);
    else
      return EventWriteTransfer_0(qword_1806478A8, &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
  }
  return result;
}
