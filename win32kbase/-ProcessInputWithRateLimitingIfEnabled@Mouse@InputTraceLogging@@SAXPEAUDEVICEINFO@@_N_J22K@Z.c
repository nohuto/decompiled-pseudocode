/*
 * XREFs of ?ProcessInputWithRateLimitingIfEnabled@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@_N_J22K@Z @ 0x1C00F3EB0
 * Callers:
 *     ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F3D88 (-ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessInputWithRateLimitingIfEnabled(
        struct DEVICEINFO *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // r11
  unsigned int v10; // [rsp+30h] [rbp-79h] BYREF
  int v11; // [rsp+34h] [rbp-75h] BYREF
  __int64 v12; // [rsp+38h] [rbp-71h] BYREF
  __int64 v13; // [rsp+40h] [rbp-69h] BYREF
  __int64 v14; // [rsp+48h] [rbp-61h] BYREF
  __int64 v15; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-49h] BYREF
  __int64 *v17; // [rsp+80h] [rbp-29h]
  int v18; // [rsp+88h] [rbp-21h]
  int v19; // [rsp+8Ch] [rbp-1Dh]
  int *v20; // [rsp+90h] [rbp-19h]
  int v21; // [rsp+98h] [rbp-11h]
  int v22; // [rsp+9Ch] [rbp-Dh]
  __int64 *v23; // [rsp+A0h] [rbp-9h]
  int v24; // [rsp+A8h] [rbp-1h]
  int v25; // [rsp+ACh] [rbp+3h]
  __int64 *v26; // [rsp+B0h] [rbp+7h]
  int v27; // [rsp+B8h] [rbp+Fh]
  int v28; // [rsp+BCh] [rbp+13h]
  __int64 *v29; // [rsp+C0h] [rbp+17h]
  int v30; // [rsp+C8h] [rbp+1Fh]
  int v31; // [rsp+CCh] [rbp+23h]
  unsigned int *v32; // [rsp+D0h] [rbp+27h]
  int v33; // [rsp+D8h] [rbp+2Fh]
  int v34; // [rsp+DCh] [rbp+33h]

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v34 = 0;
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v19 = 0;
    v10 = a6;
    v12 = a5;
    v32 = &v10;
    v29 = &v12;
    v26 = &v13;
    v23 = &v14;
    v20 = &v11;
    v17 = &v15;
    v13 = v7;
    v14 = v6;
    v30 = 8;
    v27 = 8;
    v24 = 8;
    v18 = 8;
    v11 = v8;
    v15 = v9;
    v33 = 4;
    v21 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029C88B, 0LL, 0LL, 8u, &v16);
  }
}
