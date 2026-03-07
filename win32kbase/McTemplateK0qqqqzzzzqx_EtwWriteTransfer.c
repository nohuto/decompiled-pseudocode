NTSTATUS __fastcall McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        const wchar_t *a11,
        char a12,
        char a13)
{
  const wchar_t *v13; // r9
  const wchar_t *v14; // rbx
  const wchar_t *v15; // rdx
  const wchar_t *v16; // r8
  int v17; // r10d
  __int64 v18; // rax
  int v19; // r11d
  int v20; // r9d
  int v21; // r8d
  bool v22; // zf
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+38h] [rbp-B9h] BYREF
  int *v25; // [rsp+48h] [rbp-A9h]
  __int64 v26; // [rsp+50h] [rbp-A1h]
  char *v27; // [rsp+58h] [rbp-99h]
  __int64 v28; // [rsp+60h] [rbp-91h]
  char *v29; // [rsp+68h] [rbp-89h]
  __int64 v30; // [rsp+70h] [rbp-81h]
  char *v31; // [rsp+78h] [rbp-79h]
  __int64 v32; // [rsp+80h] [rbp-71h]
  const wchar_t *v33; // [rsp+88h] [rbp-69h]
  int v34; // [rsp+90h] [rbp-61h]
  int v35; // [rsp+94h] [rbp-5Dh]
  const wchar_t *v36; // [rsp+98h] [rbp-59h]
  int v37; // [rsp+A0h] [rbp-51h]
  int v38; // [rsp+A4h] [rbp-4Dh]
  const wchar_t *v39; // [rsp+A8h] [rbp-49h]
  int v40; // [rsp+B0h] [rbp-41h]
  int v41; // [rsp+B4h] [rbp-3Dh]
  const wchar_t *v42; // [rsp+B8h] [rbp-39h]
  int v43; // [rsp+C0h] [rbp-31h]
  int v44; // [rsp+C4h] [rbp-2Dh]
  char *v45; // [rsp+C8h] [rbp-29h]
  __int64 v46; // [rsp+D0h] [rbp-21h]
  char *v47; // [rsp+D8h] [rbp-19h]
  __int64 v48; // [rsp+E0h] [rbp-11h]
  int v49; // [rsp+130h] [rbp+3Fh] BYREF

  v49 = a4;
  v13 = a8;
  v14 = a11;
  v15 = a10;
  v16 = a9;
  v25 = &v49;
  v27 = &a5;
  v17 = 10;
  v26 = 4LL;
  v29 = &a6;
  v31 = &a7;
  v18 = -1LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  if ( a8 )
  {
    a1 = -1LL;
    do
      ++a1;
    while ( a8[a1] );
    v19 = 2 * a1 + 2;
  }
  else
  {
    v19 = 10;
  }
  v34 = v19;
  v35 = 0;
  if ( !a8 )
    v13 = L"NULL";
  v33 = v13;
  if ( a9 )
  {
    a1 = -1LL;
    do
      ++a1;
    while ( a9[a1] );
    v20 = 2 * a1 + 2;
  }
  else
  {
    v20 = 10;
  }
  v37 = v20;
  v38 = 0;
  if ( !a9 )
    v16 = L"NULL";
  v36 = v16;
  if ( a10 )
  {
    a1 = -1LL;
    do
      ++a1;
    while ( a10[a1] );
    v21 = 2 * a1 + 2;
  }
  else
  {
    v21 = 10;
  }
  v40 = v21;
  v41 = 0;
  if ( !a10 )
    v15 = L"NULL";
  v39 = v15;
  v22 = a11 == 0LL;
  if ( a11 )
  {
    do
      ++v18;
    while ( a11[v18] );
    v17 = 2 * v18 + 2;
    v22 = a11 == 0LL;
  }
  v43 = v17;
  v45 = &a12;
  v44 = 0;
  v47 = &a13;
  v46 = 4LL;
  if ( v22 )
    v14 = L"NULL";
  v42 = v14;
  v48 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &ImmersiveMessageCheckDelayEvent, &W32kControlGuid, 0xBu, &v24);
}
