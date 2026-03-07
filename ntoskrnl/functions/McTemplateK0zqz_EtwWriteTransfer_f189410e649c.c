NTSTATUS __fastcall McTemplateK0zqz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  int v9; // r10d
  __int64 v10; // rcx
  int v11; // r8d
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  char *v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  const wchar_t *v20; // [rsp+60h] [rbp-28h]
  int v21; // [rsp+68h] [rbp-20h]
  int v22; // [rsp+6Ch] [rbp-1Ch]

  v6 = a6;
  v7 = -1LL;
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
  v19 = 4LL;
  v18 = &a5;
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = 2 * v7 + 2;
    v12 = a6 == 0LL;
  }
  if ( v12 )
    v6 = L"NULL";
  v21 = v9;
  v20 = v6;
  v22 = 0;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemove_Vetoed,
           a3,
           4u,
           &v14);
}
