/*
 * XREFs of McTemplateK0p_EtwWriteTransfer @ 0x14055ED00
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140688EF0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryRelease @ 0x140689C8C (PiDqQueryRelease.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0p_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, a3, 2u, &v4);
}
