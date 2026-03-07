void *PpmCheckInit()
{
  void *result; // rax

  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_140C3BD78 = (__int64)PpmCheckRun;
  qword_140C3BD80 = 0LL;
  qword_140C3BD38 = (__int64)PpmCheckPeriodicStart;
  qword_140C3BD98 = 0LL;
  qword_140C3BD70 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_140C3BD40 = 0LL;
  qword_140C3BD58 = 0LL;
  qword_140C3BD30 = 0LL;
  PpmCachedSystemAllowedCpuSet = 2097153LL;
  result = memset(&qword_140C388E8, 0, 0x100uLL);
  PpmCheckExecutionLock = 0LL;
  return result;
}
