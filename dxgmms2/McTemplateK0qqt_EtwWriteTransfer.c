/*
 * XREFs of McTemplateK0qqt_EtwWriteTransfer @ 0x1C0039BD4
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0qqt_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
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
  v8 = &v14;
  v9 = 4LL;
  v10 = &a5;
  v11 = 4LL;
  v12 = &a6;
  v13 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           &DxgkControlGuid_Context,
           &FlipManagerIFlipPresentConvertToNonIFlip,
           a3,
           4u,
           &v7);
}
