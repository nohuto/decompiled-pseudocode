/*
 * XREFs of ?MonitorInfoUsedForShowRequest_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEAURect@Foundation@Windows@@I01I01I_N2@Z @ 0x1800D2864
 * Callers:
 *     ??$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800D2494 (--$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444344444344444AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x180001B18 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@U1@U2@U.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1803BEE90 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest_(
        TouchKeyboardExperienceTelemetryLogger *this,
        __int64 a2,
        struct Windows::Foundation::Rect *a3,
        int a4,
        unsigned __int64 a5,
        struct Windows::Foundation::Rect *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct Windows::Foundation::Rect *a9,
        unsigned int a10,
        bool a11,
        bool a12)
{
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18[4]; // [rsp+C8h] [rbp-80h] BYREF
  unsigned int v19; // [rsp+CCh] [rbp-7Ch] BYREF
  int v20; // [rsp+D0h] [rbp-78h] BYREF
  int v21; // [rsp+D4h] [rbp-74h] BYREF
  int v22; // [rsp+D8h] [rbp-70h] BYREF
  int v23; // [rsp+DCh] [rbp-6Ch] BYREF
  unsigned int v24; // [rsp+E0h] [rbp-68h] BYREF
  int v25; // [rsp+E4h] [rbp-64h] BYREF
  int v26; // [rsp+E8h] [rbp-60h] BYREF
  int v27; // [rsp+ECh] [rbp-5Ch] BYREF
  int v28; // [rsp+F0h] [rbp-58h] BYREF
  int v29; // [rsp+F4h] [rbp-54h] BYREF
  int v30; // [rsp+F8h] [rbp-50h] BYREF
  int v31; // [rsp+FCh] [rbp-4Ch] BYREF
  int v32; // [rsp+100h] [rbp-48h] BYREF
  int v33; // [rsp+104h] [rbp-44h] BYREF
  unsigned __int64 v34; // [rsp+108h] [rbp-40h] BYREF
  unsigned __int64 v35; // [rsp+110h] [rbp-38h] BYREF
  __int64 v36; // [rsp+118h] [rbp-30h] BYREF
  TouchKeyboardExperienceTelemetryLogger *v37; // [rsp+138h] [rbp-10h] BYREF

  v37 = this;
  v15 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v15 > 5u )
  {
    LOBYTE(v37) = a12;
    v22 = *((_DWORD *)a9 + 1);
    v23 = *(_DWORD *)a9;
    v34 = a8;
    v24 = a7;
    v18[0] = a11;
    v19 = a10;
    v20 = *((_DWORD *)a9 + 3);
    v21 = *((_DWORD *)a9 + 2);
    v29 = a4;
    v36 = a2;
    v25 = *((_DWORD *)a6 + 3);
    v26 = *((_DWORD *)a6 + 2);
    v27 = *((_DWORD *)a6 + 1);
    v28 = *(_DWORD *)a6;
    v35 = a5;
    v30 = *((_DWORD *)a3 + 3);
    v31 = *((_DWORD *)a3 + 2);
    v32 = *((_DWORD *)a3 + 1);
    v33 = *(_DWORD *)a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (int)v15,
      (int)&unk_180595FA8,
      v16,
      v17,
      (__int64)&v36,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v35,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v34,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)v18,
      (__int64)&v37);
  }
}
