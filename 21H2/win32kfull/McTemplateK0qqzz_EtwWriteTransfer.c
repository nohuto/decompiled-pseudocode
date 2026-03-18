/*
 * XREFs of McTemplateK0qqzz_EtwWriteTransfer @ 0x1C01E62D8
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C00A28C0 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C01E626C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0qqzz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const char *a6,
        const char *a7)
{
  const char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  const char *v12; // rcx
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
  v16 = &v26;
  v17 = 4LL;
  v18 = &a5;
  v8 = -1LL;
  v19 = 4LL;
  v9 = 10LL;
  if ( a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)&a6[2 * v10] );
    v11 = (unsigned int)(2 * v10 + 2);
  }
  else
  {
    v11 = 10LL;
  }
  v12 = a7;
  v21 = v11;
  v22 = 0;
  if ( !a6 )
    v7 = L"NULL";
  v20 = v7;
  v13 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v8;
    while ( *(_WORD *)&a7[2 * v8] );
    v9 = (unsigned int)(2 * v8 + 2);
    v13 = a7 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v24 = v9;
  v23 = v12;
  v25 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v12, (__int64)v7, v11, v9, &v15);
}
