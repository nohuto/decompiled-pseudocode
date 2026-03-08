/*
 * XREFs of McTemplateK0cpttttttpppqqq_EtwWriteTransfer @ 0x1C01650D4
 * Callers:
 *     EtwTraceBeginDelegatedInputWorker @ 0x1C00EDBE0 (EtwTraceBeginDelegatedInputWorker.c)
 *     EtwTraceEndDelegatedInputWorker @ 0x1C00EDCE0 (EtwTraceEndDelegatedInputWorker.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0cpttttttpppqqq_EtwWriteTransfer(
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
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char a16,
        char a17)
{
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp-A0h] BYREF
  char *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  char *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
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
  __int64 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  char *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  char *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  char v52; // [rsp+188h] [rbp+88h] BYREF

  v52 = a4;
  v25 = 1LL;
  v20 = 0;
  v24 = &v52;
  v22 = 0LL;
  v26 = &a5;
  v28 = &v18;
  v30 = &v19;
  v32 = &a8;
  v34 = &a9;
  v36 = &a10;
  v38 = &a11;
  v40 = &a12;
  v42 = &v21;
  v44 = &v22;
  v46 = &v20;
  v48 = &a16;
  v50 = &a17;
  v21 = 0LL;
  v19 = 0;
  v18 = 0;
  v27 = 8LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 4LL;
  v41 = 8LL;
  v43 = 8LL;
  v45 = 8LL;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 0xFu, &v23);
}
