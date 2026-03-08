/*
 * XREFs of McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0039B2C
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0009880 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000EAF0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiUpdateVSyncMultiplier@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C001BF48 (-VidSchiUpdateVSyncMultiplier@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_SUBM.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z @ 0x1C0034D54 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  int *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  char *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+C8h] [rbp+5Fh] BYREF

  v20 = a4;
  v11 = 4LL;
  v10 = &v20;
  v13 = 4LL;
  v12 = &a5;
  v15 = 4LL;
  v14 = &a6;
  v16 = &a7;
  v18 = &a8;
  v17 = 4LL;
  v19 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 6u, &v9);
}
