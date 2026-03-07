NTSTATUS __fastcall McTemplateK0zzqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7)
{
  const wchar_t *v7; // rdx
  __int64 v8; // rax
  int v9; // r10d
  __int64 v10; // rcx
  int v11; // r8d
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-11h]
  int v16; // [rsp+48h] [rbp-9h]
  int v17; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v18; // [rsp+50h] [rbp-1h]
  int v19; // [rsp+58h] [rbp+7h]
  int v20; // [rsp+5Ch] [rbp+Bh]
  char *v21; // [rsp+60h] [rbp+Fh]
  __int64 v22; // [rsp+68h] [rbp+17h]
  char *v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]

  v7 = a5;
  v8 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v16 = v11;
  v17 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = a4;
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v8;
    while ( a5[v8] );
    v9 = 2 * v8 + 2;
    v12 = a5 == 0LL;
  }
  if ( v12 )
    v7 = L"NULL";
  v19 = v9;
  v18 = v7;
  v21 = &a6;
  v20 = 0;
  v23 = &a7;
  v22 = 4LL;
  v24 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_LifetimeChanged,
           0LL,
           5u,
           &v14);
}
