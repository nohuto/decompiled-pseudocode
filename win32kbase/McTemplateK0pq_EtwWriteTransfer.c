/*
 * XREFs of McTemplateK0pq_EtwWriteTransfer @ 0x1C00EE6B4
 * Callers:
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C000B290 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     NtDCompositionBeginFrame @ 0x1C0098F20 (NtDCompositionBeginFrame.c)
 *     EtwUpdateEvent @ 0x1C00AFEA0 (EtwUpdateEvent.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C00B3D50 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     EtwTraceCompletePowerRequest @ 0x1C00B561C (EtwTraceCompletePowerRequest.c)
 *     EtwTraceKillTimer @ 0x1C00BAB40 (EtwTraceKillTimer.c)
 *     EtwLogicalSurfCreateEvent @ 0x1C00C7BB0 (EtwLogicalSurfCreateEvent.c)
 *     EtwLogicalSurfDestroyEvent @ 0x1C00C9F70 (EtwLogicalSurfDestroyEvent.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00D229C (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C0159CA0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     EtwTraceDCompBeginFrameEvent @ 0x1C0161DF0 (EtwTraceDCompBeginFrameEvent.c)
 *     EtwTraceFlipManagerBindingInfo @ 0x1C01625A0 (EtwTraceFlipManagerBindingInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v4);
}
