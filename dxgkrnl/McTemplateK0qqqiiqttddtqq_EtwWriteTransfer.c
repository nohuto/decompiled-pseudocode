/*
 * XREFs of McTemplateK0qqqiiqttddtqq_EtwWriteTransfer @ 0x1C005365C
 * Callers:
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0328024 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqiiqttddtqq_EtwWriteTransfer(
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
        char a15,
        char a16)
{
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-D0h] BYREF
  int *v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  char *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  char *v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  char *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  char *v26; // [rsp+80h] [rbp-80h]
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
  int v44; // [rsp+148h] [rbp+48h] BYREF

  v44 = a4;
  v19 = 4LL;
  v18 = &v44;
  v21 = 4LL;
  v20 = &a5;
  v23 = 4LL;
  v22 = &a6;
  v25 = 8LL;
  v24 = &a7;
  v26 = &a8;
  v28 = &a9;
  v30 = &a10;
  v32 = &a11;
  v34 = &a12;
  v36 = &a13;
  v38 = &a14;
  v40 = &a15;
  v42 = &a16;
  v27 = 8LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 4LL;
  v41 = 4LL;
  v43 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &Dxgk_Diag_OutputDupl_Get_Frame_Data,
           a3,
           0xEu,
           &v17);
}
