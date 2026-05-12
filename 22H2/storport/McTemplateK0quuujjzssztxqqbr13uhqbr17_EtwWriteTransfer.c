/*
 * XREFs of McTemplateK0quuujjzssztxqqbr13uhqbr17_EtwWriteTransfer @ 0x1C00512A8
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00576C0 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DBF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssztxqqbr13uhqbr17_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const wchar_t *a13,
        char a14,
        int a15,
        char a16,
        int a17,
        __int64 a18,
        char a19,
        char a20,
        int a21,
        __int64 a22)
{
  __int64 v22; // rcx
  int v23; // r9d
  const wchar_t *v24; // rax
  __int64 v25; // rdx
  int v26; // r8d
  const char *v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  const char *v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  const wchar_t *v33; // rax
  bool v34; // zf
  __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+48h] [rbp-C0h] BYREF
  int *v38; // [rsp+58h] [rbp-B0h]
  __int64 v39; // [rsp+60h] [rbp-A8h]
  char *v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h]
  char *v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h]
  char *v44; // [rsp+88h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  const wchar_t *v50; // [rsp+B8h] [rbp-50h]
  int v51; // [rsp+C0h] [rbp-48h]
  int v52; // [rsp+C4h] [rbp-44h]
  const char *v53; // [rsp+C8h] [rbp-40h]
  int v54; // [rsp+D0h] [rbp-38h]
  int v55; // [rsp+D4h] [rbp-34h]
  const char *v56; // [rsp+D8h] [rbp-30h]
  int v57; // [rsp+E0h] [rbp-28h]
  int v58; // [rsp+E4h] [rbp-24h]
  const wchar_t *v59; // [rsp+E8h] [rbp-20h]
  int v60; // [rsp+F0h] [rbp-18h]
  int v61; // [rsp+F4h] [rbp-14h]
  char *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  __int64 *v64; // [rsp+108h] [rbp+0h]
  __int64 v65; // [rsp+110h] [rbp+8h]
  char *v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  int *v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  __int64 v70; // [rsp+138h] [rbp+30h]
  int v71; // [rsp+140h] [rbp+38h]
  int v72; // [rsp+144h] [rbp+3Ch]
  char *v73; // [rsp+148h] [rbp+40h]
  __int64 v74; // [rsp+150h] [rbp+48h]
  char *v75; // [rsp+158h] [rbp+50h]
  __int64 v76; // [rsp+160h] [rbp+58h]
  int *v77; // [rsp+168h] [rbp+60h]
  __int64 v78; // [rsp+170h] [rbp+68h]
  __int64 v79; // [rsp+178h] [rbp+70h]
  int v80; // [rsp+180h] [rbp+78h]
  int v81; // [rsp+184h] [rbp+7Ch]
  int v82; // [rsp+1C0h] [rbp+B8h] BYREF

  v82 = a4;
  v36 = *(_QWORD *)&g_SystemUptime_s;
  v22 = -1LL;
  v39 = 4LL;
  v38 = &v82;
  v40 = &a5;
  v41 = 1LL;
  v42 = &a6;
  v23 = 10;
  v43 = 1LL;
  v44 = &a7;
  v46 = a8;
  v48 = a9;
  v24 = a10;
  v45 = 1LL;
  v47 = 16LL;
  v49 = 16LL;
  if ( a10 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a10[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v27 = a11;
  v51 = v26;
  v52 = 0;
  if ( !a10 )
    v24 = L"NULL";
  v50 = v24;
  if ( a11 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a11[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v54 = v29;
  v55 = 0;
  if ( !a11 )
    v27 = "NULL";
  v53 = v27;
  v30 = a12;
  if ( a12 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a12[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v57 = v32;
  v33 = a13;
  if ( !a12 )
    v30 = "NULL";
  v58 = 0;
  v56 = v30;
  v34 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v22;
    while ( a13[v22] );
    v23 = 2 * v22 + 2;
    v34 = a13 == 0LL;
  }
  if ( v34 )
    v33 = L"NULL";
  v60 = v23;
  v59 = v33;
  v61 = 0;
  v62 = &a14;
  v63 = 4LL;
  v64 = &v36;
  v65 = 8LL;
  v66 = &a16;
  v68 = &a17;
  v70 = a18;
  v71 = a17;
  v73 = &a19;
  v75 = &a20;
  v77 = &a21;
  v79 = a22;
  v80 = a21;
  v67 = 4LL;
  v69 = 4LL;
  v72 = 0;
  v74 = 1LL;
  v76 = 2LL;
  v78 = 4LL;
  v81 = 0;
  return McGenEventWrite_EtwWriteTransfer(v22, &EventUnitNvmeHealthLog, 0LL, 0x14u, &v37);
}
