/*
 * XREFs of McTemplateK0ppxt_EtwWriteTransfer @ 0x1C00326E0
 * Callers:
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C0086A70 (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z.c)
 *     ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z @ 0x1C0087800 (-MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0ppxt_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v8; // [rsp+30h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-21h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-11h]
  __int64 v11; // [rsp+58h] [rbp-9h]
  char *v12; // [rsp+60h] [rbp-1h]
  __int64 v13; // [rsp+68h] [rbp+7h]
  char *v14; // [rsp+70h] [rbp+Fh]
  __int64 v15; // [rsp+78h] [rbp+17h]
  char *v16; // [rsp+80h] [rbp+1Fh]
  __int64 v17; // [rsp+88h] [rbp+27h]

  v11 = 8LL;
  v8 = 0LL;
  v10 = &v8;
  v13 = 8LL;
  v12 = &a5;
  v15 = 8LL;
  v14 = &a6;
  v16 = &a7;
  v17 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, 0LL, 5u, &v9);
}
