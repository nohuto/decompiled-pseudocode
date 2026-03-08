/*
 * XREFs of SmEtwLogStoreStateChange @ 0x1405C8D6C
 * Callers:
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1405C6224 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS SmEtwLogStoreStateChange(REGHANDLE *a1, __int64 a2, ...)
{
  REGHANDLE v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-38h] BYREF
  va_list v5; // [rsp+50h] [rbp-28h]
  __int64 v6; // [rsp+58h] [rbp-20h]
  __int64 v7; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+18h]
  va_list va1; // [rsp+98h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _QWORD);
  v2 = *a1;
  va_copy((va_list)v4.Ptr, va);
  va_copy(v5, va1);
  *(_QWORD *)&v4.Size = 8LL;
  v6 = 8LL;
  return EtwWriteEx(v2, (PCEVENT_DESCRIPTOR)StEventStoreEmpty, 0LL, 1u, 0LL, 0LL, 2u, &v4);
}
