/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44443@Z @ 0x1C0086D3C
 * Callers:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0086BD0 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 * Callees:
 *     InsertEventEntryInLookUpTable @ 0x1C00BB8F4 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1C00C302C (ExtractAggregateFieldTypes.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
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
        __int64 a12)
{
  NTSTATUS result; // eax
  char v13; // al
  int v14; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+6Ch] [rbp-94h]
  __int64 v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+7Ch] [rbp-84h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+8Ch] [rbp-74h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+BCh] [rbp-44h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CCh] [rbp-34h]
  __int64 v39; // [rsp+D0h] [rbp-30h]
  int v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+DCh] [rbp-24h]
  __int64 v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E8h] [rbp-18h]
  int v44; // [rsp+ECh] [rbp-14h]
  __int64 v45; // [rsp+F0h] [rbp-10h]
  int v46; // [rsp+F8h] [rbp-8h]
  int v47; // [rsp+FCh] [rbp-4h]

  v47 = 0;
  v44 = 0;
  v41 = 0;
  v38 = 0;
  v35 = 0;
  v32 = 0;
  v29 = 0;
  v26 = 0;
  v23 = 0;
  v45 = a12;
  v42 = a11;
  v39 = a10;
  v36 = a9;
  v33 = a8;
  v30 = a7;
  v27 = a6;
  v24 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v46 = 4;
  v28 = 4;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1C02C40A0;
  v43 = 1;
  v40 = 1;
  v37 = 1;
  v34 = 1;
  v31 = 1;
  v25 = 8;
  v21 = a4;
  v22 = 8;
  UserData.Size = *(unsigned __int16 *)off_1C02C40A0;
  v19 = *(unsigned __int16 *)(a2 + 11);
  v18 = a2 + 11;
  UserData.Reserved = 2;
  v20 = 1;
  v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C02C40C0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v13 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v13 )
    {
      LOBYTE(v14) = 11;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C02C4098,
               (unsigned int)&EventDescriptor,
               v14,
               (unsigned int)&UserData,
               v13);
    }
    else
    {
      return EtwWriteTransfer(qword_1C02C40B8, &EventDescriptor, 0LL, 0LL, 0xBu, &UserData);
    }
  }
  return result;
}
