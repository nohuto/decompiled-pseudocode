/*
 * XREFs of ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C005408C
 * Callers:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0053EC0 (EtwTraceAcquiredExclusiveUserCrit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall UserCritTelemetry::UpdateUserCritInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 *v7; // rcx
  unsigned __int64 result; // rax
  _QWORD v9[16]; // [rsp+0h] [rbp-39h] BYREF

  v9[14] = -1LL;
  v4 = a3;
  v9[0] = 10LL;
  v5 = (unsigned __int64)(1000000 * a2) / gliQpcFreq.QuadPart;
  v9[1] = 25LL;
  v6 = 0LL;
  v7 = v9;
  v9[2] = 50LL;
  v9[3] = 100LL;
  v9[4] = 250LL;
  v9[5] = 500LL;
  v9[6] = 1000LL;
  v9[7] = 2500LL;
  v9[8] = 5000LL;
  v9[9] = 10000LL;
  v9[10] = 25000LL;
  v9[11] = 50000LL;
  v9[12] = 100000LL;
  v9[13] = 200000LL;
  while ( v5 > *v7 )
  {
    v6 = (unsigned int)(v6 + 1);
    ++v7;
    if ( (unsigned int)v6 >= 0xF )
      goto LABEL_6;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * (v6 + 15 * v4) + 4400));
LABEL_6:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8 * v4 + 4760), v5);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * v4 + 4808));
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v4 + 4784), 0LL, 0LL);
  if ( v5 > result )
    _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v4 + 4784), v5);
  return result;
}
