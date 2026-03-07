NTSTATUS __fastcall McTemplateK0zzzd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7)
{
  const wchar_t *v7; // r11
  __int64 v8; // rax
  const wchar_t *v10; // rdx
  int v11; // r10d
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // r8d
  bool v16; // zf
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+38h] [rbp-21h] BYREF
  const wchar_t *v19; // [rsp+48h] [rbp-11h]
  int v20; // [rsp+50h] [rbp-9h]
  int v21; // [rsp+54h] [rbp-5h]
  const wchar_t *v22; // [rsp+58h] [rbp-1h]
  int v23; // [rsp+60h] [rbp+7h]
  int v24; // [rsp+64h] [rbp+Bh]
  const wchar_t *v25; // [rsp+68h] [rbp+Fh]
  int v26; // [rsp+70h] [rbp+17h]
  int v27; // [rsp+74h] [rbp+1Bh]
  char *v28; // [rsp+78h] [rbp+1Fh]
  __int64 v29; // [rsp+80h] [rbp+27h]

  v7 = a6;
  v8 = -1LL;
  v10 = a5;
  v11 = 10;
  if ( a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v20 = v13;
  v21 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v19 = a4;
  if ( a5 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a5[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v23 = v15;
  v24 = 0;
  if ( !a5 )
    v10 = L"NULL";
  v22 = v10;
  v16 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v11 = 2 * v8 + 2;
    v16 = a6 == 0LL;
  }
  if ( v16 )
    v7 = L"NULL";
  v26 = v11;
  v25 = v7;
  v28 = &a7;
  v27 = 0;
  v29 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 5u, &v18);
}
