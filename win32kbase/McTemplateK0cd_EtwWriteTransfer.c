/*
 * XREFs of McTemplateK0cd_EtwWriteTransfer @ 0x1C00EDF1C
 * Callers:
 *     EtwTraceEndAppMessageProcessing @ 0x1C00A5890 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceEndDispatchMessage @ 0x1C00BAA80 (EtwTraceEndDispatchMessage.c)
 *     EtwTraceBeginDispatchMessage @ 0x1C00BAAA0 (EtwTraceBeginDispatchMessage.c)
 *     EtwTraceWakeMIT @ 0x1C00BEA10 (EtwTraceWakeMIT.c)
 *     EtwTraceWakeRIT @ 0x1C00CDEE0 (EtwTraceWakeRIT.c)
 *     EtwTraceEndTranslateMessage @ 0x1C00D08B0 (EtwTraceEndTranslateMessage.c)
 *     EtwTraceBeginTranslateMessage @ 0x1C00D08D0 (EtwTraceBeginTranslateMessage.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0cd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  char *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 1;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v6);
}
