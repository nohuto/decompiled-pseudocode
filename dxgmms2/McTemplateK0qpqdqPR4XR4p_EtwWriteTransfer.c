/*
 * XREFs of McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer @ 0x1C003990C
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C001C93E (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        int a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-81h] BYREF
  int *v13; // [rsp+40h] [rbp-71h]
  __int64 v14; // [rsp+48h] [rbp-69h]
  char *v15; // [rsp+50h] [rbp-61h]
  __int64 v16; // [rsp+58h] [rbp-59h]
  char *v17; // [rsp+60h] [rbp-51h]
  __int64 v18; // [rsp+68h] [rbp-49h]
  char *v19; // [rsp+70h] [rbp-41h]
  __int64 v20; // [rsp+78h] [rbp-39h]
  int *v21; // [rsp+80h] [rbp-31h]
  __int64 v22; // [rsp+88h] [rbp-29h]
  __int64 v23; // [rsp+90h] [rbp-21h]
  int v24; // [rsp+98h] [rbp-19h]
  int v25; // [rsp+9Ch] [rbp-15h]
  __int64 v26; // [rsp+A0h] [rbp-11h]
  int v27; // [rsp+A8h] [rbp-9h]
  int v28; // [rsp+ACh] [rbp-5h]
  char *v29; // [rsp+B0h] [rbp-1h]
  __int64 v30; // [rsp+B8h] [rbp+7h]
  int v31; // [rsp+F8h] [rbp+47h] BYREF

  v31 = a4;
  v14 = 4LL;
  v16 = 8LL;
  v13 = &v31;
  v18 = 4LL;
  v15 = &a5;
  v20 = 4LL;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v23 = a9;
  v22 = 4LL;
  v25 = 0;
  v28 = 0;
  v30 = 8LL;
  v26 = a10;
  v29 = &a11;
  v24 = 8 * a8;
  v27 = 8 * a8;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventIddSignal, 0LL, 9u, &v12);
}
