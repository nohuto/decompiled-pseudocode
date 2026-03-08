/*
 * XREFs of ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1C02047F4
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0249910 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U5@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@45AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@76666666666666666663@Z @ 0x1C0203DD0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U3@U-$_.c)
 */

void __fastcall TraceLoggingIntObjUsageSummaryEvent(
        struct tagINTOBJTELEMETRYSTATE *a1,
        __int16 a2,
        __int64 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        unsigned __int64 a6)
{
  __int64 v7; // r9
  int *v8; // r10
  __int16 v9; // r11
  int v10; // ecx
  unsigned int v11; // kr00_4
  unsigned int v12; // kr04_4
  int v13; // ecx
  char v14; // [rsp+100h] [rbp-80h] BYREF
  char v15; // [rsp+101h] [rbp-7Fh] BYREF
  __int16 v16; // [rsp+102h] [rbp-7Eh] BYREF
  __int16 v17; // [rsp+104h] [rbp-7Ch] BYREF
  int v18; // [rsp+108h] [rbp-78h] BYREF
  int v19; // [rsp+10Ch] [rbp-74h] BYREF
  int v20; // [rsp+110h] [rbp-70h] BYREF
  int v21; // [rsp+114h] [rbp-6Ch] BYREF
  int v22; // [rsp+118h] [rbp-68h] BYREF
  int v23; // [rsp+11Ch] [rbp-64h] BYREF
  int v24; // [rsp+120h] [rbp-60h] BYREF
  int v25; // [rsp+124h] [rbp-5Ch] BYREF
  unsigned int v26; // [rsp+128h] [rbp-58h] BYREF
  int v27; // [rsp+12Ch] [rbp-54h] BYREF
  int v28; // [rsp+130h] [rbp-50h] BYREF
  int v29; // [rsp+134h] [rbp-4Ch] BYREF
  int v30; // [rsp+138h] [rbp-48h] BYREF
  int v31; // [rsp+13Ch] [rbp-44h] BYREF
  int v32; // [rsp+140h] [rbp-40h] BYREF
  int v33; // [rsp+144h] [rbp-3Ch] BYREF
  unsigned int v34; // [rsp+148h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+14Ch] [rbp-34h] BYREF
  unsigned int v36; // [rsp+150h] [rbp-30h] BYREF
  __int64 v37; // [rsp+158h] [rbp-28h] BYREF
  struct _GUID *v38; // [rsp+160h] [rbp-20h] BYREF
  __int64 v39; // [rsp+168h] [rbp-18h] BYREF
  __int64 v40; // [rsp+170h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0357098, 0x800000000000LL) )
    {
      v37 = *((_QWORD *)v8 + 10);
      v10 = v8[3];
      v18 = v8[19];
      v19 = v8[18];
      v20 = v8[17];
      v21 = v8[16];
      v22 = v8[15];
      v23 = v8[14];
      v24 = v8[13];
      v25 = v8[12];
      v11 = v8[22];
      v27 = v8[7];
      v28 = v8[6];
      v29 = v8[5];
      v30 = v8[4];
      v26 = v11 / 0x3E8;
      v12 = v8[10];
      v31 = v10;
      v13 = v8[2];
      v35 = v12 / 0x3E8;
      v38 = a5;
      v32 = v13;
      v33 = v8[1];
      v34 = *v8;
      v16 = v9;
      v17 = a2;
      v36 = (unsigned int)a6 / 0x3E8;
      v14 = 1;
      v15 = 1;
      v39 = v7;
      v40 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v34,
        byte_1C031DE41,
        274877907LL,
        v7,
        (__int64)&v40,
        &v39,
        (__int64)&v15,
        (__int64 *)&v38,
        (__int64)&v14,
        (__int64)&v36,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v37);
    }
  }
}
