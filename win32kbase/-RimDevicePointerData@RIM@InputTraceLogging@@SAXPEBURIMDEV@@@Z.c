/*
 * XREFs of ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01A04B0
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00BC24C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00EF4BE (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U4@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5555555555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@63555555555555555555@Z @ 0x1C019F4C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444344443@Z @ 0x1C019F870 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevicePointerData(const struct RIMDEV *a1)
{
  unsigned int v1; // r8d
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+130h] [rbp-80h] BYREF
  __int64 v13; // [rsp+138h] [rbp-78h] BYREF
  int v14; // [rsp+140h] [rbp-70h] BYREF
  int v15; // [rsp+144h] [rbp-6Ch] BYREF
  int v16; // [rsp+148h] [rbp-68h] BYREF
  int v17; // [rsp+14Ch] [rbp-64h] BYREF
  int v18; // [rsp+150h] [rbp-60h] BYREF
  int v19; // [rsp+154h] [rbp-5Ch] BYREF
  int v20; // [rsp+158h] [rbp-58h] BYREF
  int v21; // [rsp+15Ch] [rbp-54h] BYREF
  int v22; // [rsp+160h] [rbp-50h] BYREF
  int v23; // [rsp+164h] [rbp-4Ch] BYREF
  int v24; // [rsp+168h] [rbp-48h] BYREF
  int v25; // [rsp+16Ch] [rbp-44h] BYREF
  int v26; // [rsp+170h] [rbp-40h] BYREF
  int v27; // [rsp+174h] [rbp-3Ch] BYREF
  int v28; // [rsp+178h] [rbp-38h] BYREF
  int v29; // [rsp+17Ch] [rbp-34h] BYREF
  int v30; // [rsp+180h] [rbp-30h] BYREF
  int v31; // [rsp+184h] [rbp-2Ch] BYREF
  int v32; // [rsp+188h] [rbp-28h] BYREF
  int v33; // [rsp+18Ch] [rbp-24h] BYREF
  int v34; // [rsp+190h] [rbp-20h] BYREF
  __int64 v35; // [rsp+198h] [rbp-18h] BYREF
  __int64 v36; // [rsp+1A0h] [rbp-10h] BYREF
  __int64 v37; // [rsp+1A8h] [rbp-8h] BYREF
  __int64 v38; // [rsp+1B0h] [rbp+0h] BYREF
  __int64 v39; // [rsp+1B8h] [rbp+8h] BYREF
  __int64 v40; // [rsp+1E0h] [rbp+30h] BYREF
  __int64 v41; // [rsp+1E8h] [rbp+38h] BYREF
  __int64 v42; // [rsp+1F0h] [rbp+40h] BYREF
  __int64 v43; // [rsp+1F8h] [rbp+48h] BYREF

  v1 = dword_1C02CA7E0;
  v3 = *((_QWORD *)a1 + 59);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v4 = *(_DWORD *)(v3 + 360);
    LODWORD(v40) = -__CFSHR__(v4, 17);
    LODWORD(v41) = *(_DWORD *)(v3 + 1044);
    LODWORD(v42) = -__CFSHR__(v4, 16);
    LODWORD(v43) = -__CFSHR__(v4, 15);
    v22 = -__CFSHR__(v4, 14);
    v23 = -__CFSHR__(v4, 13);
    v24 = -__CFSHR__(v4, 12);
    v25 = -__CFSHR__(v4, 11);
    v26 = -__CFSHR__(v4, 10);
    v27 = -__CFSHR__(v4, 9);
    v28 = -__CFSHR__(v4, 8);
    v29 = -__CFSHR__(v4, 7);
    v30 = -__CFSHR__(v4, 6);
    v31 = -__CFSHR__(v4, 5);
    v32 = -__CFSHR__(v4, 4);
    v33 = -__CFSHR__(v4, 3);
    v34 = -__CFSHR__(v4, 2);
    v38 = *(_QWORD *)(v3 + 784);
    v39 = v3 + 896;
    v35 = v3 + 368;
    HIDWORD(v12) = *(_DWORD *)(v3 + 152);
    LODWORD(v13) = *(_DWORD *)(v3 + 148);
    v5 = *(_DWORD *)(v3 + 144);
    LODWORD(v12) = -(v4 & 1);
    v6 = *((_QWORD *)a1 + 58);
    HIDWORD(v13) = v5;
    v14 = *(_DWORD *)(v3 + 140);
    v15 = *(_DWORD *)(v3 + 136);
    v16 = *(_DWORD *)(v3 + 132);
    v17 = *(_DWORD *)(v3 + 128);
    v18 = *(_DWORD *)(v3 + 124);
    v19 = *(_DWORD *)(v3 + 768);
    v20 = *(unsigned __int16 *)(v6 + 18);
    v7 = *(unsigned __int16 *)(v6 + 16);
    LODWORD(v6) = *(_DWORD *)(v3 + 24);
    v21 = v7;
    v36 = (__int64)InputTraceLogging::PointerDeviceTypeToString(v6);
    v37 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0296384,
      v8,
      v9,
      (__int64)&v37,
      (void **)&v36,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13 + 4,
      (__int64)&v13,
      (__int64)&v12 + 4,
      (unsigned __int16 **)&v35,
      (unsigned __int16 **)&v39,
      (__int64)&v38,
      (__int64)&v12,
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
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40);
    v1 = dword_1C02CA7E0;
  }
  if ( *(_DWORD *)(v3 + 156) && v1 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v37 = *(_QWORD *)(v3 + 240);
    LODWORD(v40) = *(_DWORD *)(v3 + 264);
    LODWORD(v41) = *(_DWORD *)(v3 + 260);
    LODWORD(v42) = *(_DWORD *)(v3 + 256);
    LODWORD(v43) = *(_DWORD *)(v3 + 252);
    v36 = *(_QWORD *)(v3 + 228);
    v21 = *(_DWORD *)(v3 + 220);
    v20 = *(_DWORD *)(v3 + 216);
    v19 = *(_DWORD *)(v3 + 212);
    v18 = *(_DWORD *)(v3 + 208);
    v17 = *(_DWORD *)(v3 + 188);
    v16 = *(_DWORD *)(v3 + 184);
    v15 = *(_DWORD *)(v3 + 180);
    v14 = *(_DWORD *)(v3 + 176);
    v13 = *(_QWORD *)(v3 + 168);
    v12 = *(_QWORD *)(v3 + 160);
    v35 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0296563,
      v10,
      v11,
      (__int64)&v35,
      (__int64)&v12,
      (__int64)&v12 + 4,
      (__int64)&v13,
      (__int64)&v13 + 4,
      (__int64)&v14,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)&v17,
      (__int64)&v18,
      (__int64)&v19,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v36,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v37);
  }
}
