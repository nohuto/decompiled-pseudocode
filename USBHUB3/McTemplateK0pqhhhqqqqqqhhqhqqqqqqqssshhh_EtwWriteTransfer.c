/*
 * XREFs of McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer @ 0x1C00144B8
 * Callers:
 *     HUBPDO_ReportDeviceFailure @ 0x1C001B588 (HUBPDO_ReportDeviceFailure.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0001680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
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
        char a25,
        const char *a26,
        const char *a27,
        const char *a28,
        char a29,
        char a30,
        char a31)
{
  __int64 v31; // rcx
  __int64 v33; // rdx
  int v34; // edx
  const char *v35; // r8
  const char *v36; // rax
  __int64 v37; // rdx
  int v38; // edx
  const char *v39; // rax
  __int64 v40; // rcx
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v43; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+48h] [rbp-B8h]
  char *v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h]
  char *v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  char *v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  char *v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  char *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  char *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  char *v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  char *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  char *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  char *v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  char *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  char *v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  char *v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  char *v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  char *v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  char *v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  char *v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]
  char *v79; // [rsp+160h] [rbp+60h]
  __int64 v80; // [rsp+168h] [rbp+68h]
  char *v81; // [rsp+170h] [rbp+70h]
  __int64 v82; // [rsp+178h] [rbp+78h]
  char *v83; // [rsp+180h] [rbp+80h]
  __int64 v84; // [rsp+188h] [rbp+88h]
  char *v85; // [rsp+190h] [rbp+90h]
  __int64 v86; // [rsp+198h] [rbp+98h]
  const char *v87; // [rsp+1A0h] [rbp+A0h]
  int v88; // [rsp+1A8h] [rbp+A8h]
  int v89; // [rsp+1ACh] [rbp+ACh]
  const char *v90; // [rsp+1B0h] [rbp+B0h]
  int v91; // [rsp+1B8h] [rbp+B8h]
  int v92; // [rsp+1BCh] [rbp+BCh]
  const char *v93; // [rsp+1C0h] [rbp+C0h]
  int v94; // [rsp+1C8h] [rbp+C8h]
  int v95; // [rsp+1CCh] [rbp+CCh]
  char *v96; // [rsp+1D0h] [rbp+D0h]
  __int64 v97; // [rsp+1D8h] [rbp+D8h]
  char *v98; // [rsp+1E0h] [rbp+E0h]
  __int64 v99; // [rsp+1E8h] [rbp+E8h]
  char *v100; // [rsp+1F0h] [rbp+F0h]
  __int64 v101; // [rsp+1F8h] [rbp+F8h]
  __int64 v102; // [rsp+238h] [rbp+138h] BYREF

  v102 = a4;
  v43 = &v102;
  v44 = 8LL;
  v45 = &a5;
  v31 = -1LL;
  v46 = 4LL;
  v47 = &a6;
  v49 = &a7;
  v51 = &a8;
  v53 = &a9;
  v55 = &a10;
  v57 = &a11;
  v59 = &a12;
  v61 = &a13;
  v63 = &a14;
  v65 = &a15;
  v67 = &a16;
  v69 = &a17;
  v71 = &a18;
  v73 = &a19;
  v75 = &a20;
  v77 = &a21;
  v79 = &a22;
  v81 = &a23;
  v83 = &a24;
  v85 = &a25;
  v48 = 2LL;
  v50 = 2LL;
  v52 = 2LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 4LL;
  v64 = 4LL;
  v66 = 2LL;
  v68 = 2LL;
  v70 = 4LL;
  v72 = 2LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 4LL;
  if ( a26 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a26[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v88 = v34;
  v35 = "NULL";
  v89 = 0;
  v36 = "NULL";
  if ( a26 )
    v36 = a26;
  v87 = v36;
  if ( a27 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a27[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 5;
  }
  v91 = v38;
  v39 = "NULL";
  v92 = 0;
  if ( a27 )
    v39 = a27;
  v90 = v39;
  if ( a28 )
  {
    do
      ++v31;
    while ( a28[v31] );
    v40 = (unsigned int)(v31 + 1);
  }
  else
  {
    v40 = 5LL;
  }
  v94 = v40;
  v95 = 0;
  if ( a28 )
    v35 = a28;
  v97 = 2LL;
  v93 = v35;
  v96 = &a29;
  v99 = 2LL;
  v98 = &a30;
  v101 = 2LL;
  v100 = &a31;
  return McGenEventWrite_EtwWriteTransfer(v40, &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILURE, a3, 0x1Du, &v42);
}
