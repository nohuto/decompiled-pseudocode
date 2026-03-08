/*
 * XREFs of PpmParkReportMask @ 0x1402EDF00
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140237260 (KeIsEqualAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x140399388 (KeCpuSetReportParkedProcessors.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HvlParkedVirtualProcessors @ 0x1405445A8 (HvlParkedVirtualProcessors.c)
 *     MmReportParkedProcessors @ 0x140653870 (MmReportParkedProcessors.c)
 */

char PpmParkReportMask()
{
  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KiCopyAffinityEx((__int64)&PpmPerfReportedCoreParkingMask, word_140C0D802, PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      PpmParkMaskHandler(PpmCheckTime, PpmPerfCoreParkingMask);
    KeCpuSetReportParkedProcessors(PpmPerfCoreParkingMask);
    MmReportParkedProcessors();
  }
  return 1;
}
