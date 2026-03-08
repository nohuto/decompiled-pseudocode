/*
 * XREFs of McTemplateK0dddddddddddd_EtwWriteTransfer @ 0x1C0165350
 * Callers:
 *     EtwTraceTouchTargetingPointerEvent @ 0x1C0164590 (EtwTraceTouchTargetingPointerEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dddddddddddd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-D0h] BYREF
  int *v17; // [rsp+40h] [rbp-C0h]
  __int64 v18; // [rsp+48h] [rbp-B8h]
  char *v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  char *v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  char *v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  char *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  char *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  char *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  char *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  char *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  char *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  char *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+138h] [rbp+38h] BYREF

  v41 = a4;
  v18 = 4LL;
  v17 = &v41;
  v20 = 4LL;
  v19 = &a5;
  v22 = 4LL;
  v21 = &a6;
  v24 = 4LL;
  v23 = &a7;
  v25 = &a8;
  v27 = &a9;
  v29 = &a10;
  v31 = &a11;
  v33 = &a12;
  v35 = &a13;
  v37 = &a14;
  v39 = &a15;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &TouchTargetingPointerEvent, &W32kControlGuid, 0xDu, &v16);
}
