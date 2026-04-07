/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x18008DFAC
 * Callers:
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x18008F3A8 (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x18008F4B0 (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x18008F778 (-StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180005758 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _BYTE v10[32]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v11; // [rsp+50h] [rbp-31h]
  int v12; // [rsp+58h] [rbp-29h]
  int v13; // [rsp+5Ch] [rbp-25h]
  __int64 v14; // [rsp+60h] [rbp-21h]
  int v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+6Ch] [rbp-15h]
  __int64 v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+7Ch] [rbp-5h]
  __int64 v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+8Ch] [rbp+Bh]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+9Ch] [rbp+1Bh]

  v25 = 0;
  v22 = 0;
  v19 = 0;
  v16 = 0;
  v13 = 0;
  v23 = a9;
  v20 = a8;
  v17 = a7;
  v14 = a6;
  v11 = a5;
  v24 = 4;
  v21 = 4;
  v18 = 8;
  v15 = 4;
  v12 = 8;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, a3, a4, 7, (__int64)v10);
}
