NTSTATUS __fastcall McTemplateK0zqzt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        const wchar_t *a6,
        char a7)
{
  const wchar_t *v7; // rdx
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // r10d
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-11h]
  int v16; // [rsp+48h] [rbp-9h]
  int v17; // [rsp+4Ch] [rbp-5h]
  char *v18; // [rsp+50h] [rbp-1h]
  __int64 v19; // [rsp+58h] [rbp+7h]
  const wchar_t *v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+68h] [rbp+17h]
  int v22; // [rsp+6Ch] [rbp+1Bh]
  char *v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]

  v7 = a6;
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
  v19 = 4LL;
  v15 = a4;
  v18 = &a5;
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v9 = 2 * v8 + 2;
    v12 = a6 == 0LL;
  }
  if ( v12 )
    v7 = L"NULL";
  v21 = v9;
  v20 = v7;
  v23 = &a7;
  v22 = 0;
  v24 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)&a5, &FontLoadAttemptEvent, &W32kControlGuid, 5u, &v14);
}
