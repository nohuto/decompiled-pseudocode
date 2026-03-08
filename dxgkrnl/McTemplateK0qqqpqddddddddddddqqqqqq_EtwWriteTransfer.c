/*
 * XREFs of McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer @ 0x1C00299F6
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer(
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
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        int a23,
        char a24,
        char a25,
        char a26)
{
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+40h] [rbp-C0h] BYREF
  int *v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  char *v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  char *v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  char *v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  char *v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  char *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  char *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  char *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  char *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  char *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  char *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  char *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  char *v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  char *v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]
  char *v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]
  char *v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+148h] [rbp+48h]
  char *v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  char *v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+168h] [rbp+68h]
  char *v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  int *v67; // [rsp+180h] [rbp+80h]
  __int64 v68; // [rsp+188h] [rbp+88h]
  char *v69; // [rsp+190h] [rbp+90h]
  __int64 v70; // [rsp+198h] [rbp+98h]
  char *v71; // [rsp+1A0h] [rbp+A0h]
  __int64 v72; // [rsp+1A8h] [rbp+A8h]
  char *v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h]
  int v75; // [rsp+1F8h] [rbp+F8h] BYREF

  v75 = a4;
  v30 = 4LL;
  v29 = &v75;
  v32 = 4LL;
  v27 = 0;
  v31 = &a5;
  v33 = &a6;
  v35 = &a7;
  v34 = 4LL;
  v37 = &a8;
  v36 = 8LL;
  v39 = &a9;
  v41 = &a10;
  v43 = &a11;
  v45 = &a12;
  v47 = &a13;
  v49 = &a14;
  v51 = &a15;
  v53 = &a16;
  v55 = &a17;
  v57 = &a18;
  v59 = &a19;
  v61 = &a20;
  v63 = &a21;
  v65 = &a22;
  v67 = &v27;
  v69 = &a24;
  v71 = &a25;
  v73 = &a26;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 4LL;
  v64 = 4LL;
  v66 = 4LL;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &FlipMultiPlaneOverlay,
           a3,
           0x18u,
           &v28);
}
