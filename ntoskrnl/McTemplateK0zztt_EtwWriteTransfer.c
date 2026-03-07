NTSTATUS __fastcall McTemplateK0zztt_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7)
{
  __int64 v7; // rax
  const wchar_t *v9; // rdx
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // r8d
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-11h]
  int v17; // [rsp+48h] [rbp-9h]
  int v18; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v19; // [rsp+50h] [rbp-1h]
  int v20; // [rsp+58h] [rbp+7h]
  int v21; // [rsp+5Ch] [rbp+Bh]
  char *v22; // [rsp+60h] [rbp+Fh]
  __int64 v23; // [rsp+68h] [rbp+17h]
  char *v24; // [rsp+70h] [rbp+1Fh]
  __int64 v25; // [rsp+78h] [rbp+27h]

  v7 = -1LL;
  v9 = a5;
  v10 = 10;
  if ( a4 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a4[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v17 = v12;
  v18 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v16 = a4;
  v13 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v7;
    while ( a5[v7] );
    v10 = 2 * v7 + 2;
    v13 = a5 == 0LL;
  }
  if ( v13 )
    v9 = L"NULL";
  v20 = v10;
  v19 = v9;
  v22 = &a6;
  v21 = 0;
  v24 = &a7;
  v23 = 4LL;
  v25 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 5u, &v15);
}
