/*
 * XREFs of RtlpAllocateHeapRaiseException @ 0x1405A9730
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1402E0BC8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlRaiseException @ 0x140364BF0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall RtlpAllocateHeapRaiseException(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  ULONG_PTR v6[20]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v6, 0, 0x98uLL);
  LODWORD(v6[3]) = 1;
  return RtlRaiseException(
           (ULONG_PTR)v6,
           v2,
           v3,
           v4,
           3221225495LL,
           0LL,
           (__int64)RtlRaiseException,
           v6[3],
           a1,
           v6[5],
           v6[6],
           v6[7],
           v6[8],
           v6[9],
           v6[10],
           v6[11],
           v6[12],
           v6[13],
           v6[14],
           v6[15],
           v6[16],
           v6[17],
           v6[18],
           v6[19]);
}
