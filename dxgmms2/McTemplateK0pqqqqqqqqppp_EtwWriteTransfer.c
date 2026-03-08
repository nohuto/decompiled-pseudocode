/*
 * XREFs of McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003DE9C
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C0013B3C (VidSchiCreateContextInternal.c)
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0042114 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchTerminateHwContext @ 0x1C0045190 (VidSchTerminateHwContext.c)
 *     VidSchTerminateContext @ 0x1C00A8F80 (VidSchTerminateContext.c)
 *     VidSchReportAdapter @ 0x1C0107F20 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C0108500 (VidSchReportDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        _DWORD a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        ...)
{
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  char *v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  char *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  char *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  char *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  char *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  char *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  char *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  char *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  va_list v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  va_list v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 v39; // [rsp+148h] [rbp+48h] BYREF
  __int64 v40; // [rsp+190h] [rbp+90h] BYREF
  va_list va; // [rsp+190h] [rbp+90h]
  __int64 v42; // [rsp+198h] [rbp+98h]
  va_list va1; // [rsp+1A0h] [rbp+A0h] BYREF

  va_start(va1, a12);
  va_start(va, a12);
  v40 = va_arg(va1, _QWORD);
  v42 = va_arg(va1, _QWORD);
  v39 = a4;
  v16 = 8LL;
  v15 = &v39;
  v18 = 4LL;
  v13 = 0LL;
  v17 = &a5;
  v20 = 4LL;
  v19 = &a6;
  v21 = &a7;
  v23 = &a8;
  v25 = &a9;
  v27 = &a10;
  v29 = &a11;
  v31 = &a12;
  va_copy(v33, va);
  v35 = &v13;
  va_copy(v37, va1);
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 8LL;
  v36 = 8LL;
  v38 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 0xDu, &v14);
}
