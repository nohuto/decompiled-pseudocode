/*
 * XREFs of McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer @ 0x1C0039E80
 * Callers:
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x1C000A7D0 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-51h] BYREF
  int *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  int *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  __int64 v15; // [rsp+60h] [rbp-21h]
  int v16; // [rsp+68h] [rbp-19h]
  int v17; // [rsp+6Ch] [rbp-15h]
  __int64 v18; // [rsp+70h] [rbp-11h]
  int v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+7Ch] [rbp-5h]
  __int64 v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+8Ch] [rbp+Bh]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  int v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+9Ch] [rbp+1Bh]
  int v27; // [rsp+D8h] [rbp+57h] BYREF

  v27 = a4;
  v12 = 4LL;
  v17 = 0;
  v11 = &v27;
  v13 = &a5;
  v15 = a6;
  v20 = 0;
  v23 = 0;
  v26 = 0;
  v14 = 4LL;
  v18 = a7;
  v21 = a8;
  v24 = a9;
  v16 = 4 * a5;
  v19 = 4 * a5;
  v22 = 4 * a5;
  v25 = 4 * a5;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &MMIOFlipMultiPlaneOverlayDirtyRect, a3, 7u, &v10);
}
