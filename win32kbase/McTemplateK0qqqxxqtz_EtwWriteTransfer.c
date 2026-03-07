NTSTATUS __fastcall McTemplateK0qqqxxqtz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        const wchar_t *a11)
{
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  int v15; // [rsp+30h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-81h] BYREF
  int *v17; // [rsp+50h] [rbp-71h]
  __int64 v18; // [rsp+58h] [rbp-69h]
  char *v19; // [rsp+60h] [rbp-61h]
  __int64 v20; // [rsp+68h] [rbp-59h]
  char *v21; // [rsp+70h] [rbp-51h]
  __int64 v22; // [rsp+78h] [rbp-49h]
  char *v23; // [rsp+80h] [rbp-41h]
  __int64 v24; // [rsp+88h] [rbp-39h]
  char *v25; // [rsp+90h] [rbp-31h]
  __int64 v26; // [rsp+98h] [rbp-29h]
  int *v27; // [rsp+A0h] [rbp-21h]
  __int64 v28; // [rsp+A8h] [rbp-19h]
  char *v29; // [rsp+B0h] [rbp-11h]
  __int64 v30; // [rsp+B8h] [rbp-9h]
  const wchar_t *v31; // [rsp+C0h] [rbp-1h]
  int v32; // [rsp+C8h] [rbp+7h]
  int v33; // [rsp+CCh] [rbp+Bh]
  int v34; // [rsp+108h] [rbp+47h] BYREF

  v34 = a4;
  v11 = a11;
  v17 = &v34;
  v15 = 89;
  v19 = &a5;
  v21 = &a6;
  v23 = &a7;
  v25 = &a8;
  v27 = &v15;
  v29 = &a10;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 8LL;
  v26 = 8LL;
  v28 = 4LL;
  v30 = 4LL;
  if ( a11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v32 = v13;
  v33 = 0;
  if ( !a11 )
    v11 = L"NULL";
  v31 = v11;
  return McGenEventWrite_EtwWriteTransfer((__int64)v11, &DCompCreateImplicitInteraction, &W32kControlGuid, 9u, &v16);
}
