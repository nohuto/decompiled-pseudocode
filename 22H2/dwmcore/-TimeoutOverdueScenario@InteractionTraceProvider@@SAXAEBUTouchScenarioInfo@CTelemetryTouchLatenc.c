/*
 * XREFs of ?TimeoutOverdueScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_K1@Z @ 0x180161058
 * Callers:
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAX_K@Z @ 0x18001A460 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAX_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U4@U2@U?$_tlgWrapperByVal@$01@@U6@U1@U4@U4@U4@U4@U1@U2@U1@U1@U1@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@44464AEBU?$_tlgWrapperByVal@$01@@8366663433363@Z @ 0x18015BEC8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U_ea_18015BEC8.c)
 */

void __fastcall InteractionTraceProvider::TimeoutOverdueScenario(
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // r11
  __int64 v6; // r8
  __int64 v7; // rcx
  wchar_t *v8; // rax
  bool v9; // cf
  wchar_t *v10; // rax
  char v11; // [rsp+F0h] [rbp-80h] BYREF
  char v12; // [rsp+F1h] [rbp-7Fh] BYREF
  char v13; // [rsp+F2h] [rbp-7Eh] BYREF
  char v14; // [rsp+F3h] [rbp-7Dh] BYREF
  char v15; // [rsp+F4h] [rbp-7Ch] BYREF
  char v16; // [rsp+F5h] [rbp-7Bh] BYREF
  __int16 v17; // [rsp+F6h] [rbp-7Ah] BYREF
  _WORD v18[2]; // [rsp+F8h] [rbp-78h] BYREF
  int v19; // [rsp+FCh] [rbp-74h] BYREF
  int v20; // [rsp+100h] [rbp-70h] BYREF
  int v21; // [rsp+104h] [rbp-6Ch] BYREF
  int v22; // [rsp+108h] [rbp-68h] BYREF
  int v23; // [rsp+10Ch] [rbp-64h] BYREF
  int v24; // [rsp+110h] [rbp-60h] BYREF
  unsigned __int64 v25; // [rsp+118h] [rbp-58h] BYREF
  __int64 v26; // [rsp+120h] [rbp-50h] BYREF
  __int64 v27; // [rsp+128h] [rbp-48h] BYREF
  __int64 v28; // [rsp+130h] [rbp-40h] BYREF
  __int64 v29; // [rsp+138h] [rbp-38h] BYREF
  __int64 v30; // [rsp+140h] [rbp-30h] BYREF
  __int64 v31; // [rsp+148h] [rbp-28h] BYREF
  wchar_t *v32; // [rsp+150h] [rbp-20h] BYREF
  wchar_t *v33; // [rsp+158h] [rbp-18h] BYREF
  __int64 v34; // [rsp+160h] [rbp-10h] BYREF
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v35; // [rsp+168h] [rbp-8h] BYREF
  char v36; // [rsp+198h] [rbp+28h] BYREF

  if ( (unsigned int)dword_180344EB8 > 5 && (qword_180344EC8 & 8) != 0 && (qword_180344ED0 & 8) == qword_180344ED0 )
  {
    v26 = a3;
    v5 = a2 - *((_QWORD *)a1 + 20);
    v25 = (a2 - *((_QWORD *)a1 + 48)) / (qword_180347410 / 0x3E8uLL);
    v36 = *(_BYTE *)a1;
    v6 = a3 - *((_QWORD *)a1 + 25);
    v27 = *((_QWORD *)a1 + 25);
    v28 = v6;
    v7 = *((_QWORD *)a1 + 1);
    v19 = v5 / (qword_180347410 / 0x3E8uLL);
    v29 = *((_QWORD *)a1 + 15);
    v11 = *((_BYTE *)a1 + 96);
    v12 = *((_BYTE *)a1 + 92);
    v13 = *((_BYTE *)a1 + 88);
    v14 = *((_BYTE *)a1 + 84);
    v17 = *((_WORD *)a1 + 65);
    v18[0] = *((_WORD *)a1 + 64);
    v20 = *((_DWORD *)a1 + 37);
    v15 = *((_BYTE *)a1 + 144);
    v21 = *((_DWORD *)a1 + 35);
    v22 = *((_DWORD *)a1 + 34);
    v23 = *((_DWORD *)a1 + 33);
    v31 = (__int64)a1 + 100;
    v16 = *((_BYTE *)a1 + 80);
    v8 = (wchar_t *)((char *)a1 + 48);
    v9 = *((_QWORD *)a1 + 9) < 8uLL;
    v30 = v7;
    if ( !v9 )
      v8 = *(wchar_t **)v8;
    v32 = v8;
    v10 = (wchar_t *)((char *)a1 + 16);
    if ( *((_QWORD *)a1 + 5) >= 8uLL )
      v10 = *(wchar_t **)v10;
    v33 = v10;
    v24 = *((_DWORD *)a1 + 38);
    v34 = v7;
    v35 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v7,
      byte_1802E581C,
      v6,
      a4,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v24,
      &v33,
      &v32,
      (__int64)&v16,
      &v31,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v15,
      (__int64)&v20,
      (__int64)v18,
      (__int64)&v17,
      (__int64)&v30,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v29,
      (__int64)&v19,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v36,
      (__int64)&v25);
  }
}
