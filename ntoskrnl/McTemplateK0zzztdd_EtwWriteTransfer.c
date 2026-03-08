/*
 * XREFs of McTemplateK0zzztdd_EtwWriteTransfer @ 0x140561D88
 * Callers:
 *     PiSwProcessRemove @ 0x140964760 (PiSwProcessRemove.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzztdd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7,
        char a8,
        char a9)
{
  const wchar_t *v9; // r11
  __int64 v10; // rax
  const wchar_t *v11; // rcx
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // rdx
  int v16; // r9d
  bool v17; // zf
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-51h] BYREF
  const wchar_t *v20; // [rsp+40h] [rbp-41h]
  int v21; // [rsp+48h] [rbp-39h]
  int v22; // [rsp+4Ch] [rbp-35h]
  const wchar_t *v23; // [rsp+50h] [rbp-31h]
  int v24; // [rsp+58h] [rbp-29h]
  int v25; // [rsp+5Ch] [rbp-25h]
  const wchar_t *v26; // [rsp+60h] [rbp-21h]
  int v27; // [rsp+68h] [rbp-19h]
  int v28; // [rsp+6Ch] [rbp-15h]
  char *v29; // [rsp+70h] [rbp-11h]
  __int64 v30; // [rsp+78h] [rbp-9h]
  char *v31; // [rsp+80h] [rbp-1h]
  __int64 v32; // [rsp+88h] [rbp+7h]
  char *v33; // [rsp+90h] [rbp+Fh]
  __int64 v34; // [rsp+98h] [rbp+17h]

  v9 = a6;
  v10 = -1LL;
  v11 = a5;
  v12 = 10;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v21 = v14;
  v22 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v20 = a4;
  if ( a5 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a5[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v24 = v16;
  v25 = 0;
  if ( !a5 )
    v11 = L"NULL";
  v23 = v11;
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v12 = 2 * v10 + 2;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v9 = L"NULL";
  v27 = v12;
  v26 = v9;
  v29 = &a7;
  v28 = 0;
  v31 = &a8;
  v30 = 4LL;
  v33 = &a9;
  v32 = 4LL;
  v34 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_ProcessRemove,
           0LL,
           7u,
           &v19);
}
