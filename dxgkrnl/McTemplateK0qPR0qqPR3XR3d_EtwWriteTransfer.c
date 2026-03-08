/*
 * XREFs of McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer @ 0x1C0051B58
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C03166DC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-69h] BYREF
  int *v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  __int64 v14; // [rsp+50h] [rbp-49h]
  int v15; // [rsp+58h] [rbp-41h]
  int v16; // [rsp+5Ch] [rbp-3Dh]
  char *v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  int *v19; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+78h] [rbp-21h]
  __int64 v21; // [rsp+80h] [rbp-19h]
  int v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+8Ch] [rbp-Dh]
  __int64 v24; // [rsp+90h] [rbp-9h]
  int v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+9Ch] [rbp+3h]
  char *v27; // [rsp+A0h] [rbp+7h]
  __int64 v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+E8h] [rbp+4Fh] BYREF

  v29 = a4;
  v13 = 4LL;
  v16 = 0;
  v12 = &v29;
  v14 = a5;
  v15 = 8 * a4;
  v23 = 0;
  v17 = &a6;
  v19 = &a7;
  v21 = a8;
  v26 = 0;
  v18 = 4LL;
  v20 = 4LL;
  v28 = 4LL;
  v24 = a9;
  v27 = &a10;
  v22 = 8 * a7;
  v25 = 8 * a7;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &EventSignalSynchronizationObjectFromGpu,
           a3,
           8u,
           &v11);
}
