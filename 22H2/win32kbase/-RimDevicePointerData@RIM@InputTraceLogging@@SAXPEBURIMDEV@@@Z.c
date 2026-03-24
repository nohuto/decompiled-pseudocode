/*
 * XREFs of ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0151A44
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C005686C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U4@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5555555555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@63555555555555555555@Z @ 0x1C01509F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444344443@Z @ 0x1C0150DA0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0151364 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevicePointerData(const struct RIMDEV *a1)
{
  unsigned int v1; // r8d
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+130h] [rbp-80h] BYREF
  __int64 v14; // [rsp+138h] [rbp-78h] BYREF
  int v15; // [rsp+140h] [rbp-70h] BYREF
  int v16; // [rsp+144h] [rbp-6Ch] BYREF
  int v17; // [rsp+148h] [rbp-68h] BYREF
  int v18; // [rsp+14Ch] [rbp-64h] BYREF
  int v19; // [rsp+150h] [rbp-60h] BYREF
  int v20; // [rsp+154h] [rbp-5Ch] BYREF
  int v21; // [rsp+158h] [rbp-58h] BYREF
  int v22; // [rsp+15Ch] [rbp-54h] BYREF
  int v23; // [rsp+160h] [rbp-50h] BYREF
  int v24; // [rsp+164h] [rbp-4Ch] BYREF
  int v25; // [rsp+168h] [rbp-48h] BYREF
  int v26; // [rsp+16Ch] [rbp-44h] BYREF
  int v27; // [rsp+170h] [rbp-40h] BYREF
  int v28; // [rsp+174h] [rbp-3Ch] BYREF
  int v29; // [rsp+178h] [rbp-38h] BYREF
  int v30; // [rsp+17Ch] [rbp-34h] BYREF
  int v31; // [rsp+180h] [rbp-30h] BYREF
  int v32; // [rsp+184h] [rbp-2Ch] BYREF
  int v33; // [rsp+188h] [rbp-28h] BYREF
  int v34; // [rsp+18Ch] [rbp-24h] BYREF
  int v35; // [rsp+190h] [rbp-20h] BYREF
  __int64 v36; // [rsp+198h] [rbp-18h] BYREF
  __int64 v37; // [rsp+1A0h] [rbp-10h] BYREF
  __int64 v38; // [rsp+1A8h] [rbp-8h] BYREF
  __int64 v39; // [rsp+1B0h] [rbp+0h] BYREF
  __int64 v40; // [rsp+1B8h] [rbp+8h] BYREF
  __int64 v41; // [rsp+1E0h] [rbp+30h] BYREF
  __int64 v42; // [rsp+1E8h] [rbp+38h] BYREF
  __int64 v43; // [rsp+1F0h] [rbp+40h] BYREF
  __int64 v44; // [rsp+1F8h] [rbp+48h] BYREF

  v1 = dword_1C024AA90;
  v3 = *((_QWORD *)a1 + 60);
  if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
  {
    v4 = *(_DWORD *)(v3 + 312);
    v5 = *((_QWORD *)a1 + 59);
    v6 = *(unsigned __int16 *)(v5 + 18);
    v7 = *(unsigned __int16 *)(v5 + 16);
    LODWORD(v41) = -__CFSHR__(v4, 17);
    LODWORD(v42) = *(_DWORD *)(v3 + 988);
    LODWORD(v43) = -__CFSHR__(v4, 16);
    LODWORD(v44) = -__CFSHR__(v4, 15);
    v23 = -__CFSHR__(v4, 14);
    v24 = -__CFSHR__(v4, 13);
    v25 = -__CFSHR__(v4, 12);
    v26 = -__CFSHR__(v4, 11);
    v27 = -__CFSHR__(v4, 10);
    v28 = -__CFSHR__(v4, 9);
    v29 = -__CFSHR__(v4, 8);
    v30 = -__CFSHR__(v4, 7);
    v31 = -__CFSHR__(v4, 6);
    v32 = -__CFSHR__(v4, 5);
    v33 = -__CFSHR__(v4, 4);
    v34 = -__CFSHR__(v4, 3);
    v35 = -__CFSHR__(v4, 2);
    v39 = *(_QWORD *)(v3 + 736);
    v40 = v3 + 848;
    v36 = v3 + 320;
    HIDWORD(v13) = *(_DWORD *)(v3 + 152);
    LODWORD(v13) = -(v4 & 1);
    v8 = *(_DWORD *)(v3 + 24);
    LODWORD(v14) = *(_DWORD *)(v3 + 148);
    HIDWORD(v14) = *(_DWORD *)(v3 + 144);
    v15 = *(_DWORD *)(v3 + 140);
    v16 = *(_DWORD *)(v3 + 136);
    v17 = *(_DWORD *)(v3 + 132);
    v18 = *(_DWORD *)(v3 + 128);
    v19 = *(_DWORD *)(v3 + 124);
    v20 = *(_DWORD *)(v3 + 720);
    v21 = v6;
    v22 = v7;
    v37 = (__int64)InputTraceLogging::PointerDeviceTypeToString(v8);
    v38 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024AA90,
      byte_1C021A0D5,
      v9,
      v10,
      (__int64)&v38,
      (void **)&v37,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14 + 4,
      (__int64)&v14,
      (__int64)&v13 + 4,
      (unsigned __int16 **)&v36,
      (unsigned __int16 **)&v40,
      (__int64)&v39,
      (__int64)&v13,
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
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41);
    v1 = dword_1C024AA90;
  }
  if ( *(_DWORD *)(v3 + 156) && v1 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
  {
    v38 = *(_QWORD *)(v3 + 240);
    LODWORD(v41) = *(_DWORD *)(v3 + 264);
    LODWORD(v42) = *(_DWORD *)(v3 + 260);
    LODWORD(v43) = *(_DWORD *)(v3 + 256);
    LODWORD(v44) = *(_DWORD *)(v3 + 252);
    v37 = *(_QWORD *)(v3 + 228);
    v22 = *(_DWORD *)(v3 + 220);
    v21 = *(_DWORD *)(v3 + 216);
    v20 = *(_DWORD *)(v3 + 212);
    v19 = *(_DWORD *)(v3 + 208);
    v18 = *(_DWORD *)(v3 + 188);
    v17 = *(_DWORD *)(v3 + 184);
    v16 = *(_DWORD *)(v3 + 180);
    v15 = *(_DWORD *)(v3 + 176);
    v14 = *(_QWORD *)(v3 + 168);
    v13 = *(_QWORD *)(v3 + 160);
    v36 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C024AA90,
      byte_1C021A2B4,
      v11,
      v12,
      (__int64)&v36,
      (__int64)&v13,
      (__int64)&v13 + 4,
      (__int64)&v14,
      (__int64)&v14 + 4,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)&v17,
      (__int64)&v18,
      (__int64)&v19,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v22,
      (__int64)&v37,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v38);
  }
}
