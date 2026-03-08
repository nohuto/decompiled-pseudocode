/*
 * XREFs of VslEnableOnDemandDebugWithResponse @ 0x14093F29C
 * Callers:
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1409B32E8 (PsIumEnableOnDemandDebugWithResponse.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslEnableOnDemandDebugWithResponse(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a3;
  memset(v7, 0, 0x68uLL);
  result = 3221225506LL;
  if ( (unsigned int)v3 <= 0x50 )
  {
    v7[1] = *(_QWORD *)(a1 + 992);
    v7[2] = v3;
    memmove(&v7[3], a2, (unsigned int)v3);
    return VslpEnterIumSecureMode(2u, 19, 0, (__int64)v7);
  }
  return result;
}
