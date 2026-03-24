/*
 * XREFs of McTemplateK0qqqszq_EtwWriteTransfer @ 0x1C004EC14
 * Callers:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1C02BFDCC (-AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02BFEC4 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0001FD8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

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
  const char *v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  const wchar_t *v14; // rax
  int v15; // ecx
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
  v9 = a7;
  v18 = &v32;
  v19 = 4LL;
  v20 = &a5;
  v11 = -1LL;
  v21 = 4LL;
  v23 = 4LL;
  v22 = &a6;
  if ( a7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a7[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v13 = 5;
  }
  v25 = v13;
  v14 = a8;
  if ( !a7 )
    v9 = "NULL";
  v26 = 0;
  v24 = v9;
  if ( a8 )
  {
    do
      ++v11;
    while ( a8[v11] );
    v15 = 2 * v11 + 2;
  }
  else
  {
    v15 = 10;
  }
  v28 = v15;
  v29 = 0;
  if ( !a8 )
    v14 = L"NULL";
  v31 = 4LL;
  v27 = v14;
  v30 = &a9;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, (__int64)a2, 7u, &v17);
}
