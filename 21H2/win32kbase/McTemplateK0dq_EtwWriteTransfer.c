/*
 * XREFs of McTemplateK0dq_EtwWriteTransfer @ 0x1C00E58B0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C004DC60 (EtwTraceStartInputDeviceRead.c)
 *     EtwTraceFocusChange @ 0x1C00B6DB0 (EtwTraceFocusChange.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00C0880 (EtwTraceCompleteInputDeviceRead.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C014CB60 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C014CB90 (EtwTraceDwmManipulationFrameStart.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0047300 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite_EtwWriteTransfer(4LL, a2, &W32kControlGuid, 3u, &v6);
}
