/*
 * XREFs of McTemplateK0qqsz_EtwWriteTransfer @ 0x1C004C3C0
 * Callers:
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FEAF4 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqsz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const char *a6,
        const wchar_t *a7)
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
  char *v17; // [rsp+50h] [rbp-1h]
  __int64 v18; // [rsp+58h] [rbp+7h]
  const char *v19; // [rsp+60h] [rbp+Fh]
  int v20; // [rsp+68h] [rbp+17h]
  int v21; // [rsp+6Ch] [rbp+1Bh]
  const wchar_t *v22; // [rsp+70h] [rbp+1Fh]
  int v23; // [rsp+78h] [rbp+27h]
  int v24; // [rsp+7Ch] [rbp+2Bh]
  int v25; // [rsp+B8h] [rbp+67h] BYREF

  v25 = a4;
  v7 = a6;
  v8 = a7;
  v15 = &v25;
  v9 = -1LL;
  v16 = 4LL;
  v17 = &a5;
  v18 = 4LL;
  if ( a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a6[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5;
  }
  v20 = v11;
  v21 = 0;
  if ( !a6 )
    v7 = "NULL";
  v19 = v7;
  if ( a7 )
  {
    do
      ++v9;
    while ( a7[v9] );
    v12 = 2 * v9 + 2;
  }
  else
  {
    v12 = 10;
  }
  v23 = v12;
  v24 = 0;
  if ( !a7 )
    v8 = L"NULL";
  v22 = v8;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &DripsBlockerTracking_AddProcessEntry,
           (__int64)v8,
           5u,
           &v14);
}
