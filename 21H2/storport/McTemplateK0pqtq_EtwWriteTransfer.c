/*
 * XREFs of McTemplateK0pqtq_EtwWriteTransfer @ 0x1C003D990
 * Callers:
 *     StorPortAdapterDirectedPowerDown @ 0x1C00403C0 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0040EB0 (StorPortAdapterPowerNotRequiredStep1.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DC64 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqtq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-21h] BYREF
  va_list v6; // [rsp+50h] [rbp-11h]
  __int64 v7; // [rsp+58h] [rbp-9h]
  va_list v8; // [rsp+60h] [rbp-1h]
  __int64 v9; // [rsp+68h] [rbp+7h]
  int *v10; // [rsp+70h] [rbp+Fh]
  __int64 v11; // [rsp+78h] [rbp+17h]
  va_list v12; // [rsp+80h] [rbp+1Fh]
  __int64 v13; // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+C8h] [rbp+67h] BYREF
  va_list va; // [rsp+C8h] [rbp+67h]
  __int64 v16; // [rsp+D0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+D0h] [rbp+6Fh]
  __int64 v18; // [rsp+D8h] [rbp+77h]
  va_list va2; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, _QWORD);
  v7 = 8LL;
  v4 = 0;
  va_copy(v6, va);
  va_copy(v8, va1);
  v10 = &v4;
  v9 = 4LL;
  va_copy(v12, va2);
  v11 = 4LL;
  v13 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 5u, &v5);
}
