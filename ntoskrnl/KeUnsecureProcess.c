/*
 * XREFs of KeUnsecureProcess @ 0x14056D228
 * Callers:
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KeUnsecureProcess(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = *(_QWORD *)(a1 + 992);
  *(_QWORD *)(a1 + 992) = 0LL;
  if ( v1 )
  {
    memset(v3, 0, 0x68uLL);
    v3[1] = v1;
    return VslpEnterIumSecureMode(2u, 30, 0, (__int64)v3);
  }
  return result;
}
