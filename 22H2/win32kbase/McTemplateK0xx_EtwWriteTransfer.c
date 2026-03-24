/*
 * XREFs of McTemplateK0xx_EtwWriteTransfer @ 0x1C014D1B4
 * Callers:
 *     EtwDwmSpriteLogicalSurfBindEvent @ 0x1C00A7320 (EtwDwmSpriteLogicalSurfBindEvent.c)
 *     EtwDwmSpriteLogicalSurfUnBindEvent @ 0x1C00A8AD0 (EtwDwmSpriteLogicalSurfUnBindEvent.c)
 *     EtwDwmSpriteCreateEvent @ 0x1C00A9AF0 (EtwDwmSpriteCreateEvent.c)
 *     EtwLogicalSurfPhysSurfBindEvent @ 0x1C00AA4C0 (EtwLogicalSurfPhysSurfBindEvent.c)
 *     EtwDwmSpriteDestroyEvent @ 0x1C00AA590 (EtwDwmSpriteDestroyEvent.c)
 *     EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1C00AB070 (EtwLogicalSurfEnableDirtyNotificationEvent.c)
 *     EtwLogicalSurfPhysSurfUnbindEvent @ 0x1C00AB110 (EtwLogicalSurfPhysSurfUnbindEvent.c)
 *     EtwBindSwapChain @ 0x1C00C0FA0 (EtwBindSwapChain.c)
 *     EtwBindLogicalSurfaceRHEvent @ 0x1C014C630 (EtwBindLogicalSurfaceRHEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00564F0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0xx_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
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
  v9 = 8;
  return McGenEventWrite_EtwWriteTransfer(8LL, a2, &W32kControlGuid, 3u, &v4);
}
