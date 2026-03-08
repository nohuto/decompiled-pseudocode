/*
 * XREFs of McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C004C4B8
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1C02FEFE0 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0ujqzr2jxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-69h] BYREF
  char *v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  __int64 v14; // [rsp+50h] [rbp-49h]
  __int64 v15; // [rsp+58h] [rbp-41h]
  int *v16; // [rsp+60h] [rbp-39h]
  __int64 v17; // [rsp+68h] [rbp-31h]
  __int64 v18; // [rsp+70h] [rbp-29h]
  int v19; // [rsp+78h] [rbp-21h]
  int v20; // [rsp+7Ch] [rbp-1Dh]
  __int64 v21; // [rsp+80h] [rbp-19h]
  __int64 v22; // [rsp+88h] [rbp-11h]
  char *v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  char *v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+A8h] [rbp+Fh]
  char v27; // [rsp+E8h] [rbp+4Fh] BYREF

  v27 = a4;
  v13 = 1LL;
  v20 = 0;
  v12 = &v27;
  v14 = a5;
  v15 = 16LL;
  v16 = &a6;
  v18 = a7;
  v17 = 4LL;
  v19 = 2 * a6;
  v21 = a8;
  v23 = &a9;
  v25 = &a10;
  v22 = 16LL;
  v24 = 8LL;
  v26 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(
           &SLEEPSTUDY_ETW_PROVIDER_Context,
           &SLEEPSTUDY_EVT_SCENARIO_BLOCKER,
           a3,
           8u,
           &v11);
}
