/*
 * XREFs of McTemplateK0qqq_EtwWriteTransfer @ 0x1C00EE3C8
 * Callers:
 *     EtwTraceFocusedProcessChange @ 0x1C00C35C0 (EtwTraceFocusedProcessChange.c)
 *     ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x1C00CFFB8 (-ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00EDCA0 (EtwTraceBeginPointerFrameCommit.c)
 *     EtwTraceGreMovePointerBegin @ 0x1C00EDD50 (EtwTraceGreMovePointerBegin.c)
 *     EtwTraceGreMovePointerEnd @ 0x1C00EDD90 (EtwTraceGreMovePointerEnd.c)
 *     EtwTraceBeginPointerFrameBuildPartial @ 0x1C0161A70 (EtwTraceBeginPointerFrameBuildPartial.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C0161AA0 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceBeginPointerFrameCreation @ 0x1C0161B00 (EtwTraceBeginPointerFrameCreation.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C0161B40 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceCursorSize @ 0x1C0161DB0 (EtwTraceCursorSize.c)
 *     EtwTraceEndPointerFrameBuildPartial @ 0x1C01622F0 (EtwTraceEndPointerFrameBuildPartial.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C0162320 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C0162380 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C01623C0 (EtwTraceEndPointerFrameCreation.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C0162400 (EtwTraceEndPointerFrameMessageGeneration.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v8 = &v14;
  v9 = 4LL;
  v10 = &a5;
  v12 = &a6;
  v11 = 4LL;
  v13 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 4u, &v7);
}
