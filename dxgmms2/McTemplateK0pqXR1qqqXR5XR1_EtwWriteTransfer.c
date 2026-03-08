/*
 * XREFs of McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x1C003830C
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0009880 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z @ 0x1C0049888 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0049A8C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-81h] BYREF
  va_list v5; // [rsp+40h] [rbp-71h]
  __int64 v6; // [rsp+48h] [rbp-69h]
  va_list v7; // [rsp+50h] [rbp-61h]
  __int64 v8; // [rsp+58h] [rbp-59h]
  __int64 v9; // [rsp+60h] [rbp-51h]
  int v10; // [rsp+68h] [rbp-49h]
  int v11; // [rsp+6Ch] [rbp-45h]
  va_list v12; // [rsp+70h] [rbp-41h]
  __int64 v13; // [rsp+78h] [rbp-39h]
  va_list v14; // [rsp+80h] [rbp-31h]
  __int64 v15; // [rsp+88h] [rbp-29h]
  va_list v16; // [rsp+90h] [rbp-21h]
  __int64 v17; // [rsp+98h] [rbp-19h]
  __int64 v18; // [rsp+A0h] [rbp-11h]
  int v19; // [rsp+A8h] [rbp-9h]
  int v20; // [rsp+ACh] [rbp-5h]
  __int64 v21; // [rsp+B0h] [rbp-1h]
  int v22; // [rsp+B8h] [rbp+7h]
  int v23; // [rsp+BCh] [rbp+Bh]
  __int64 v24; // [rsp+F8h] [rbp+47h] BYREF
  va_list va; // [rsp+F8h] [rbp+47h]
  __int64 v26; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+100h] [rbp+4Fh]
  __int64 v28; // [rsp+108h] [rbp+57h]
  __int64 v29; // [rsp+110h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+110h] [rbp+5Fh]
  __int64 v31; // [rsp+118h] [rbp+67h] BYREF
  va_list va3; // [rsp+118h] [rbp+67h]
  __int64 v33; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+120h] [rbp+6Fh]
  __int64 v35; // [rsp+128h] [rbp+77h]
  __int64 v36; // [rsp+130h] [rbp+7Fh]
  va_list va5; // [rsp+138h] [rbp+87h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  v28 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v29 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v31 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v33 = va_arg(va5, _QWORD);
  v35 = va_arg(va5, _QWORD);
  v36 = va_arg(va5, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v11 = 0;
  va_copy(v7, va1);
  v9 = v28;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v20 = 0;
  v10 = 8 * v26;
  va_copy(v12, va2);
  va_copy(v14, va3);
  va_copy(v16, va4);
  v18 = v35;
  v19 = 8 * v33;
  v21 = v36;
  v22 = 8 * v26;
  v23 = 0;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventHSyncDPCMultiPlane, 0LL, 9u, &v4);
}
