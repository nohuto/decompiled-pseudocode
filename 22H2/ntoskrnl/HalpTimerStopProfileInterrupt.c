/*
 * XREFs of HalpTimerStopProfileInterrupt @ 0x14050A7C8
 * Callers:
 *     HalpTimerSelectRoles @ 0x14037A8FC (HalpTimerSelectRoles.c)
 *     DefaultDisableMonitoring @ 0x14050C990 (DefaultDisableMonitoring.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4540 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

void HalpTimerStopProfileInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx

  if ( HalpProfileTimer && ((*(_DWORD *)(HalpProfileTimer + 224) & 1) != 0 || !KeGetPcr()->Prcb.Number) )
  {
    InternalData = HalpTimerGetInternalData(HalpProfileTimer);
    (*(void (__fastcall **)(__int64))(v1 + 136))(InternalData);
  }
  HalpProfilingActive = 0;
}
