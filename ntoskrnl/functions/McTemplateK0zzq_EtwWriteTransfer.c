NTSTATUS __fastcall McTemplateK0zzq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6)
{
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  int v8; // r10d
  __int64 v9; // rcx
  int v10; // r8d
  bool v11; // zf
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v14; // [rsp+40h] [rbp-48h]
  int v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+4Ch] [rbp-3Ch]
  const wchar_t *v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+58h] [rbp-30h]
  int v19; // [rsp+5Ch] [rbp-2Ch]
  char *v20; // [rsp+60h] [rbp-28h]
  __int64 v21; // [rsp+68h] [rbp-20h]

  v6 = a5;
  v7 = -1LL;
  v8 = 10;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v15 = v10;
  v16 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v14 = a4;
  v11 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
    v11 = a5 == 0LL;
  }
  if ( v11 )
    v6 = L"NULL";
  v18 = v8;
  v17 = v6;
  v20 = &a6;
  v19 = 0;
  v21 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_GetChildPdo_SkipReporting,
           0LL,
           4u,
           &v13);
}
