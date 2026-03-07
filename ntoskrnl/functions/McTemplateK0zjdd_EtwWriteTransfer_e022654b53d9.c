NTSTATUS __fastcall McTemplateK0zjdd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7)
{
  __int64 v7; // rax
  int v8; // ecx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-11h]
  int v12; // [rsp+48h] [rbp-9h]
  int v13; // [rsp+4Ch] [rbp-5h]
  __int64 v14; // [rsp+50h] [rbp-1h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  char *v16; // [rsp+60h] [rbp+Fh]
  __int64 v17; // [rsp+68h] [rbp+17h]
  char *v18; // [rsp+70h] [rbp+1Fh]
  __int64 v19; // [rsp+78h] [rbp+27h]

  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v12 = v8;
  v13 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = 16LL;
  v14 = a5;
  v16 = &a6;
  v18 = &a7;
  v11 = a4;
  v17 = 4LL;
  v19 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 5u, &v10);
}
