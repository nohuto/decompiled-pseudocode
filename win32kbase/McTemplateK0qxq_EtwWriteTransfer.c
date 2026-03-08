/*
 * XREFs of McTemplateK0qxq_EtwWriteTransfer @ 0x1C016554C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C00D2654 (EtwTraceStopPowerEventCalloutWorker.c)
 *     EtwTraceFlipManagerCanceledPresentShown @ 0x1C0162690 (EtwTraceFlipManagerCanceledPresentShown.c)
 *     EtwTraceFlipManagerPresentIFlipSubmitted @ 0x1C0162E90 (EtwTraceFlipManagerPresentIFlipSubmitted.c)
 *     EtwTraceFlipManagerPresentSignaled @ 0x1C01633F0 (EtwTraceFlipManagerPresentSignaled.c)
 *     EtwTraceFlipManagerUpdateExpectedConsumerPresentId @ 0x1C01638B0 (EtwTraceFlipManagerUpdateExpectedConsumerPresentId.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qxq_EtwWriteTransfer(
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
  v11 = 8LL;
  v9 = 4LL;
  v8 = &v14;
  v13 = 4LL;
  v10 = &a5;
  v12 = &a6;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 4u, &v7);
}
