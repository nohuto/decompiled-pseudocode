/*
 * XREFs of ?FirstFrameInputGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@II_K1111111@Z @ 0x18015D650
 * Callers:
 *     ?DetectInputGlitch@CTelemetryTouchLatencyAnalysis@@AEBAXAEAUTouchScenarioInfo@1@_K11111111III1@Z @ 0x1800230DC (-DetectInputGlitch@CTelemetryTouchLatencyAnalysis@@AEBAXAEAUTouchScenarioInfo@1@_K11111111III1@Z.c)
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x180023BBC (-IsVailContainer@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U1@U1@U5@U1@U1@U1@U1@U1@U1@U1@U5@U5@U5@U5@U5@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@87337333333377777777@Z @ 0x18015995C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_18015995C.c)
 */

void __fastcall InteractionTraceProvider::FirstFrameInputGlitch(
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned __int64 a10,
        unsigned __int64 a11)
{
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  char v18; // [rsp+148h] [rbp-80h] BYREF
  char v19; // [rsp+149h] [rbp-7Fh] BYREF
  char v20; // [rsp+14Ah] [rbp-7Eh] BYREF
  char v21; // [rsp+14Bh] [rbp-7Dh] BYREF
  char v22; // [rsp+14Ch] [rbp-7Ch] BYREF
  char v23; // [rsp+14Dh] [rbp-7Bh] BYREF
  _BYTE v24[2]; // [rsp+14Eh] [rbp-7Ah] BYREF
  __int16 v25; // [rsp+150h] [rbp-78h] BYREF
  __int16 v26; // [rsp+152h] [rbp-76h] BYREF
  int v27; // [rsp+154h] [rbp-74h] BYREF
  int v28; // [rsp+158h] [rbp-70h] BYREF
  int v29; // [rsp+15Ch] [rbp-6Ch] BYREF
  int v30; // [rsp+160h] [rbp-68h] BYREF
  int v31; // [rsp+164h] [rbp-64h] BYREF
  int v32; // [rsp+168h] [rbp-60h] BYREF
  int v33; // [rsp+16Ch] [rbp-5Ch] BYREF
  int v34; // [rsp+170h] [rbp-58h] BYREF
  int v35; // [rsp+174h] [rbp-54h] BYREF
  int v36; // [rsp+178h] [rbp-50h] BYREF
  int v37; // [rsp+17Ch] [rbp-4Ch] BYREF
  int v38; // [rsp+180h] [rbp-48h] BYREF
  int v39; // [rsp+184h] [rbp-44h] BYREF
  unsigned __int64 v40; // [rsp+188h] [rbp-40h] BYREF
  unsigned __int64 v41; // [rsp+190h] [rbp-38h] BYREF
  unsigned __int64 v42; // [rsp+198h] [rbp-30h] BYREF
  unsigned __int64 v43; // [rsp+1A0h] [rbp-28h] BYREF
  unsigned __int64 v44; // [rsp+1A8h] [rbp-20h] BYREF
  unsigned __int64 v45; // [rsp+1B0h] [rbp-18h] BYREF
  __int64 v46; // [rsp+1B8h] [rbp-10h] BYREF
  unsigned __int64 v47; // [rsp+1C0h] [rbp-8h] BYREF
  __int64 v48; // [rsp+1C8h] [rbp+0h] BYREF
  __int64 v49; // [rsp+1D0h] [rbp+8h] BYREF
  __int64 v50; // [rsp+1D8h] [rbp+10h] BYREF
  __int64 v51; // [rsp+1E0h] [rbp+18h] BYREF
  wchar_t *v52; // [rsp+1E8h] [rbp+20h] BYREF
  wchar_t *v53; // [rsp+1F0h] [rbp+28h] BYREF

  if ( (unsigned int)dword_180344EB8 > 4 && (qword_180344EC8 & 2) != 0 && (qword_180344ED0 & 2) == qword_180344ED0 )
  {
    v40 = a10;
    v46 = a4;
    v41 = a9;
    v42 = a8;
    v43 = a7;
    v44 = a6;
    v45 = a5;
    v47 = 1000 * (a11 / g_qpcFrequency.QuadPart) + 1000 * (a11 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    if ( IsVailContainer() )
      v13 = (a5 - a9) / (qword_180347410 / 0xF4240uLL);
    else
      LODWORD(v13) = 0;
    v27 = v13;
    if ( IsVailContainer() )
      v14 = (a9 - a8) / (qword_180347410 / 0xF4240uLL);
    else
      LODWORD(v14) = 0;
    v28 = v14;
    if ( IsVailContainer() )
      v15 = (a8 - a4) / (qword_180347410 / 0xF4240uLL);
    else
      LODWORD(v15) = 0;
    v29 = v15;
    v30 = (a7 - a6) / (qword_180347410 / 0x3E8uLL);
    v31 = (a6 - a5) / (qword_180347410 / 0xF4240uLL);
    v32 = (a5 - a4) / (qword_180347410 / 0xF4240uLL);
    v33 = (a7 - a4) / (qword_180347410 / 0x3E8uLL);
    v48 = *((_QWORD *)a1 + 25);
    v34 = a3;
    v35 = a2;
    v49 = *((_QWORD *)a1 + 1);
    v25 = *((_WORD *)a1 + 65);
    v26 = *((_WORD *)a1 + 64);
    v18 = *((_BYTE *)a1 + 192);
    v50 = *((_QWORD *)a1 + 15);
    v19 = *((_BYTE *)a1 + 96);
    v20 = *((_BYTE *)a1 + 92);
    v21 = *((_BYTE *)a1 + 88);
    v22 = *((_BYTE *)a1 + 84);
    v51 = (__int64)a1 + 100;
    v23 = *((_BYTE *)a1 + 80);
    v16 = (wchar_t *)((char *)a1 + 48);
    if ( *((_QWORD *)a1 + 9) >= 8uLL )
      v16 = *(wchar_t **)v16;
    v52 = v16;
    v17 = (wchar_t *)((char *)a1 + 16);
    if ( *((_QWORD *)a1 + 5) >= 8uLL )
      v17 = *(wchar_t **)v17;
    v53 = v17;
    v36 = *((_DWORD *)a1 + 37);
    v24[0] = *((_BYTE *)a1 + 144);
    v37 = *((_DWORD *)a1 + 35);
    v38 = *((_DWORD *)a1 + 34);
    v39 = *((_DWORD *)a1 + 33);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      qword_180347410 / 0xF4240uLL,
      byte_1802E5395,
      qword_180347410 / 0x3E8uLL,
      qword_180347410,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)v24,
      (__int64)&v36,
      &v53,
      &v52,
      (__int64)&v23,
      &v51,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v50,
      (__int64)&v18,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v49,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v48,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40);
  }
}
