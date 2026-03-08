/*
 * XREFs of McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x1C003FCA8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02B4808 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
        __int64 a1,
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
        char a23,
        char a24,
        int a25,
        char a26,
        int a27,
        int a28,
        char a29,
        char a30,
        char a31,
        char a32)
{
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  char *v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  char *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  char *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  char *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  char *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  char *v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  char *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  char *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  char *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  char *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  char *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  char *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  char *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  char *v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  char *v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  char *v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  char *v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  char *v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  char *v75; // [rsp+190h] [rbp+90h]
  __int64 v76; // [rsp+198h] [rbp+98h]
  int *v77; // [rsp+1A0h] [rbp+A0h]
  __int64 v78; // [rsp+1A8h] [rbp+A8h]
  char *v79; // [rsp+1B0h] [rbp+B0h]
  __int64 v80; // [rsp+1B8h] [rbp+B8h]
  int *v81; // [rsp+1C0h] [rbp+C0h]
  __int64 v82; // [rsp+1C8h] [rbp+C8h]
  __int64 v83; // [rsp+1D0h] [rbp+D0h]
  int v84; // [rsp+1D8h] [rbp+D8h]
  int v85; // [rsp+1DCh] [rbp+DCh]
  char *v86; // [rsp+1E0h] [rbp+E0h]
  __int64 v87; // [rsp+1E8h] [rbp+E8h]
  char *v88; // [rsp+1F0h] [rbp+F0h]
  __int64 v89; // [rsp+1F8h] [rbp+F8h]
  char *v90; // [rsp+200h] [rbp+100h]
  __int64 v91; // [rsp+208h] [rbp+108h]
  char *v92; // [rsp+210h] [rbp+110h]
  __int64 v93; // [rsp+218h] [rbp+118h]
  __int64 v94; // [rsp+258h] [rbp+158h] BYREF

  v94 = a4;
  v36 = 8LL;
  v35 = &v94;
  v33 = 0;
  v37 = &a5;
  v39 = &a6;
  v41 = &a7;
  v43 = &a8;
  v45 = &a9;
  v47 = &a10;
  v49 = &a11;
  v51 = &a12;
  v53 = &a13;
  v55 = &a14;
  v57 = &a15;
  v59 = &a16;
  v61 = &a17;
  v63 = &a18;
  v65 = &a19;
  v67 = &a20;
  v69 = &a21;
  v71 = &a22;
  v73 = &a23;
  v75 = &a24;
  v77 = &v33;
  v79 = &a26;
  v81 = &a27;
  v84 = 4 * a27;
  v86 = &a29;
  v38 = 8LL;
  v40 = 4LL;
  v42 = 8LL;
  v44 = 4LL;
  v46 = 8LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 4LL;
  v64 = 4LL;
  v66 = 1LL;
  v68 = 1LL;
  v70 = 1LL;
  v72 = 1LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v83 = 0LL;
  v85 = 0;
  v87 = 4LL;
  v88 = &a30;
  v89 = 4LL;
  v90 = &a31;
  v91 = 8LL;
  v92 = &a32;
  v93 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 0x1Eu, &v34);
}
