/*
 * XREFs of ACPIWakeRestoreEnables @ 0x1C0046004
 * Callers:
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C001FB40 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 * Callees:
 *     ACPIBuildRunMethodRequest @ 0x1C0013564 (ACPIBuildRunMethodRequest.c)
 */

__int64 __fastcall ACPIWakeRestoreEnables(__int64 a1, __int64 a2)
{
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  LODWORD(a2) = ACPIBuildRunMethodRequest(
                  RootDeviceExtension,
                  (void (__fastcall *)(__int64, __int64, _QWORD))ACPIWakeRestoreEnablesCompletion,
                  a2,
                  1465077855,
                  13,
                  1);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  return (unsigned int)a2;
}
