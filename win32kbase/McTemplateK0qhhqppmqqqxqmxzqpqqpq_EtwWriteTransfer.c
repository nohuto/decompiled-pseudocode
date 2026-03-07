__int64 __fastcall McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        __int64 a16,
        char a17,
        const wchar_t *a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24)
{
  const wchar_t *v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  _BYTE v28[16]; // [rsp+30h] [rbp-D0h] BYREF
  int *v29; // [rsp+40h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B8h]
  char *v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  char *v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  char *v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  char *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  char *v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  char *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  char *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  char *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  char *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  char *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  __int64 v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  char *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  const wchar_t *v57; // [rsp+120h] [rbp+20h]
  int v58; // [rsp+128h] [rbp+28h]
  int v59; // [rsp+12Ch] [rbp+2Ch]
  char *v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  char *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  char *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  char *v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  char *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  char *v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  int v72; // [rsp+1C8h] [rbp+C8h] BYREF

  v72 = a4;
  v24 = a18;
  v29 = &v72;
  v30 = 4LL;
  v31 = &a5;
  v33 = &a6;
  v35 = &a7;
  v37 = &a8;
  v39 = &a9;
  v41 = a10;
  v43 = &a11;
  v45 = &a12;
  v47 = &a13;
  v49 = &a14;
  v51 = &a15;
  v53 = a16;
  v55 = &a17;
  v32 = 2LL;
  v34 = 2LL;
  v36 = 4LL;
  v38 = 8LL;
  v40 = 8LL;
  v42 = 8LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 8LL;
  v52 = 4LL;
  v54 = 8LL;
  v56 = 8LL;
  if ( a18 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a18[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v58 = v26;
  v59 = 0;
  if ( !a18 )
    v24 = L"NULL";
  v61 = 4LL;
  v57 = v24;
  v60 = &a19;
  v63 = 8LL;
  v62 = &a20;
  v65 = 4LL;
  v64 = &a21;
  v67 = 4LL;
  v66 = &a22;
  v68 = &a23;
  v70 = &a24;
  v69 = 8LL;
  v71 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v24, &AuditApiRegisterRawInputDevices, &W32kControlGuid, 22LL, v28);
}
