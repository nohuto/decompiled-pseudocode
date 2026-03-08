/*
 * XREFs of McTemplateK0qqz_EtwWriteTransfer @ 0x1C006281C
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00615C4 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C039AACC (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rcx
  __int64 v8; // rax
  int v9; // edx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-50h] BYREF
  int *v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  char *v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  const wchar_t *v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a4;
  v6 = a6;
  v12 = &v19;
  v13 = 4LL;
  v15 = 4LL;
  v14 = &a5;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a6[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v17 = v9;
  v18 = 0;
  if ( !a6 )
    v6 = L"NULL";
  v16 = v6;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, (__int64)a2, 4u, &v11);
}
