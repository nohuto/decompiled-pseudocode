/*
 * XREFs of ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C03025A0
 * Callers:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1C02FE6F8 (-AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02FE7F0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C0302ABC (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1C0025258 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::TimeInterval::GetElapsed(__int64 a1)
{
  __int64 v2; // rdi
  LARGE_INTEGER v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v7.QuadPart = 0LL;
  v6 = 0LL;
  v3 = KeQueryPerformanceCounter(&v7);
  if ( (int)RtlULongLongMult(v3.QuadPart - a1, 0x989680uLL, &v6) >= 0 )
    return v6 / v7.QuadPart;
  if ( (int)RtlULongLongMult(v4, 0x3E8uLL, &v6) >= 0 && (int)RtlULongLongMult(v6 / v7.QuadPart, 0x2710uLL, &v6) >= 0 )
    return v6;
  return v2;
}
