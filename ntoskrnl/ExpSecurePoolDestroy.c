/*
 * XREFs of ExpSecurePoolDestroy @ 0x14060AB84
 * Callers:
 *     ExDestroyPool @ 0x140604A80 (ExDestroyPool.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall ExpSecurePoolDestroy(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  _QWORD v3[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = BugCheckParameter2;
  result = VslpEnterIumSecureMode(2u, 80, 0, (__int64)v3);
  if ( (int)result < 0 )
    KeBugCheckEx(0xC2u, 0x10uLL, BugCheckParameter2, (int)result, 0LL);
  return result;
}
