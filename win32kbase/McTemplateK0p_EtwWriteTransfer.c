/*
 * XREFs of McTemplateK0p_EtwWriteTransfer @ 0x1C00EE4B6
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C009BAA0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     EtwTraceWakeInputIdle @ 0x1C00A6D70 (EtwTraceWakeInputIdle.c)
 *     EtwTraceSleepInputIdle @ 0x1C00B97A0 (EtwTraceSleepInputIdle.c)
 *     EtwTraceDCompGetBatchEvent @ 0x1C0161E20 (EtwTraceDCompGetBatchEvent.c)
 *     EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1C0161E50 (EtwTraceDITSpeedHitTestFailedRevalidation.c)
 *     EtwTraceFlipManagerBindingStart @ 0x1C01625D0 (EtwTraceFlipManagerBindingStart.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
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
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 2u, &v4);
}
