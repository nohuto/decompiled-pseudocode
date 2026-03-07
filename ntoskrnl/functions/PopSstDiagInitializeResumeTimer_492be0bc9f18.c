unsigned __int64 PopSstDiagInitializeResumeTimer()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rbp
  char v2; // si
  LARGE_INTEGER PerformanceCounter; // rdi
  unsigned __int64 result; // rax
  __int64 v5; // rdi
  __int64 HypervisorTscAdjustment; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  qword_140C39050 = 0LL;
  v0 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  PopSstDiagResumeClock = 0LL;
  v1 = 1000000LL * KeGetCurrentPrcb()->MHz;
  v2 = ((__int64 (__fastcall *)(unsigned __int64 *, __int64 *))off_140C01AB0[0])(&v7, &v8);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  result = PpmConvertTime(__rdtsc() - v8 - v7, v1, PopQpcFrequency);
  v5 = PerformanceCounter.QuadPart - result;
  if ( PoResumeFromHibernate || v2 )
  {
    HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
    v7 -= HypervisorTscAdjustment;
    v0 = HypervisorTscAdjustment;
    result = PpmConvertTime(v7, v1, PopQpcFrequency);
    v5 -= result;
  }
  PopSstDiagResumeClock = __PAIR128__(v0, v7);
  qword_140C39050 = v5;
  return result;
}
