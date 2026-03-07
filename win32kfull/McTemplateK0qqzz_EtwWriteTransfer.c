NTSTATUS __fastcall McTemplateK0qqzz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const char *a6,
        const char *a7)
{
  const char *v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  int v10; // r10d
  __int64 v11; // rdx
  __int64 v12; // r9
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-21h] BYREF
  int *v16; // [rsp+40h] [rbp-11h]
  __int64 v17; // [rsp+48h] [rbp-9h]
  char *v18; // [rsp+50h] [rbp-1h]
  __int64 v19; // [rsp+58h] [rbp+7h]
  const char *v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+68h] [rbp+17h]
  int v22; // [rsp+6Ch] [rbp+1Bh]
  const char *v23; // [rsp+70h] [rbp+1Fh]
  int v24; // [rsp+78h] [rbp+27h]
  int v25; // [rsp+7Ch] [rbp+2Bh]
  int v26; // [rsp+B8h] [rbp+67h] BYREF

  v26 = a4;
  v7 = a6;
  v8 = a7;
  v16 = &v26;
  v18 = &a5;
  v9 = -1LL;
  v17 = 4LL;
  v19 = 4LL;
  v10 = 10;
  if ( a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)&a6[2 * v11] );
    v12 = (unsigned int)(2 * v11 + 2);
  }
  else
  {
    v12 = 10LL;
  }
  v21 = v12;
  v22 = 0;
  if ( !a6 )
    v7 = L"NULL";
  v20 = v7;
  v13 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v9;
    while ( *(_WORD *)&a7[2 * v9] );
    v10 = 2 * v9 + 2;
    v13 = a7 == 0LL;
  }
  if ( v13 )
    v8 = L"NULL";
  v24 = v10;
  v23 = v8;
  v25 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v8, (__int64)L"NULL", (__int64)v7, v12, &v15);
}
