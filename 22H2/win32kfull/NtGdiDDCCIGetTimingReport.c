/*
 * XREFs of NtGdiDDCCIGetTimingReport @ 0x1C0271C00
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x1C0270F9C (-DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetTimingReport(CMonitorAPI *a1, _QWORD *Address)
{
  int TimingReport; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v5 = 0LL;
  v6 = 0;
  TimingReport = CMonitorAPI::DdcciGetTimingReport(a1, a1, (struct _MC_TIMING_REPORT *)&v5);
  if ( TimingReport >= 0 )
  {
    ProbeForWrite(Address, 9uLL, 1u);
    *((_BYTE *)Address + 8) = v6;
    *Address = v5;
  }
  return (unsigned int)TimingReport;
}
