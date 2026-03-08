/*
 * XREFs of HalpTimerStopProfileInterrupt @ 0x1405086E8
 * Callers:
 *     HalpTimerSelectRoles @ 0x140376F4C (HalpTimerSelectRoles.c)
 *     DefaultDisableMonitoring @ 0x14050A8B0 (DefaultDisableMonitoring.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
