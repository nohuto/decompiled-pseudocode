/*
 * XREFs of ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00721E4
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C006E540 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C006F2A4 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@D@@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4344444444444444444AEBU?$_tlgWrapSz@D@@55444444444444344444@Z @ 0x1C01B2AD0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01B34AC (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?ScalingToString@InputTraceLogging@@CAPEBDW4DISPLAYCONFIG_SCALING@@@Z @ 0x1C01B34F4 (-ScalingToString@InputTraceLogging@@CAPEBDW4DISPLAYCONFIG_SCALING@@@Z.c)
 */

void __fastcall InputTraceLogging::InputConfig::DisplayPath(const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // r8
  int v10; // [rsp+180h] [rbp-80h] BYREF
  int v11; // [rsp+184h] [rbp-7Ch] BYREF
  int v12; // [rsp+188h] [rbp-78h] BYREF
  int v13; // [rsp+18Ch] [rbp-74h] BYREF
  int v14; // [rsp+190h] [rbp-70h] BYREF
  int v15; // [rsp+194h] [rbp-6Ch] BYREF
  int v16; // [rsp+198h] [rbp-68h] BYREF
  int v17; // [rsp+19Ch] [rbp-64h] BYREF
  int v18; // [rsp+1A0h] [rbp-60h] BYREF
  int v19; // [rsp+1A4h] [rbp-5Ch] BYREF
  int v20; // [rsp+1A8h] [rbp-58h] BYREF
  int v21; // [rsp+1ACh] [rbp-54h] BYREF
  int v22; // [rsp+1B0h] [rbp-50h] BYREF
  int v23; // [rsp+1B4h] [rbp-4Ch] BYREF
  int v24; // [rsp+1B8h] [rbp-48h] BYREF
  int v25; // [rsp+1BCh] [rbp-44h] BYREF
  int v26; // [rsp+1C0h] [rbp-40h] BYREF
  int v27; // [rsp+1C4h] [rbp-3Ch] BYREF
  int v28; // [rsp+1C8h] [rbp-38h] BYREF
  int v29; // [rsp+1CCh] [rbp-34h] BYREF
  int v30; // [rsp+1D0h] [rbp-30h] BYREF
  int v31; // [rsp+1D4h] [rbp-2Ch] BYREF
  int v32; // [rsp+1D8h] [rbp-28h] BYREF
  int v33; // [rsp+1DCh] [rbp-24h] BYREF
  int v34; // [rsp+1E0h] [rbp-20h] BYREF
  int v35; // [rsp+1E4h] [rbp-1Ch] BYREF
  int v36; // [rsp+1E8h] [rbp-18h] BYREF
  int v37; // [rsp+1ECh] [rbp-14h] BYREF
  int v38; // [rsp+1F0h] [rbp-10h] BYREF
  int v39; // [rsp+1F4h] [rbp-Ch] BYREF
  int v40; // [rsp+1F8h] [rbp-8h] BYREF
  int v41; // [rsp+1FCh] [rbp-4h] BYREF
  int v42; // [rsp+200h] [rbp+0h] BYREF
  __int64 v43; // [rsp+208h] [rbp+8h] BYREF
  __int64 v44; // [rsp+210h] [rbp+10h] BYREF
  __int64 v45; // [rsp+218h] [rbp+18h] BYREF
  __int64 v46; // [rsp+220h] [rbp+20h] BYREF
  __int64 v47; // [rsp+228h] [rbp+28h] BYREF
  __int64 v48; // [rsp+230h] [rbp+30h] BYREF
  __int64 v49; // [rsp+238h] [rbp+38h] BYREF
  __int64 v50; // [rsp+258h] [rbp+58h] BYREF
  __int64 v51; // [rsp+260h] [rbp+60h] BYREF
  __int64 v52; // [rsp+268h] [rbp+68h] BYREF

  if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 2LL) )
  {
    v2 = *(unsigned int *)(v1 + 112);
    LODWORD(v50) = *(_DWORD *)(v1 + 192);
    LODWORD(v51) = *(_DWORD *)(v1 + 188);
    LODWORD(v52) = *(_DWORD *)(v1 + 184);
    v10 = *(_DWORD *)(v1 + 180);
    v11 = *(_DWORD *)(v1 + 176);
    v43 = *(_QWORD *)(v1 + 168);
    v12 = *(_DWORD *)(v1 + 164);
    v13 = *(_DWORD *)(v1 + 160);
    v14 = *(_DWORD *)(v1 + 152);
    v15 = *(_DWORD *)(v1 + 148);
    v16 = *(_DWORD *)(v1 + 144);
    v17 = *(_DWORD *)(v1 + 140);
    v18 = *(_DWORD *)(v1 + 136);
    v19 = *(_DWORD *)(v1 + 132);
    v20 = *(_DWORD *)(v1 + 128);
    v21 = *(_DWORD *)(v1 + 124);
    v22 = *(_DWORD *)(v1 + 120);
    v23 = *(_DWORD *)(v1 + 116);
    v3 = InputTraceLogging::ScalingToString(v2);
    v5 = *(unsigned int *)(v4 + 108);
    v44 = v3;
    v6 = InputTraceLogging::ScalingToString(v5);
    v8 = *(_DWORD *)(v7 + 104);
    v45 = v6;
    v46 = (__int64)InputTraceLogging::OrientationToString(v8);
    v24 = *(unsigned __int8 *)(v9 + 101);
    v25 = *(unsigned __int8 *)(v9 + 100);
    v26 = *(_DWORD *)(v9 + 96);
    v27 = *(_DWORD *)(v9 + 92);
    v28 = *(_DWORD *)(v9 + 88);
    v29 = *(_DWORD *)(v9 + 84);
    v30 = *(_DWORD *)(v9 + 80);
    v31 = *(_DWORD *)(v9 + 76);
    v32 = *(_DWORD *)(v9 + 72);
    v33 = *(_DWORD *)(v9 + 68);
    v34 = *(_DWORD *)(v9 + 64);
    v35 = *(_DWORD *)(v9 + 60);
    v36 = *(_DWORD *)(v9 + 56);
    v37 = *(_DWORD *)(v9 + 52);
    v38 = *(_DWORD *)(v9 + 48);
    v39 = *(_DWORD *)(v9 + 44);
    v40 = *(_DWORD *)(v9 + 40);
    v47 = *(_QWORD *)(v9 + 32);
    v41 = *(_DWORD *)(v9 + 28);
    v42 = *(_DWORD *)(v9 + 24);
    v48 = *(_QWORD *)(v9 + 8);
    v49 = *(_QWORD *)v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C024AA90,
      (int)&dword_1C021F3D8,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v47,
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
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
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
      (__int64)&v43,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50);
  }
}
