/*
 * XREFs of McTemplateK0zzjzzzdd_EtwWriteTransfer @ 0x1403C1C68
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x140874EF4 (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzjzzzdd_EtwWriteTransfer(
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
        char a11)
{
  const wchar_t *v11; // rdi
  __int64 v12; // rcx
  const wchar_t *v13; // r10
  const wchar_t *v14; // r11
  const wchar_t *v16; // rbx
  int v17; // r8d
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  int v25; // edx
  bool v26; // zf
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+38h] [rbp-91h] BYREF
  const wchar_t *v29; // [rsp+48h] [rbp-81h]
  int v30; // [rsp+50h] [rbp-79h]
  int v31; // [rsp+54h] [rbp-75h]
  const wchar_t *v32; // [rsp+58h] [rbp-71h]
  int v33; // [rsp+60h] [rbp-69h]
  int v34; // [rsp+64h] [rbp-65h]
  __int64 v35; // [rsp+68h] [rbp-61h]
  __int64 v36; // [rsp+70h] [rbp-59h]
  const wchar_t *v37; // [rsp+78h] [rbp-51h]
  int v38; // [rsp+80h] [rbp-49h]
  int v39; // [rsp+84h] [rbp-45h]
  const wchar_t *v40; // [rsp+88h] [rbp-41h]
  int v41; // [rsp+90h] [rbp-39h]
  int v42; // [rsp+94h] [rbp-35h]
  const wchar_t *v43; // [rsp+98h] [rbp-31h]
  int v44; // [rsp+A0h] [rbp-29h]
  int v45; // [rsp+A4h] [rbp-25h]
  char *v46; // [rsp+A8h] [rbp-21h]
  __int64 v47; // [rsp+B0h] [rbp-19h]
  char *v48; // [rsp+B8h] [rbp-11h]
  __int64 v49; // [rsp+C0h] [rbp-9h]

  v11 = a9;
  v12 = -1LL;
  v13 = a8;
  v14 = a7;
  v16 = a5;
  v17 = 10;
  if ( a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a4[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v30 = v19;
  v31 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v29 = a4;
  if ( a5 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a5[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v33 = v21;
  if ( !a5 )
    v16 = L"NULL";
  v34 = 0;
  v32 = v16;
  v35 = a6;
  v36 = 16LL;
  if ( a7 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a7[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v38 = v23;
  v39 = 0;
  if ( !a7 )
    v14 = L"NULL";
  v37 = v14;
  if ( a8 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a8[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v41 = v25;
  v42 = 0;
  if ( !a8 )
    v13 = L"NULL";
  v40 = v13;
  v26 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v12;
    while ( a9[v12] );
    v17 = 2 * v12 + 2;
    v26 = a9 == 0LL;
  }
  if ( v26 )
    v11 = L"NULL";
  v44 = v17;
  v43 = v11;
  v46 = &a10;
  v45 = 0;
  v48 = &a11;
  v47 = 4LL;
  v49 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 9u, &v28);
}
