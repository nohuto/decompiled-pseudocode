/*
 * XREFs of ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x1C00F32A2
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00E0308 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CPTPProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00E0830 (-ProcessInputOld@CPTPProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::PTP::EngineInput(const struct CPointerInputFrame *a1)
{
  __int64 v1; // r8
  int v2; // r9d
  __int64 v3; // r11
  int v4; // [rsp+30h] [rbp-49h] BYREF
  int v5; // [rsp+34h] [rbp-45h] BYREF
  int v6; // [rsp+38h] [rbp-41h] BYREF
  __int64 v7; // [rsp+40h] [rbp-39h] BYREF
  __int64 v8; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  __int64 *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  int *v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  int *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  int *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 128LL) )
  {
    v5 = *(_DWORD *)(v1 + 48);
    v6 = *(_DWORD *)(v1 + 40);
    v7 = *(_QWORD *)(v1 + 72);
    v8 = *(_QWORD *)(v1 + 216);
    v18 = &v4;
    v16 = &v5;
    v14 = &v6;
    v12 = &v7;
    v10 = &v8;
    v4 = v2;
    v19 = v3;
    v17 = v3;
    v15 = v3;
    v13 = 8LL;
    v11 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029BFC6, 0LL, 0LL, 7u, &v9);
  }
}
