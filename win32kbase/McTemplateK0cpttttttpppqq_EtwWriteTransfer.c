/*
 * XREFs of McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x1C0164F7C
 * Callers:
 *     EtwTraceQueueMessage @ 0x1C00A3AD0 (EtwTraceQueueMessage.c)
 *     EtwTraceBeginDelegateInputCallback @ 0x1C0161900 (EtwTraceBeginDelegateInputCallback.c)
 *     EtwTraceEndDelegateInputCallback @ 0x1C0162180 (EtwTraceEndDelegateInputCallback.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0cpttttttpppqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16)
{
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-C0h] BYREF
  char *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  char *v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  int *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  int *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  char *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  char *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  char *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  char *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  char *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  char *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  char v46; // [rsp+158h] [rbp+58h] BYREF

  v46 = a4;
  v21 = 1LL;
  v18 = 0;
  v20 = &v46;
  v17 = 0;
  v22 = &a5;
  v23 = 8LL;
  v24 = &v17;
  v26 = &v18;
  v28 = &a8;
  v30 = &a9;
  v32 = &a10;
  v34 = &a11;
  v36 = &a12;
  v38 = &a13;
  v40 = &a14;
  v42 = &a15;
  v44 = &a16;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 8LL;
  v39 = 8LL;
  v41 = 8LL;
  v43 = 4LL;
  v45 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 0xEu, &v19);
}
