ULONGLONG *__fastcall CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(ULONGLONG *pv)
{
  ULONGLONG TickCount64; // rax
  CProcessAttributionManager *v3; // rcx
  PTP_WORK ThreadpoolWork; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  TickCount64 = GetTickCount64();
  pv[1] = 0LL;
  v3 = qword_1803E2C88;
  pv[4] = 0LL;
  pv[5] = 0LL;
  pv[6] = 0LL;
  *pv = TickCount64;
  pv[7] = (ULONGLONG)CProcessAttributionManager::CreateObserver(v3);
  *((_DWORD *)pv + 16) = 0;
  ThreadpoolWork = CreateThreadpoolWork(CProcessResourceAttributionReporter::ReportHighResourceUsageWorker, pv, 0LL);
  pv[1] = (ULONGLONG)ThreadpoolWork;
  if ( !ThreadpoolWork )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return pv;
}
