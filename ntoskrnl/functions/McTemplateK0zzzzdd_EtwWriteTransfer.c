NTSTATUS __fastcall McTemplateK0zzzzdd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9)
{
  const wchar_t *v9; // rbx
  __int64 v10; // rax
  const wchar_t *v11; // rdx
  const wchar_t *v12; // r8
  int v13; // r10d
  __int64 v14; // rcx
  int v15; // r11d
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // r8d
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+38h] [rbp-51h] BYREF
  const wchar_t *v23; // [rsp+48h] [rbp-41h]
  int v24; // [rsp+50h] [rbp-39h]
  int v25; // [rsp+54h] [rbp-35h]
  const wchar_t *v26; // [rsp+58h] [rbp-31h]
  int v27; // [rsp+60h] [rbp-29h]
  int v28; // [rsp+64h] [rbp-25h]
  const wchar_t *v29; // [rsp+68h] [rbp-21h]
  int v30; // [rsp+70h] [rbp-19h]
  int v31; // [rsp+74h] [rbp-15h]
  const wchar_t *v32; // [rsp+78h] [rbp-11h]
  int v33; // [rsp+80h] [rbp-9h]
  int v34; // [rsp+84h] [rbp-5h]
  char *v35; // [rsp+88h] [rbp-1h]
  __int64 v36; // [rsp+90h] [rbp+7h]
  char *v37; // [rsp+98h] [rbp+Fh]
  __int64 v38; // [rsp+A0h] [rbp+17h]

  v9 = a7;
  v10 = -1LL;
  v11 = a6;
  v12 = a5;
  v13 = 10;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v24 = v15;
  v25 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v23 = a4;
  if ( a5 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a5[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v27 = v17;
  v28 = 0;
  if ( !a5 )
    v12 = L"NULL";
  v26 = v12;
  if ( a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a6[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v30 = v19;
  v31 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v29 = v11;
  v20 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v10;
    while ( a7[v10] );
    v13 = 2 * v10 + 2;
    v20 = a7 == 0LL;
  }
  if ( v20 )
    v9 = L"NULL";
  v33 = v13;
  v32 = v9;
  v35 = &a8;
  v34 = 0;
  v37 = &a9;
  v36 = 4LL;
  v38 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_ProcessParentRemove,
           0LL,
           7u,
           &v22);
}
