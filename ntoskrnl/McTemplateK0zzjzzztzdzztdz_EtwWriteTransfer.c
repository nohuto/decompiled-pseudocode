/*
 * XREFs of McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer @ 0x1403C1E28
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        const wchar_t *a11,
        char a12,
        const wchar_t *a13,
        const wchar_t *a14,
        char a15,
        char a16,
        const wchar_t *a17)
{
  const wchar_t *v17; // r12
  const wchar_t *v19; // r15
  const wchar_t *v20; // rsi
  __int64 v21; // rcx
  const wchar_t *v22; // r14
  int v23; // r8d
  const wchar_t *v24; // rdi
  const wchar_t *v25; // rbx
  const wchar_t *v26; // r11
  const wchar_t *v27; // r10
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rax
  int v43; // edx
  bool v44; // zf
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+38h] [rbp-D0h] BYREF
  const wchar_t *v47; // [rsp+48h] [rbp-C0h]
  int v48; // [rsp+50h] [rbp-B8h]
  int v49; // [rsp+54h] [rbp-B4h]
  const wchar_t *v50; // [rsp+58h] [rbp-B0h]
  __int64 v51; // [rsp+60h] [rbp-A8h]
  __int64 v52; // [rsp+68h] [rbp-A0h]
  __int64 v53; // [rsp+70h] [rbp-98h]
  const wchar_t *v54; // [rsp+78h] [rbp-90h]
  int v55; // [rsp+80h] [rbp-88h]
  int v56; // [rsp+84h] [rbp-84h]
  const wchar_t *v57; // [rsp+88h] [rbp-80h]
  int v58; // [rsp+90h] [rbp-78h]
  int v59; // [rsp+94h] [rbp-74h]
  const wchar_t *v60; // [rsp+98h] [rbp-70h]
  int v61; // [rsp+A0h] [rbp-68h]
  int v62; // [rsp+A4h] [rbp-64h]
  char *v63; // [rsp+A8h] [rbp-60h]
  __int64 v64; // [rsp+B0h] [rbp-58h]
  const wchar_t *v65; // [rsp+B8h] [rbp-50h]
  int v66; // [rsp+C0h] [rbp-48h]
  int v67; // [rsp+C4h] [rbp-44h]
  char *v68; // [rsp+C8h] [rbp-40h]
  __int64 v69; // [rsp+D0h] [rbp-38h]
  const wchar_t *v70; // [rsp+D8h] [rbp-30h]
  int v71; // [rsp+E0h] [rbp-28h]
  int v72; // [rsp+E4h] [rbp-24h]
  const wchar_t *v73; // [rsp+E8h] [rbp-20h]
  int v74; // [rsp+F0h] [rbp-18h]
  int v75; // [rsp+F4h] [rbp-14h]
  char *v76; // [rsp+F8h] [rbp-10h]
  __int64 v77; // [rsp+100h] [rbp-8h]
  char *v78; // [rsp+108h] [rbp+0h]
  __int64 v79; // [rsp+110h] [rbp+8h]
  const wchar_t *v80; // [rsp+118h] [rbp+10h]
  int v81; // [rsp+120h] [rbp+18h]
  int v82; // [rsp+124h] [rbp+1Ch]

  v17 = a17;
  v19 = a14;
  v20 = a13;
  v21 = -1LL;
  v22 = a11;
  v23 = 10;
  v24 = a9;
  v25 = a8;
  v26 = a7;
  v27 = a5;
  if ( a4 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a4[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v29 = 10;
  }
  v48 = v29;
  if ( !a4 )
    a4 = L"NULL";
  v47 = a4;
  v49 = 0;
  if ( a5 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a5[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v51 = v31;
  if ( !a5 )
    v27 = L"NULL";
  v53 = 16LL;
  v52 = a6;
  v50 = v27;
  if ( a7 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a7[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v33 = 10;
  }
  v55 = v33;
  v56 = 0;
  if ( !a7 )
    v26 = L"NULL";
  v54 = v26;
  if ( a8 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a8[v34] );
    v35 = 2 * v34 + 2;
  }
  else
  {
    v35 = 10;
  }
  v58 = v35;
  v59 = 0;
  if ( !a8 )
    v25 = L"NULL";
  v57 = v25;
  if ( a9 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a9[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v37 = 10;
  }
  v61 = v37;
  v62 = 0;
  if ( !a9 )
    v24 = L"NULL";
  v63 = &a10;
  v60 = v24;
  v64 = 4LL;
  if ( a11 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a11[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v39 = 10;
  }
  v66 = v39;
  v67 = 0;
  if ( !a11 )
    v22 = L"NULL";
  v68 = &a12;
  v65 = v22;
  v69 = 4LL;
  if ( a13 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a13[v40] );
    v41 = 2 * v40 + 2;
  }
  else
  {
    v41 = 10;
  }
  v71 = v41;
  v72 = 0;
  if ( !a13 )
    v20 = L"NULL";
  v70 = v20;
  if ( a14 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a14[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v43 = 10;
  }
  v74 = v43;
  v75 = 0;
  if ( !a14 )
    v19 = L"NULL";
  v76 = &a15;
  v73 = v19;
  v78 = &a16;
  v77 = 4LL;
  v79 = 4LL;
  v44 = a17 == 0LL;
  if ( a17 )
  {
    do
      ++v21;
    while ( a17[v21] );
    v23 = 2 * v21 + 2;
    v44 = a17 == 0LL;
  }
  if ( v44 )
    v17 = L"NULL";
  v81 = v23;
  v82 = 0;
  v80 = v17;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 0xFu, &v46);
}
