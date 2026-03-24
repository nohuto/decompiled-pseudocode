/*
 * XREFs of ?UpdateLastTelemetryInfo@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801614C4
 * Callers:
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180161374 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@U5@U5@U5@U5@U5@U1@U1@U6@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@87777777338343@Z @ 0x18015B2AC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_18015B2AC.c)
 */

void __fastcall InteractionTraceProvider::UpdateLastTelemetryInfo(
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a1,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  wchar_t *v4; // rax
  wchar_t *v5; // rax
  char v6; // [rsp+110h] [rbp-80h] BYREF
  char v7; // [rsp+111h] [rbp-7Fh] BYREF
  char v8; // [rsp+112h] [rbp-7Eh] BYREF
  char v9; // [rsp+113h] [rbp-7Dh] BYREF
  char v10; // [rsp+114h] [rbp-7Ch] BYREF
  char v11; // [rsp+115h] [rbp-7Bh] BYREF
  __int16 v12; // [rsp+116h] [rbp-7Ah] BYREF
  __int16 v13; // [rsp+118h] [rbp-78h] BYREF
  __int16 v14; // [rsp+11Ah] [rbp-76h] BYREF
  int v15; // [rsp+11Ch] [rbp-74h] BYREF
  int v16; // [rsp+120h] [rbp-70h] BYREF
  int v17; // [rsp+124h] [rbp-6Ch] BYREF
  int v18; // [rsp+128h] [rbp-68h] BYREF
  int v19; // [rsp+12Ch] [rbp-64h] BYREF
  int v20; // [rsp+130h] [rbp-60h] BYREF
  int v21; // [rsp+134h] [rbp-5Ch] BYREF
  int v22; // [rsp+138h] [rbp-58h] BYREF
  __int64 v23; // [rsp+140h] [rbp-50h] BYREF
  __int64 v24; // [rsp+148h] [rbp-48h] BYREF
  __int64 v25; // [rsp+150h] [rbp-40h] BYREF
  __int64 v26; // [rsp+158h] [rbp-38h] BYREF
  __int64 v27; // [rsp+160h] [rbp-30h] BYREF
  __int64 v28; // [rsp+168h] [rbp-28h] BYREF
  __int64 v29; // [rsp+170h] [rbp-20h] BYREF
  __int64 v30; // [rsp+178h] [rbp-18h] BYREF
  __int64 v31; // [rsp+180h] [rbp-10h] BYREF
  wchar_t *v32; // [rsp+188h] [rbp-8h] BYREF
  wchar_t *v33; // [rsp+190h] [rbp+0h] BYREF
  char v34; // [rsp+1C0h] [rbp+30h] BYREF
  char v35; // [rsp+1C8h] [rbp+38h] BYREF

  if ( (unsigned int)dword_180344EB8 > 5 && (qword_180344EC8 & 2) != 0 && (qword_180344ED0 & 2) == qword_180344ED0 )
  {
    v15 = *((_DWORD *)a2 + 20);
    v34 = *((_BYTE *)a2 + 72);
    v16 = *((_DWORD *)a2 + 14);
    v12 = *((_WORD *)a2 + 30);
    v17 = *((_DWORD *)a2 + 17);
    v18 = *((_DWORD *)a2 + 16);
    v23 = *((_QWORD *)a2 + 5);
    v24 = *((_QWORD *)a2 + 4);
    v25 = *((_QWORD *)a2 + 3);
    v26 = *((_QWORD *)a2 + 2);
    v27 = *((_QWORD *)a2 + 1);
    v28 = *(_QWORD *)a2;
    v29 = *((_QWORD *)a1 + 1);
    v13 = *((_WORD *)a1 + 65);
    v14 = *((_WORD *)a1 + 64);
    v35 = *((_BYTE *)a1 + 192);
    v30 = *((_QWORD *)a1 + 15);
    v6 = *((_BYTE *)a1 + 96);
    v7 = *((_BYTE *)a1 + 92);
    v8 = *((_BYTE *)a1 + 88);
    v9 = *((_BYTE *)a1 + 84);
    v31 = (__int64)a1 + 100;
    v10 = *((_BYTE *)a1 + 80);
    v4 = (wchar_t *)((char *)a1 + 48);
    if ( *((_QWORD *)a1 + 9) >= 8uLL )
      v4 = *(wchar_t **)v4;
    v32 = v4;
    v5 = (wchar_t *)((char *)a1 + 16);
    if ( *((_QWORD *)a1 + 5) >= 8uLL )
      v5 = *(wchar_t **)v5;
    v33 = v5;
    v19 = *((_DWORD *)a1 + 37);
    v11 = *((_BYTE *)a1 + 144);
    v20 = *((_DWORD *)a1 + 35);
    v21 = *((_DWORD *)a1 + 34);
    v22 = *((_DWORD *)a1 + 33);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      byte_1802E44FF,
      a3,
      a4,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v11,
      (__int64)&v19,
      &v33,
      &v32,
      (__int64)&v10,
      &v31,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v30,
      (__int64)&v35,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v12,
      (__int64)&v16,
      (__int64)&v34,
      (__int64)&v15);
  }
}
