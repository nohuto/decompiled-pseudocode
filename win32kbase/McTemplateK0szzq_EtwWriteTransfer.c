NTSTATUS __fastcall McTemplateK0szzq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7)
{
  const wchar_t *v7; // r10
  __int64 v8; // rcx
  const wchar_t *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rax
  int v14; // r8d
  bool v15; // zf
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-21h] BYREF
  const char *v18; // [rsp+40h] [rbp-11h]
  int v19; // [rsp+48h] [rbp-9h]
  int v20; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v21; // [rsp+50h] [rbp-1h]
  int v22; // [rsp+58h] [rbp+7h]
  int v23; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v24; // [rsp+60h] [rbp+Fh]
  int v25; // [rsp+68h] [rbp+17h]
  int v26; // [rsp+6Ch] [rbp+1Bh]
  char *v27; // [rsp+70h] [rbp+1Fh]
  __int64 v28; // [rsp+78h] [rbp+27h]

  v7 = a6;
  v8 = -1LL;
  v9 = a5;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5;
  }
  v19 = v11;
  v20 = 0;
  if ( !a4 )
    a4 = "NULL";
  v18 = a4;
  v12 = 10;
  if ( a5 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a5[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v22 = v14;
  v23 = 0;
  if ( !a5 )
    v9 = L"NULL";
  v21 = v9;
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v12 = 2 * v8 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v7 = L"NULL";
  v25 = v12;
  v24 = v7;
  v27 = &a7;
  v26 = 0;
  v28 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v8, &SyscallFilterMessage, &W32kControlGuid, 5u, &v17);
}
