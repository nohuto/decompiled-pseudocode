/*
 * XREFs of McTemplateK0pqqqq_EtwWriteTransfer @ 0x1C004B414
 * Callers:
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0048450 (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqqqq_EtwWriteTransfer(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, char a5, char a6, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-39h] BYREF
  __int64 *v8; // [rsp+40h] [rbp-29h]
  __int64 v9; // [rsp+48h] [rbp-21h]
  char *v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  char *v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  va_list v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  va_list v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+C8h] [rbp+5Fh] BYREF
  __int64 v19; // [rsp+E0h] [rbp+77h] BYREF
  va_list va; // [rsp+E0h] [rbp+77h]
  va_list va1; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v19 = va_arg(va1, _QWORD);
  v18 = a4;
  v9 = 8LL;
  v8 = &v18;
  v11 = 4LL;
  v10 = &a5;
  v13 = 4LL;
  v12 = &a6;
  v15 = 4LL;
  va_copy(v14, va);
  va_copy(v16, va1);
  v17 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventCancelAndRequeueFlips, a3, 6u, &v7);
}
