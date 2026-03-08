/*
 * XREFs of McTemplateK0pqz_EtwWriteTransfer @ 0x1C0001F80
 * Callers:
 *     HUBDRIVER_EtwRundownHub @ 0x1C007685C (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0078890 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0001680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqz_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  va_list v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  va_list v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  const wchar_t *v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  __int64 v15; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  const wchar_t *v19; // [rsp+B8h] [rbp+38h]
  va_list va2; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, const wchar_t *);
  v9 = 8LL;
  va_copy(v8, va);
  va_copy(v10, va1);
  v11 = 4LL;
  if ( v19 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v19[v3] );
    v4 = (unsigned int)(2 * v3 + 2);
  }
  else
  {
    v4 = 10LL;
  }
  v14 = 0;
  v5 = L"NULL";
  v13 = v4;
  if ( v19 )
    v5 = v19;
  v12 = v5;
  return McGenEventWrite_EtwWriteTransfer(v4, a2, a3, 4u, &v7);
}
