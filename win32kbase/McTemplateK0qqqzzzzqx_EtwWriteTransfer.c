/*
 * XREFs of McTemplateK0qqqzzzzqx_EtwWriteTransfer @ 0x1C016709C
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0033C70 (EtwTraceInputProcessDelay.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqzzzzqx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        char a11,
        char a12)
{
  const wchar_t *v12; // r9
  const wchar_t *v13; // r11
  const wchar_t *v14; // r8
  const wchar_t *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r10d
  __int64 v19; // rcx
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rcx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+38h] [rbp-99h] BYREF
  int *v26; // [rsp+48h] [rbp-89h]
  __int64 v27; // [rsp+50h] [rbp-81h]
  char *v28; // [rsp+58h] [rbp-79h]
  __int64 v29; // [rsp+60h] [rbp-71h]
  char *v30; // [rsp+68h] [rbp-69h]
  __int64 v31; // [rsp+70h] [rbp-61h]
  const wchar_t *v32; // [rsp+78h] [rbp-59h]
  int v33; // [rsp+80h] [rbp-51h]
  int v34; // [rsp+84h] [rbp-4Dh]
  const wchar_t *v35; // [rsp+88h] [rbp-49h]
  int v36; // [rsp+90h] [rbp-41h]
  int v37; // [rsp+94h] [rbp-3Dh]
  const wchar_t *v38; // [rsp+98h] [rbp-39h]
  int v39; // [rsp+A0h] [rbp-31h]
  int v40; // [rsp+A4h] [rbp-2Dh]
  const wchar_t *v41; // [rsp+A8h] [rbp-29h]
  int v42; // [rsp+B0h] [rbp-21h]
  int v43; // [rsp+B4h] [rbp-1Dh]
  char *v44; // [rsp+B8h] [rbp-19h]
  __int64 v45; // [rsp+C0h] [rbp-11h]
  char *v46; // [rsp+C8h] [rbp-9h]
  __int64 v47; // [rsp+D0h] [rbp-1h]
  int v48; // [rsp+110h] [rbp+3Fh] BYREF

  v48 = a4;
  v12 = a7;
  v13 = a10;
  v14 = a9;
  v15 = a8;
  v26 = &v48;
  v28 = &a5;
  v27 = 4LL;
  v30 = &a6;
  v16 = -1LL;
  v29 = 4LL;
  v31 = 4LL;
  if ( a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a7[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v33 = v18;
  v34 = 0;
  if ( !a7 )
    v12 = L"NULL";
  v32 = v12;
  if ( a8 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a8[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v36 = v20;
  v37 = 0;
  if ( !a8 )
    v15 = L"NULL";
  v35 = v15;
  if ( a9 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a9[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v39 = v22;
  v40 = 0;
  if ( !a9 )
    v14 = L"NULL";
  v38 = v14;
  if ( a10 )
  {
    do
      ++v16;
    while ( a10[v16] );
    v23 = (unsigned int)(2 * v16 + 2);
  }
  else
  {
    v23 = 10LL;
  }
  v42 = v23;
  v44 = &a11;
  v43 = 0;
  v46 = &a12;
  v45 = 4LL;
  if ( !a10 )
    v13 = L"NULL";
  v41 = v13;
  v47 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v23, &ImmersiveInputProcessDelayEvent, &W32kControlGuid, 0xAu, &v25);
}
