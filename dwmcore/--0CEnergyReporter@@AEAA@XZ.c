/*
 * XREFs of ??0CEnergyReporter@@AEAA@XZ @ 0x1800D618C
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800D5BCC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1800D6308 (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

CEnergyReporter *__fastcall CEnergyReporter::CEnergyReporter(_DWORD *pv)
{
  ULONGLONG TickCount64; // rax
  CProcessAttributionManager *v3; // rcx
  PTP_WORK ThreadpoolWork; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  TickCount64 = GetTickCount64();
  v3 = qword_1803E2C88;
  *(_QWORD *)pv = TickCount64;
  pv[2] = 0;
  *((_QWORD *)pv + 2) = 0LL;
  *((_QWORD *)pv + 3) = 0LL;
  *((_QWORD *)pv + 4) = 0LL;
  pv[10] = 0;
  *((_QWORD *)pv + 6) = CProcessAttributionManager::CreateObserver(v3);
  *((_QWORD *)pv + 7) = 0LL;
  pv[16] = 0;
  *((_QWORD *)pv + 9) = 0LL;
  *((_WORD *)pv + 40) = 0;
  *((_QWORD *)pv + 11) = 0LL;
  *((_QWORD *)pv + 12) = 0LL;
  *((_QWORD *)pv + 13) = 0LL;
  pv[28] = 0;
  ThreadpoolWork = CreateThreadpoolWork(CEnergyReporter::SendReportToE3Worker, pv, 0LL);
  *((_QWORD *)pv + 9) = ThreadpoolWork;
  if ( !ThreadpoolWork )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return (CEnergyReporter *)pv;
}
