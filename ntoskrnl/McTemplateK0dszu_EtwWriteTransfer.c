/*
 * XREFs of McTemplateK0dszu_EtwWriteTransfer @ 0x1405D121C
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x1405D078C (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x1405D0A70 (CarEtwWriteLiveDumpEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dszu_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const char *a5,
        const wchar_t *a6,
        char a7)
{
  const char *v7; // rdx
  const wchar_t *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-21h] BYREF
  int *v15; // [rsp+40h] [rbp-11h]
  __int64 v16; // [rsp+48h] [rbp-9h]
  const char *v17; // [rsp+50h] [rbp-1h]
  int v18; // [rsp+58h] [rbp+7h]
  int v19; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+68h] [rbp+17h]
  int v22; // [rsp+6Ch] [rbp+1Bh]
  char *v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]
  int v25; // [rsp+B8h] [rbp+67h] BYREF

  v25 = a4;
  v7 = a5;
  v8 = a6;
  v9 = -1LL;
  v15 = &v25;
  v16 = 4LL;
  if ( a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a5[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5;
  }
  v18 = v11;
  v19 = 0;
  if ( !a5 )
    v7 = "NULL";
  v17 = v7;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v12 = 2 * v9 + 2;
  }
  else
  {
    v12 = 10;
  }
  v21 = v12;
  v22 = 0;
  if ( !a6 )
    v8 = L"NULL";
  v24 = 1LL;
  v20 = v8;
  v23 = &a7;
  return McGenEventWrite_EtwWriteTransfer(
           EtwProvider_Context,
           (const EVENT_DESCRIPTOR *)BugCheckEvent,
           (const GUID *)EtwProvider,
           5u,
           &v14);
}
