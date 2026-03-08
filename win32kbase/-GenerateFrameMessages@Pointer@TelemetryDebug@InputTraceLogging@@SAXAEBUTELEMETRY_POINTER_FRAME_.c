/*
 * XREFs of ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1C01F34B0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333333333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C01E6460 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C01E6630 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemp.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
        const struct TELEMETRY_POINTER_FRAME_TIMES *a1,
        char a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v9; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v10; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v11; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v12; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v13; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v14; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v15; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v16; // [rsp+100h] [rbp-40h] BYREF
  __int64 v17; // [rsp+108h] [rbp-38h] BYREF
  __int64 v18; // [rsp+110h] [rbp-30h] BYREF
  __int64 v19; // [rsp+118h] [rbp-28h] BYREF
  __int64 v20; // [rsp+120h] [rbp-20h] BYREF
  __int64 v21; // [rsp+128h] [rbp-18h] BYREF
  __int64 v22; // [rsp+130h] [rbp-10h] BYREF
  __int64 v23; // [rsp+138h] [rbp-8h] BYREF
  __int64 v24; // [rsp+140h] [rbp+0h] BYREF
  char v25; // [rsp+170h] [rbp+30h] BYREF
  __int64 v26; // [rsp+178h] [rbp+38h] BYREF

  if ( isChildPartition() )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 7 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 0x10000LL) )
    {
      v26 = *((_QWORD *)a1 + 17);
      v14 = *((_QWORD *)a1 + 16);
      v13 = *((_QWORD *)a1 + 15);
      v12 = *((_QWORD *)a1 + 14);
      v11 = *((_QWORD *)a1 + 13);
      v10 = *((_QWORD *)a1 + 12);
      v9 = *((_QWORD *)a1 + 11);
      v8 = *((_QWORD *)a1 + 10);
      v15 = *((_QWORD *)a1 + 9);
      v16 = *((_QWORD *)a1 + 8);
      v17 = *((_QWORD *)a1 + 7);
      v18 = *((_QWORD *)a1 + 6);
      v19 = *((_QWORD *)a1 + 5);
      v20 = *((_QWORD *)a1 + 4);
      v21 = *((_QWORD *)a1 + 3);
      v22 = *((_QWORD *)a1 + 2);
      v23 = *((_QWORD *)a1 + 1);
      v24 = *(_QWORD *)a1;
      v25 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        (__int64)&dword_1C02CA7E0,
        byte_1C029AC85,
        v6,
        v7,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v8,
        (__int64)&v9,
        (__int64)&v10,
        (__int64)&v11,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 7 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 0x10000LL) )
  {
    v26 = *((_QWORD *)a1 + 7);
    v8 = *((_QWORD *)a1 + 6);
    v9 = *((_QWORD *)a1 + 5);
    v10 = *((_QWORD *)a1 + 4);
    v11 = *((_QWORD *)a1 + 3);
    v12 = *((_QWORD *)a1 + 2);
    v13 = *((_QWORD *)a1 + 1);
    v14 = *(_QWORD *)a1;
    v25 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029AB88,
      v4,
      v5,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v26,
      (__int64)&v25);
  }
}
