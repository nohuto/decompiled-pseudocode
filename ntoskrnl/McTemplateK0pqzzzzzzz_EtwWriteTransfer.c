/*
 * XREFs of McTemplateK0pqzzzzzzz_EtwWriteTransfer @ 0x14055F4A8
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140745F08 (PiDqIrpQueryCreate.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqzzzzzzz_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  const wchar_t *v3; // rdx
  const wchar_t *v4; // rsi
  const wchar_t *v5; // r11
  __int64 v6; // rcx
  const wchar_t *v7; // rdi
  const wchar_t *v9; // rbx
  const wchar_t *v10; // r10
  const wchar_t *v11; // r9
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  int v23; // edx
  int v24; // eax
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-A9h] BYREF
  va_list v27; // [rsp+40h] [rbp-99h]
  __int64 v28; // [rsp+48h] [rbp-91h]
  va_list v29; // [rsp+50h] [rbp-89h]
  __int64 v30; // [rsp+58h] [rbp-81h]
  const wchar_t *v31; // [rsp+60h] [rbp-79h]
  int v32; // [rsp+68h] [rbp-71h]
  int v33; // [rsp+6Ch] [rbp-6Dh]
  const wchar_t *v34; // [rsp+70h] [rbp-69h]
  int v35; // [rsp+78h] [rbp-61h]
  int v36; // [rsp+7Ch] [rbp-5Dh]
  const wchar_t *v37; // [rsp+80h] [rbp-59h]
  int v38; // [rsp+88h] [rbp-51h]
  int v39; // [rsp+8Ch] [rbp-4Dh]
  const wchar_t *v40; // [rsp+90h] [rbp-49h]
  int v41; // [rsp+98h] [rbp-41h]
  int v42; // [rsp+9Ch] [rbp-3Dh]
  const wchar_t *v43; // [rsp+A0h] [rbp-39h]
  int v44; // [rsp+A8h] [rbp-31h]
  int v45; // [rsp+ACh] [rbp-2Dh]
  const wchar_t *v46; // [rsp+B0h] [rbp-29h]
  int v47; // [rsp+B8h] [rbp-21h]
  int v48; // [rsp+BCh] [rbp-1Dh]
  const wchar_t *v49; // [rsp+C0h] [rbp-19h]
  int v50; // [rsp+C8h] [rbp-11h]
  int v51; // [rsp+CCh] [rbp-Dh]
  __int64 v52; // [rsp+138h] [rbp+5Fh] BYREF
  va_list va; // [rsp+138h] [rbp+5Fh]
  __int64 v54; // [rsp+140h] [rbp+67h] BYREF
  va_list va1; // [rsp+140h] [rbp+67h]
  const wchar_t *v56; // [rsp+148h] [rbp+6Fh]
  const wchar_t *v57; // [rsp+150h] [rbp+77h]
  const wchar_t *v58; // [rsp+158h] [rbp+7Fh]
  const wchar_t *v59; // [rsp+160h] [rbp+87h]
  const wchar_t *v60; // [rsp+168h] [rbp+8Fh]
  const wchar_t *v61; // [rsp+170h] [rbp+97h]
  const wchar_t *v62; // [rsp+178h] [rbp+9Fh]
  va_list va2; // [rsp+180h] [rbp+A7h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v52 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v54 = va_arg(va2, _QWORD);
  v56 = va_arg(va2, const wchar_t *);
  v57 = va_arg(va2, const wchar_t *);
  v58 = va_arg(va2, const wchar_t *);
  v59 = va_arg(va2, const wchar_t *);
  v60 = va_arg(va2, const wchar_t *);
  v61 = va_arg(va2, const wchar_t *);
  v62 = va_arg(va2, const wchar_t *);
  v3 = v56;
  v4 = v62;
  v5 = v61;
  v6 = -1LL;
  v7 = v60;
  v9 = v59;
  v10 = v58;
  v11 = v57;
  va_copy(v27, va);
  va_copy(v29, va1);
  v28 = 8LL;
  v30 = 4LL;
  if ( v56 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v56[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v32 = v13;
  v33 = 0;
  if ( !v56 )
    v3 = L"NULL";
  v31 = v3;
  if ( v57 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v57[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v35 = v15;
  v36 = 0;
  if ( !v57 )
    v11 = L"NULL";
  v34 = v11;
  if ( v58 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v58[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v38 = v17;
  v39 = 0;
  if ( !v58 )
    v10 = L"NULL";
  v37 = v10;
  if ( v59 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v59[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v41 = v19;
  v42 = 0;
  if ( !v59 )
    v9 = L"NULL";
  v40 = v9;
  if ( v60 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v60[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v44 = v21;
  v45 = 0;
  if ( !v60 )
    v7 = L"NULL";
  v43 = v7;
  if ( v61 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v61[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v47 = v23;
  v48 = 0;
  if ( !v61 )
    v5 = L"NULL";
  v46 = v5;
  if ( v62 )
  {
    do
      ++v6;
    while ( v62[v6] );
    v24 = 2 * v6 + 2;
  }
  else
  {
    v24 = 10;
  }
  v50 = v24;
  v51 = 0;
  if ( !v62 )
    v4 = L"NULL";
  v49 = v4;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_QueryStart,
           a3,
           0xAu,
           &v26);
}
