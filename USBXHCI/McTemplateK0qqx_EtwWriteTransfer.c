/*
 * XREFs of McTemplateK0qqx_EtwWriteTransfer @ 0x1C00523F0
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0022498 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0qqx_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, int a4, char a5, char a6)
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
  v13 = 8LL;
  v9 = 4LL;
  v8 = &v14;
  v11 = 4LL;
  v10 = &a5;
  v12 = &a6;
  return McGenEventWrite_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_COMPLETED_TRUSTLET_REQUEST_V1, a3, 4u, &v7);
}
