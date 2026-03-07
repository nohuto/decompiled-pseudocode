NTSTATUS __fastcall McTemplateK0qqqzzzqx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        char a11)
{
  const wchar_t *v11; // r8
  const wchar_t *v12; // r11
  const wchar_t *v13; // rdx
  int v14; // r10d
  __int64 v15; // rax
  int v16; // r9d
  int v17; // r8d
  bool v18; // zf
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+38h] [rbp-81h] BYREF
  int *v21; // [rsp+48h] [rbp-71h]
  __int64 v22; // [rsp+50h] [rbp-69h]
  char *v23; // [rsp+58h] [rbp-61h]
  __int64 v24; // [rsp+60h] [rbp-59h]
  char *v25; // [rsp+68h] [rbp-51h]
  __int64 v26; // [rsp+70h] [rbp-49h]
  const wchar_t *v27; // [rsp+78h] [rbp-41h]
  int v28; // [rsp+80h] [rbp-39h]
  int v29; // [rsp+84h] [rbp-35h]
  const wchar_t *v30; // [rsp+88h] [rbp-31h]
  int v31; // [rsp+90h] [rbp-29h]
  int v32; // [rsp+94h] [rbp-25h]
  const wchar_t *v33; // [rsp+98h] [rbp-21h]
  int v34; // [rsp+A0h] [rbp-19h]
  int v35; // [rsp+A4h] [rbp-15h]
  char *v36; // [rsp+A8h] [rbp-11h]
  __int64 v37; // [rsp+B0h] [rbp-9h]
  char *v38; // [rsp+B8h] [rbp-1h]
  __int64 v39; // [rsp+C0h] [rbp+7h]
  int v40; // [rsp+100h] [rbp+47h] BYREF

  v40 = a4;
  v11 = a7;
  v12 = a9;
  v13 = a8;
  v21 = &v40;
  v23 = &a5;
  v25 = &a6;
  v14 = 10;
  v15 = -1LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  if ( a7 )
  {
    a1 = -1LL;
    do
      ++a1;
    while ( a7[a1] );
    v16 = 2 * a1 + 2;
  }
  else
  {
    v16 = 10;
  }
  v28 = v16;
  v29 = 0;
  if ( !a7 )
    v11 = L"NULL";
  v27 = v11;
  if ( a8 )
  {
    a1 = -1LL;
    do
      ++a1;
    while ( a8[a1] );
    v17 = 2 * a1 + 2;
  }
  else
  {
    v17 = 10;
  }
  v31 = v17;
  v32 = 0;
  if ( !a8 )
    v13 = L"NULL";
  v30 = v13;
  v18 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v15;
    while ( a9[v15] );
    v14 = 2 * v15 + 2;
    v18 = a9 == 0LL;
  }
  v34 = v14;
  v36 = &a10;
  v35 = 0;
  v38 = &a11;
  v37 = 4LL;
  if ( v18 )
    v12 = L"NULL";
  v33 = v12;
  v39 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &InputProcessDelayEvent, &W32kControlGuid, 9u, &v20);
}
