NTSTATUS __fastcall McTemplateK0qqqszq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const char *a7,
        const wchar_t *a8,
        char a9)
{
  const wchar_t *v9; // r8
  const char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-51h] BYREF
  int *v18; // [rsp+40h] [rbp-41h]
  __int64 v19; // [rsp+48h] [rbp-39h]
  char *v20; // [rsp+50h] [rbp-31h]
  __int64 v21; // [rsp+58h] [rbp-29h]
  char *v22; // [rsp+60h] [rbp-21h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  const char *v24; // [rsp+70h] [rbp-11h]
  int v25; // [rsp+78h] [rbp-9h]
  int v26; // [rsp+7Ch] [rbp-5h]
  const wchar_t *v27; // [rsp+80h] [rbp-1h]
  int v28; // [rsp+88h] [rbp+7h]
  int v29; // [rsp+8Ch] [rbp+Bh]
  char *v30; // [rsp+90h] [rbp+Fh]
  __int64 v31; // [rsp+98h] [rbp+17h]
  int v32; // [rsp+D8h] [rbp+57h] BYREF

  v32 = a4;
  v9 = a8;
  v18 = &v32;
  v11 = a7;
  v20 = &a5;
  v12 = -1LL;
  v19 = 4LL;
  v21 = 4LL;
  v22 = &a6;
  v23 = 4LL;
  if ( a7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a7[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v14 = 5;
  }
  v25 = v14;
  v26 = 0;
  if ( !a7 )
    v11 = "NULL";
  v24 = v11;
  if ( a8 )
  {
    do
      ++v12;
    while ( a8[v12] );
    v15 = 2 * v12 + 2;
  }
  else
  {
    v15 = 10;
  }
  v28 = v15;
  v29 = 0;
  v30 = &a9;
  v31 = 4LL;
  if ( !a8 )
    v9 = L"NULL";
  v27 = v9;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, (__int64)v9, 7u, &v17);
}
