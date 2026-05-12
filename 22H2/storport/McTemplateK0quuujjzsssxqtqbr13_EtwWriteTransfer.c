/*
 * XREFs of McTemplateK0quuujjzsssxqtqbr13_EtwWriteTransfer @ 0x1C00022A4
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C00019CC (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DBF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0quuujjzsssxqtqbr13_EtwWriteTransfer(
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
        const char *a13,
        __int64 a14,
        char a15,
        char a16,
        __int64 a17,
        __int64 a18)
{
  const wchar_t *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r8d
  const char *v22; // rdx
  __int64 v23; // rcx
  int v24; // ecx
  const char *v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  const char *v28; // rcx
  int v29; // eax
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-C0h] BYREF
  int *v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  char *v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  char *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  char *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  const wchar_t *v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  const char *v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  const char *v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  const char *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  __int64 *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  char *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  char *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  int *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  __int64 v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+178h] [rbp+78h] BYREF

  v68 = a4;
  v18 = a10;
  v32 = *(_QWORD *)&g_SystemUptime_s;
  v34 = &v68;
  v36 = &a5;
  v31 = 512;
  v38 = &a6;
  v40 = &a7;
  v42 = a8;
  v44 = a9;
  v19 = -1LL;
  v35 = 4LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 16LL;
  v45 = 16LL;
  if ( a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a10[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v47 = v21;
  v48 = 0;
  if ( !a10 )
    v18 = L"NULL";
  v22 = a11;
  v46 = v18;
  if ( a11 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a11[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v50 = v24;
  v51 = 0;
  if ( !a11 )
    v22 = "NULL";
  v49 = v22;
  v25 = a12;
  if ( a12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a12[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v53 = v27;
  v28 = a13;
  if ( !a12 )
    v25 = "NULL";
  v54 = 0;
  v52 = v25;
  if ( a13 )
  {
    do
      ++v19;
    while ( a13[v19] );
    v29 = v19 + 1;
  }
  else
  {
    v29 = 5;
  }
  v56 = v29;
  v57 = 0;
  v58 = &v32;
  v59 = 8LL;
  v60 = &a15;
  if ( !a13 )
    v28 = "NULL";
  v55 = v28;
  v62 = &a16;
  v61 = 4LL;
  v64 = &v31;
  v66 = a18;
  v63 = 4LL;
  v65 = 4LL;
  v67 = 512LL;
  return McGenEventWrite_EtwWriteTransfer(v28, &EventUnitSmartAttributes, 0LL, 16LL, v33);
}
