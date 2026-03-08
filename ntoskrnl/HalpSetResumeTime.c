/*
 * XREFs of HalpSetResumeTime @ 0x14051A258
 * Callers:
 *     HalpEfiInitializeOnResume @ 0x14050B390 (HalpEfiInitializeOnResume.c)
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     ExLocalTimeToSystemTime @ 0x1402D10A0 (ExLocalTimeToSystemTime.c)
 *     HalpSetVirtualRtc @ 0x1402D13F0 (HalpSetVirtualRtc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpQueryVirtualRtc @ 0x1405094B0 (HalpQueryVirtualRtc.c)
 */

void __fastcall HalpSetResumeTime(LARGE_INTEGER *a1, int a2)
{
  __int64 v2; // rax
  NTSTATUS v3; // ecx
  unsigned __int64 v4; // r10
  ULONGLONG v5; // r9
  LARGE_INTEGER v6[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG pullResult; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v6[0].QuadPart = 0LL;
  v8 = 0LL;
  pullResult = 0LL;
  if ( a2 )
  {
    if ( HalpResumeFromHibernate )
    {
      if ( a2 == 1 )
      {
        if ( (HalpResumeFlags & 1) == 0 && HalpResumeTime.QuadPart )
        {
          if ( (HalpResumeFlags & 2) == 0 && !ExpRealTimeIsUniversal )
            ExLocalTimeToSystemTime(&HalpResumeTime, &HalpResumeTime);
          v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C01C00)(&v8);
          v3 = RtlULongLongMult(v2 - HalpTimeStampAtResume, 0x989680uLL, &pullResult);
          v5 = pullResult / v8;
          if ( v3 < 0 )
            v5 = 10000000 * (v4 / v8) + 10000000 * (v4 % v8) / v8;
          HalpResumeTime.QuadPart += v5;
        }
      }
      else if ( a2 == 2 )
      {
        if ( (HalpResumeFlags & 1) != 0
          || !HalpResumeTime.QuadPart
          || HalpQueryVirtualRtc(v6, 0LL) && HalpResumeTime.QuadPart < v6[0].QuadPart )
        {
          HalpVrtcTimeStale = 1;
        }
        else
        {
          HalpSetVirtualRtc((__int64 *)&HalpResumeTime);
          HalpResumeTime.QuadPart = 0LL;
        }
      }
    }
  }
  else if ( a1 )
  {
    HalpResumeTime = a1[15];
    HalpTimeStampAtResume = a1[16].QuadPart;
    HalpResumeFlags = a1[17].QuadPart;
  }
}
