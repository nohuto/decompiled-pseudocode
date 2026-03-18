/*
 * XREFs of ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1C021E740
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0255540 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U5@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@45AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@76666666666666666663@Z @ 0x1C021DB48 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U3@U-$_.c)
 */

void __fastcall TraceLoggingIntObjUsageSummaryEvent(
        struct tagINTOBJTELEMETRYSTATE *a1,
        __int64 a2,
        __int64 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        unsigned __int64 a6)
{
  __int64 v6; // r9
  __int16 v7; // r10
  __int16 v8; // r11
  char v9[2]; // [rsp+100h] [rbp-80h] BYREF
  __int16 v10; // [rsp+102h] [rbp-7Eh] BYREF
  __int16 v11; // [rsp+104h] [rbp-7Ch] BYREF
  int v12; // [rsp+108h] [rbp-78h] BYREF
  int v13; // [rsp+10Ch] [rbp-74h] BYREF
  int v14; // [rsp+110h] [rbp-70h] BYREF
  int v15; // [rsp+114h] [rbp-6Ch] BYREF
  int v16; // [rsp+118h] [rbp-68h] BYREF
  int v17; // [rsp+11Ch] [rbp-64h] BYREF
  int v18; // [rsp+120h] [rbp-60h] BYREF
  int v19; // [rsp+124h] [rbp-5Ch] BYREF
  unsigned int v20; // [rsp+128h] [rbp-58h] BYREF
  int v21; // [rsp+12Ch] [rbp-54h] BYREF
  int v22; // [rsp+130h] [rbp-50h] BYREF
  int v23; // [rsp+134h] [rbp-4Ch] BYREF
  int v24; // [rsp+138h] [rbp-48h] BYREF
  int v25; // [rsp+13Ch] [rbp-44h] BYREF
  int v26; // [rsp+140h] [rbp-40h] BYREF
  int v27; // [rsp+144h] [rbp-3Ch] BYREF
  int v28; // [rsp+148h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+14Ch] [rbp-34h] BYREF
  unsigned int v30; // [rsp+150h] [rbp-30h] BYREF
  __int64 v31; // [rsp+158h] [rbp-28h] BYREF
  struct _GUID *v32; // [rsp+160h] [rbp-20h] BYREF
  __int64 v33; // [rsp+168h] [rbp-18h] BYREF
  __int64 v34; // [rsp+170h] [rbp-10h] BYREF
  struct tagINTOBJTELEMETRYSTATE *v35; // [rsp+190h] [rbp+10h] BYREF

  v35 = a1;
  if ( (unsigned int)dword_1C03263F8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C03263F8, 0x800000000000LL) )
    {
      v31 = qword_1C033BD80;
      v12 = dword_1C033BD7C;
      v13 = dword_1C033BD78;
      v14 = dword_1C033BD74;
      v15 = dword_1C033BD70;
      v16 = dword_1C033BD6C;
      v17 = dword_1C033BD68;
      v18 = dword_1C033BD64;
      v19 = dword_1C033BD60;
      v21 = dword_1C033BD4C;
      v22 = dword_1C033BD48;
      v23 = dword_1C033BD44;
      v24 = dword_1C033BD40;
      v20 = (unsigned int)qword_1C033BD88 / 0x3E8;
      v25 = dword_1C033BD3C;
      v29 = (unsigned int)qword_1C033BD58 / 0x3E8;
      v32 = a5;
      v26 = dword_1C033BD38;
      v27 = dword_1C033BD34;
      v28 = (int)gIntObjTelemetryState;
      v10 = v7;
      v11 = v8;
      v30 = (unsigned int)a6 / 0x3E8;
      LOBYTE(v35) = 1;
      v9[0] = 1;
      v33 = v6;
      v34 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)gIntObjTelemetryState,
        byte_1C02F038D,
        274877907LL,
        v6,
        (__int64)&v34,
        &v33,
        (__int64)v9,
        (__int64 *)&v32,
        (__int64)&v35,
        (__int64)&v30,
        (__int64)&v11,
        (__int64)&v10,
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
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v31);
    }
  }
}
