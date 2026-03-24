/*
 * XREFs of ?SteadyStateFrameRenderGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_KI@Z @ 0x180160B58
 * Callers:
 *     ?RecordRenderGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800CE36C (-RecordRenderGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@8773@Z @ 0x18015ADFC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_18015ADFC.c)
 */

void __fastcall InteractionTraceProvider::SteadyStateFrameRenderGlitch(
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wchar_t *v4; // rax
  bool v5; // cf
  wchar_t *v6; // rax
  char v7; // [rsp+C0h] [rbp-80h] BYREF
  char v8; // [rsp+C1h] [rbp-7Fh] BYREF
  char v9; // [rsp+C2h] [rbp-7Eh] BYREF
  char v10; // [rsp+C3h] [rbp-7Dh] BYREF
  char v11; // [rsp+C4h] [rbp-7Ch] BYREF
  char v12; // [rsp+C5h] [rbp-7Bh] BYREF
  __int16 v13; // [rsp+C6h] [rbp-7Ah] BYREF
  _WORD v14[2]; // [rsp+C8h] [rbp-78h] BYREF
  int v15; // [rsp+CCh] [rbp-74h] BYREF
  int v16; // [rsp+D0h] [rbp-70h] BYREF
  int v17; // [rsp+D4h] [rbp-6Ch] BYREF
  int v18; // [rsp+D8h] [rbp-68h] BYREF
  int v19; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-48h] BYREF
  wchar_t *v24; // [rsp+100h] [rbp-40h] BYREF
  wchar_t *v25; // [rsp+108h] [rbp-38h] BYREF
  char v26; // [rsp+138h] [rbp-8h] BYREF

  if ( (unsigned int)dword_180344EB8 > 4 && (qword_180344EC8 & 2) != 0 && (qword_180344ED0 & 2) == qword_180344ED0 )
  {
    v21 = *((_QWORD *)a1 + 1);
    v13 = *((_WORD *)a1 + 65);
    v14[0] = *((_WORD *)a1 + 64);
    v26 = *((_BYTE *)a1 + 192);
    v22 = *((_QWORD *)a1 + 15);
    v7 = *((_BYTE *)a1 + 96);
    v8 = *((_BYTE *)a1 + 92);
    v9 = *((_BYTE *)a1 + 88);
    v10 = *((_BYTE *)a1 + 84);
    v23 = (__int64)a1 + 100;
    v11 = *((_BYTE *)a1 + 80);
    v4 = (wchar_t *)((char *)a1 + 48);
    v5 = *((_QWORD *)a1 + 9) < 8uLL;
    v15 = a3;
    v20 = a2;
    if ( !v5 )
      v4 = *(wchar_t **)v4;
    v24 = v4;
    v6 = (wchar_t *)((char *)a1 + 16);
    if ( *((_QWORD *)a1 + 5) >= 8uLL )
      v6 = *(wchar_t **)v6;
    v25 = v6;
    v16 = *((_DWORD *)a1 + 37);
    v12 = *((_BYTE *)a1 + 144);
    v17 = *((_DWORD *)a1 + 35);
    v18 = *((_DWORD *)a1 + 34);
    v19 = *((_DWORD *)a1 + 33);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      byte_1802E4EA1,
      a3,
      a4,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v12,
      (__int64)&v16,
      &v25,
      &v24,
      (__int64)&v11,
      &v23,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v22,
      (__int64)&v26,
      (__int64)v14,
      (__int64)&v13,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v15);
  }
}
