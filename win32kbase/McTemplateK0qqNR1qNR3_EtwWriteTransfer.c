/*
 * XREFs of McTemplateK0qqNR1qNR3_EtwWriteTransfer @ 0x1C0166530
 * Callers:
 *     EtwTraceTimerDelayStatistics @ 0x1C01640B0 (EtwTraceTimerDelayStatistics.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqNR1qNR3_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-49h] BYREF
  int *v12; // [rsp+40h] [rbp-39h]
  __int64 v13; // [rsp+48h] [rbp-31h]
  int *v14; // [rsp+50h] [rbp-29h]
  __int64 v15; // [rsp+58h] [rbp-21h]
  __int64 v16; // [rsp+60h] [rbp-19h]
  int v17; // [rsp+68h] [rbp-11h]
  int v18; // [rsp+6Ch] [rbp-Dh]
  int *v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+78h] [rbp-1h]
  __int64 v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  int v24; // [rsp+C8h] [rbp+4Fh] BYREF

  v24 = a4;
  v13 = 4LL;
  v18 = 0;
  v12 = &v24;
  v23 = 0;
  v14 = &a5;
  v16 = a7;
  v15 = 4LL;
  v20 = 4LL;
  v17 = a6 * a5;
  v19 = &a8;
  v21 = a10;
  v22 = a9 * a8;
  return McGenEventWrite_EtwWriteTransfer(a1, &TimerDelayStatistics, &W32kControlGuid, 6u, &v11);
}
