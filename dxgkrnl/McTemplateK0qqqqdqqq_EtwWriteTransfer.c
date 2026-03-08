/*
 * XREFs of McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x1C0053108
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C0198420 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0320670 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0320FA0 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqdqqq_EtwWriteTransfer(
        REGHANDLE *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
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
  char *v21; // [rsp+80h] [rbp-31h]
  __int64 v22; // [rsp+88h] [rbp-29h]
  char *v23; // [rsp+90h] [rbp-21h]
  __int64 v24; // [rsp+98h] [rbp-19h]
  char *v25; // [rsp+A0h] [rbp-11h]
  __int64 v26; // [rsp+A8h] [rbp-9h]
  char *v27; // [rsp+B0h] [rbp-1h]
  __int64 v28; // [rsp+B8h] [rbp+7h]
  int v29; // [rsp+F8h] [rbp+47h] BYREF

  v29 = a4;
  v14 = 4LL;
  v13 = &v29;
  v16 = 4LL;
  v15 = &a5;
  v18 = 4LL;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  v25 = &a10;
  v27 = &a11;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &PresentMultiPlaneOverlay, a3, 9u, &v12);
}
