/*
 * XREFs of ?CaptureContact@VirtualTouchpad@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@UVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C0223E78
 * Callers:
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x1C022463C (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444444444444444@Z @ 0x1C02237E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_1C02237E8.c)
 */

void InputTraceLogging::VirtualTouchpad::CaptureContact()
{
  _DWORD *v0; // r8
  __int64 v1; // r9
  __int64 v2; // r10
  int v3; // [rsp+160h] [rbp-80h] BYREF
  int v4; // [rsp+164h] [rbp-7Ch] BYREF
  int v5; // [rsp+168h] [rbp-78h] BYREF
  int v6; // [rsp+16Ch] [rbp-74h] BYREF
  int v7; // [rsp+170h] [rbp-70h] BYREF
  int v8; // [rsp+174h] [rbp-6Ch] BYREF
  int v9; // [rsp+178h] [rbp-68h] BYREF
  int v10; // [rsp+17Ch] [rbp-64h] BYREF
  int v11; // [rsp+180h] [rbp-60h] BYREF
  int v12; // [rsp+184h] [rbp-5Ch] BYREF
  int v13; // [rsp+188h] [rbp-58h] BYREF
  int v14; // [rsp+18Ch] [rbp-54h] BYREF
  int v15; // [rsp+190h] [rbp-50h] BYREF
  int v16; // [rsp+194h] [rbp-4Ch] BYREF
  int v17; // [rsp+198h] [rbp-48h] BYREF
  int v18; // [rsp+19Ch] [rbp-44h] BYREF
  int v19; // [rsp+1A0h] [rbp-40h] BYREF
  int v20; // [rsp+1A4h] [rbp-3Ch] BYREF
  int v21; // [rsp+1A8h] [rbp-38h] BYREF
  int v22; // [rsp+1ACh] [rbp-34h] BYREF
  int v23; // [rsp+1B0h] [rbp-30h] BYREF
  int v24; // [rsp+1B4h] [rbp-2Ch] BYREF
  int v25; // [rsp+1B8h] [rbp-28h] BYREF
  int v26; // [rsp+1BCh] [rbp-24h] BYREF
  int v27; // [rsp+1C0h] [rbp-20h] BYREF
  int v28; // [rsp+1C4h] [rbp-1Ch] BYREF
  int v29; // [rsp+1C8h] [rbp-18h] BYREF
  int v30; // [rsp+1CCh] [rbp-14h] BYREF
  int v31; // [rsp+1D0h] [rbp-10h] BYREF
  int v32; // [rsp+1D4h] [rbp-Ch] BYREF
  int v33; // [rsp+1D8h] [rbp-8h] BYREF
  int v34; // [rsp+1DCh] [rbp-4h] BYREF
  int v35; // [rsp+1E0h] [rbp+0h] BYREF
  int v36; // [rsp+1E4h] [rbp+4h] BYREF
  int v37; // [rsp+1E8h] [rbp+8h] BYREF
  int v38; // [rsp+1ECh] [rbp+Ch] BYREF
  int v39; // [rsp+1F0h] [rbp+10h] BYREF
  __int64 v40; // [rsp+1F8h] [rbp+18h] BYREF
  int v41; // [rsp+228h] [rbp+48h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v41 = v0[20];
    v3 = v0[19];
    v4 = v0[18];
    v5 = v0[17];
    v6 = v0[16];
    v7 = v0[15];
    v8 = v0[14];
    v9 = v0[13];
    v10 = v0[12];
    v11 = v0[11];
    v12 = v0[10];
    v13 = v0[9];
    v14 = v0[8];
    v15 = v0[7];
    v16 = v0[6];
    v17 = v0[5];
    v18 = v0[37];
    v19 = v0[36];
    v20 = v0[35];
    v21 = v0[34];
    v22 = v0[33];
    v23 = v0[32];
    v24 = v0[31];
    v25 = v0[30];
    v26 = v0[28];
    v27 = v0[27];
    v28 = v0[26];
    v29 = v0[25];
    v30 = v0[24];
    v31 = v0[23];
    v32 = v0[22];
    v33 = v0[21];
    v34 = v0[4];
    v35 = v0[3];
    v36 = v0[2];
    v37 = v0[1];
    v39 = *(_DWORD *)(v2 + 4);
    v40 = *(_QWORD *)(v2 + 80);
    v38 = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029CE00,
      (__int64)v0,
      v1,
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
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v3,
      (__int64)&v41);
  }
}
