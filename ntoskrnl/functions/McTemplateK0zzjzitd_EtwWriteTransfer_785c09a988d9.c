NTSTATUS __fastcall McTemplateK0zzjzitd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10)
{
  const wchar_t *v10; // r11
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // r10d
  __int64 v17; // rdx
  int v18; // r9d
  bool v19; // zf
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+38h] [rbp-69h] BYREF
  const wchar_t *v22; // [rsp+48h] [rbp-59h]
  int v23; // [rsp+50h] [rbp-51h]
  int v24; // [rsp+54h] [rbp-4Dh]
  const wchar_t *v25; // [rsp+58h] [rbp-49h]
  int v26; // [rsp+60h] [rbp-41h]
  int v27; // [rsp+64h] [rbp-3Dh]
  __int64 v28; // [rsp+68h] [rbp-39h]
  __int64 v29; // [rsp+70h] [rbp-31h]
  const wchar_t *v30; // [rsp+78h] [rbp-29h]
  int v31; // [rsp+80h] [rbp-21h]
  int v32; // [rsp+84h] [rbp-1Dh]
  char *v33; // [rsp+88h] [rbp-19h]
  __int64 v34; // [rsp+90h] [rbp-11h]
  char *v35; // [rsp+98h] [rbp-9h]
  __int64 v36; // [rsp+A0h] [rbp-1h]
  char *v37; // [rsp+A8h] [rbp+7h]
  __int64 v38; // [rsp+B0h] [rbp+Fh]

  v10 = a7;
  v11 = -1LL;
  v12 = a5;
  v14 = 10;
  if ( a4 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v23 = v16;
  v24 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v22 = a4;
  if ( a5 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a5[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v26 = v18;
  v27 = 0;
  if ( !a5 )
    v12 = L"NULL";
  v29 = 16LL;
  v25 = v12;
  v28 = a6;
  v19 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v11;
    while ( a7[v11] );
    v14 = 2 * v11 + 2;
    v19 = a7 == 0LL;
  }
  if ( v19 )
    v10 = L"NULL";
  v31 = v14;
  v30 = v10;
  v33 = &a8;
  v32 = 0;
  v35 = &a9;
  v34 = 8LL;
  v37 = &a10;
  v36 = 4LL;
  v38 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 8u, &v21);
}
