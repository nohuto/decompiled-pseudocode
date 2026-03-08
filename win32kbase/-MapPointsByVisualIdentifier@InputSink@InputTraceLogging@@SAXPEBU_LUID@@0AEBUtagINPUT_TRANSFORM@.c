/*
 * XREFs of ?MapPointsByVisualIdentifier@InputSink@InputTraceLogging@@SAXPEBU_LUID@@0AEBUtagINPUT_TRANSFORM@@1UVisualPoint@@2@Z @ 0x1C01586E4
 * Callers:
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C0158A04 (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@44444444444444444444444444444444444@Z @ 0x1C0157E10 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

void __fastcall InputTraceLogging::InputSink::MapPointsByVisualIdentifier(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r8
  int *v7; // r9
  __int64 v8; // r10
  int *v9; // r11
  int v10; // [rsp+150h] [rbp-80h] BYREF
  int v11; // [rsp+154h] [rbp-7Ch] BYREF
  int v12; // [rsp+158h] [rbp-78h] BYREF
  int v13; // [rsp+15Ch] [rbp-74h] BYREF
  int v14; // [rsp+160h] [rbp-70h] BYREF
  int v15; // [rsp+164h] [rbp-6Ch] BYREF
  int v16; // [rsp+168h] [rbp-68h] BYREF
  int v17; // [rsp+16Ch] [rbp-64h] BYREF
  int v18; // [rsp+170h] [rbp-60h] BYREF
  int v19; // [rsp+174h] [rbp-5Ch] BYREF
  int v20; // [rsp+178h] [rbp-58h] BYREF
  int v21; // [rsp+17Ch] [rbp-54h] BYREF
  int v22; // [rsp+180h] [rbp-50h] BYREF
  int v23; // [rsp+184h] [rbp-4Ch] BYREF
  int v24; // [rsp+188h] [rbp-48h] BYREF
  int v25; // [rsp+18Ch] [rbp-44h] BYREF
  int v26; // [rsp+190h] [rbp-40h] BYREF
  int v27; // [rsp+194h] [rbp-3Ch] BYREF
  int v28; // [rsp+198h] [rbp-38h] BYREF
  int v29; // [rsp+19Ch] [rbp-34h] BYREF
  int v30; // [rsp+1A0h] [rbp-30h] BYREF
  int v31; // [rsp+1A4h] [rbp-2Ch] BYREF
  int v32; // [rsp+1A8h] [rbp-28h] BYREF
  int v33; // [rsp+1ACh] [rbp-24h] BYREF
  int v34; // [rsp+1B0h] [rbp-20h] BYREF
  int v35; // [rsp+1B4h] [rbp-1Ch] BYREF
  int v36; // [rsp+1B8h] [rbp-18h] BYREF
  int v37; // [rsp+1BCh] [rbp-14h] BYREF
  int v38; // [rsp+1C0h] [rbp-10h] BYREF
  int v39; // [rsp+1C4h] [rbp-Ch] BYREF
  int v40; // [rsp+1C8h] [rbp-8h] BYREF
  int v41; // [rsp+1CCh] [rbp-4h] BYREF
  int v42; // [rsp+1D0h] [rbp+0h] BYREF
  int v43; // [rsp+1D4h] [rbp+4h] BYREF
  __int64 v44; // [rsp+1D8h] [rbp+8h] BYREF
  __int64 v45; // [rsp+1E0h] [rbp+10h] BYREF
  int v46; // [rsp+200h] [rbp+30h] BYREF
  int v47; // [rsp+208h] [rbp+38h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 4LL) )
  {
    v46 = v7[15];
    v47 = v7[14];
    v10 = v7[13];
    v11 = v7[12];
    v12 = v7[11];
    v13 = v7[10];
    v14 = v7[9];
    v15 = v7[8];
    v16 = v7[7];
    v17 = v7[6];
    v18 = v7[5];
    v19 = v7[4];
    v20 = v7[3];
    v21 = v7[2];
    v22 = v7[1];
    v23 = *v7;
    v24 = v9[15];
    v25 = v9[14];
    v26 = v9[13];
    v27 = v9[12];
    v28 = v9[11];
    v29 = v9[10];
    v30 = v9[9];
    v31 = v9[8];
    v32 = v9[7];
    v33 = v9[6];
    v34 = v9[5];
    v35 = v9[4];
    v36 = v9[3];
    v37 = v9[2];
    v38 = v9[1];
    v39 = *v9;
    v40 = HIDWORD(a6);
    v41 = a6;
    v42 = HIDWORD(a5);
    v43 = a5;
    v44 = v6;
    v45 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0293D55,
      v6,
      (__int64)v7,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
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
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v47,
      (__int64)&v46);
  }
}
