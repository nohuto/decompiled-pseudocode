NTSTATUS McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        _DWORD a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        const char *a12,
        const char *a13,
        const char *a14,
        char a15,
        char a16,
        char a17,
        char a18,
        ...)
{
  const char *v18; // r8
  const char *v19; // r9
  const char *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h]
  char *v31; // [rsp+58h] [rbp-B0h]
  __int64 v32; // [rsp+60h] [rbp-A8h]
  char *v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h]
  char *v35; // [rsp+78h] [rbp-90h]
  __int64 v36; // [rsp+80h] [rbp-88h]
  char *v37; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-78h]
  char *v39; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h]
  char *v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  char *v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  const char *v45; // [rsp+C8h] [rbp-40h]
  int v46; // [rsp+D0h] [rbp-38h]
  int v47; // [rsp+D4h] [rbp-34h]
  const char *v48; // [rsp+D8h] [rbp-30h]
  int v49; // [rsp+E0h] [rbp-28h]
  int v50; // [rsp+E4h] [rbp-24h]
  const char *v51; // [rsp+E8h] [rbp-20h]
  int v52; // [rsp+F0h] [rbp-18h]
  int v53; // [rsp+F4h] [rbp-14h]
  char *v54; // [rsp+F8h] [rbp-10h]
  __int64 v55; // [rsp+100h] [rbp-8h]
  char *v56; // [rsp+108h] [rbp+0h]
  __int64 v57; // [rsp+110h] [rbp+8h]
  char *v58; // [rsp+118h] [rbp+10h]
  __int64 v59; // [rsp+120h] [rbp+18h]
  char *v60; // [rsp+128h] [rbp+20h]
  __int64 v61; // [rsp+130h] [rbp+28h]
  va_list v62; // [rsp+138h] [rbp+30h]
  __int64 v63; // [rsp+140h] [rbp+38h]
  __int64 v64; // [rsp+148h] [rbp+40h]
  __int64 v65; // [rsp+150h] [rbp+48h]
  __int64 v66; // [rsp+190h] [rbp+88h] BYREF
  __int64 v67; // [rsp+208h] [rbp+100h] BYREF
  va_list va; // [rsp+208h] [rbp+100h]
  __int64 v69; // [rsp+210h] [rbp+108h]
  __int64 v70; // [rsp+218h] [rbp+110h]
  va_list va1; // [rsp+220h] [rbp+118h] BYREF

  va_start(va1, a18);
  va_start(va, a18);
  v67 = va_arg(va1, _QWORD);
  v69 = va_arg(va1, _QWORD);
  v70 = va_arg(va1, _QWORD);
  v66 = a4;
  v18 = a12;
  v19 = a14;
  v20 = a13;
  v29 = &v66;
  v31 = &a5;
  v33 = &a6;
  v30 = 8LL;
  v35 = &a7;
  v37 = &a8;
  v39 = &a9;
  v41 = &a10;
  v43 = &a11;
  v21 = -1LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 4LL;
  if ( a12 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a12[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v46 = v23;
  v47 = 0;
  if ( !a12 )
    v18 = "NULL";
  v45 = v18;
  if ( a13 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a13[v24] );
    v25 = (unsigned int)(v24 + 1);
  }
  else
  {
    v25 = 5LL;
  }
  v49 = v25;
  v50 = 0;
  if ( !a13 )
    v20 = "NULL";
  v48 = v20;
  if ( a14 )
  {
    do
      ++v21;
    while ( a14[v21] );
    v26 = v21 + 1;
  }
  else
  {
    v26 = 5;
  }
  v52 = v26;
  v53 = 0;
  v55 = 8LL;
  v54 = &a15;
  if ( !a14 )
    v19 = "NULL";
  v51 = v19;
  v56 = &a16;
  v57 = 4LL;
  v58 = &a17;
  v59 = 4LL;
  v60 = &a18;
  va_copy(v62, va);
  v64 = v70;
  v61 = 4LL;
  v63 = 4LL;
  v65 = 64LL;
  return McGenEventWrite_EtwWriteTransfer(v25, &USBXHCI_ETW_EVENT_CONTROLLER_CREATE_V1, 0LL, 0x12u, &v28);
}
