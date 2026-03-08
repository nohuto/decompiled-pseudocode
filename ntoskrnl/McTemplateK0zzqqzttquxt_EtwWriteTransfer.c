/*
 * XREFs of McTemplateK0zzqqzttquxt_EtwWriteTransfer @ 0x140562480
 * Callers:
 *     PnpTraceRebalanceResult @ 0x140968FDC (PnpTraceRebalanceResult.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzqqzttquxt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7,
        const wchar_t *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  const wchar_t *v14; // r11
  __int64 v15; // rax
  const wchar_t *v16; // rdx
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // r10d
  __int64 v20; // rcx
  int v21; // r9d
  bool v22; // zf
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-C9h] BYREF
  const wchar_t *v25; // [rsp+40h] [rbp-B9h]
  int v26; // [rsp+48h] [rbp-B1h]
  int v27; // [rsp+4Ch] [rbp-ADh]
  const wchar_t *v28; // [rsp+50h] [rbp-A9h]
  int v29; // [rsp+58h] [rbp-A1h]
  int v30; // [rsp+5Ch] [rbp-9Dh]
  char *v31; // [rsp+60h] [rbp-99h]
  __int64 v32; // [rsp+68h] [rbp-91h]
  char *v33; // [rsp+70h] [rbp-89h]
  __int64 v34; // [rsp+78h] [rbp-81h]
  const wchar_t *v35; // [rsp+80h] [rbp-79h]
  int v36; // [rsp+88h] [rbp-71h]
  int v37; // [rsp+8Ch] [rbp-6Dh]
  char *v38; // [rsp+90h] [rbp-69h]
  __int64 v39; // [rsp+98h] [rbp-61h]
  char *v40; // [rsp+A0h] [rbp-59h]
  __int64 v41; // [rsp+A8h] [rbp-51h]
  char *v42; // [rsp+B0h] [rbp-49h]
  __int64 v43; // [rsp+B8h] [rbp-41h]
  char *v44; // [rsp+C0h] [rbp-39h]
  __int64 v45; // [rsp+C8h] [rbp-31h]
  char *v46; // [rsp+D0h] [rbp-29h]
  __int64 v47; // [rsp+D8h] [rbp-21h]
  char *v48; // [rsp+E0h] [rbp-19h]
  __int64 v49; // [rsp+E8h] [rbp-11h]

  v14 = a8;
  v15 = -1LL;
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
  v26 = v19;
  v27 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v25 = a4;
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
  v29 = v21;
  v30 = 0;
  if ( !a5 )
    v16 = L"NULL";
  v31 = &a6;
  v28 = v16;
  v33 = &a7;
  v32 = 4LL;
  v34 = 4LL;
  v22 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v15;
    while ( a8[v15] );
    v17 = 2 * v15 + 2;
    v22 = a8 == 0LL;
  }
  if ( v22 )
    v14 = L"NULL";
  v36 = v17;
  v35 = v14;
  v38 = &a9;
  v37 = 0;
  v40 = &a10;
  v39 = 4LL;
  v42 = &a11;
  v41 = 4LL;
  v44 = &a12;
  v43 = 4LL;
  v46 = &a13;
  v48 = &a14;
  v45 = 1LL;
  v47 = 8LL;
  v49 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_Rebalance_Success,
           0LL,
           0xCu,
           &v24);
}
