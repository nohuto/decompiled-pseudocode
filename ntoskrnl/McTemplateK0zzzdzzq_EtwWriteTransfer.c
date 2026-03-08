/*
 * XREFs of McTemplateK0zzzdzzq_EtwWriteTransfer @ 0x140561AB8
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzzdzzq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10)
{
  const wchar_t *v10; // rdi
  __int64 v11; // rax
  const wchar_t *v12; // r11
  const wchar_t *v13; // rbx
  int v14; // r8d
  const wchar_t *v15; // r10
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  int v23; // edx
  bool v24; // zf
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+38h] [rbp-69h] BYREF
  const wchar_t *v27; // [rsp+48h] [rbp-59h]
  int v28; // [rsp+50h] [rbp-51h]
  int v29; // [rsp+54h] [rbp-4Dh]
  const wchar_t *v30; // [rsp+58h] [rbp-49h]
  int v31; // [rsp+60h] [rbp-41h]
  int v32; // [rsp+64h] [rbp-3Dh]
  const wchar_t *v33; // [rsp+68h] [rbp-39h]
  int v34; // [rsp+70h] [rbp-31h]
  int v35; // [rsp+74h] [rbp-2Dh]
  char *v36; // [rsp+78h] [rbp-29h]
  __int64 v37; // [rsp+80h] [rbp-21h]
  const wchar_t *v38; // [rsp+88h] [rbp-19h]
  int v39; // [rsp+90h] [rbp-11h]
  int v40; // [rsp+94h] [rbp-Dh]
  const wchar_t *v41; // [rsp+98h] [rbp-9h]
  int v42; // [rsp+A0h] [rbp-1h]
  int v43; // [rsp+A4h] [rbp+3h]
  char *v44; // [rsp+A8h] [rbp+7h]
  __int64 v45; // [rsp+B0h] [rbp+Fh]

  v10 = a9;
  v11 = -1LL;
  v12 = a8;
  v13 = a6;
  v14 = 10;
  v15 = a5;
  if ( a4 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a4[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v28 = v17;
  v29 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v27 = a4;
  if ( a5 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a5[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v31 = v19;
  v32 = 0;
  if ( !a5 )
    v15 = L"NULL";
  v30 = v15;
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a6[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v34 = v21;
  v35 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v36 = &a7;
  v33 = v13;
  v37 = 4LL;
  if ( a8 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a8[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v39 = v23;
  v40 = 0;
  if ( !a8 )
    v12 = L"NULL";
  v38 = v12;
  v24 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v11;
    while ( a9[v11] );
    v14 = 2 * v11 + 2;
    v24 = a9 == 0LL;
  }
  if ( v24 )
    v10 = L"NULL";
  v42 = v14;
  v41 = v10;
  v44 = &a10;
  v43 = 0;
  v45 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_CreateInfo,
           0LL,
           8u,
           &v26);
}
