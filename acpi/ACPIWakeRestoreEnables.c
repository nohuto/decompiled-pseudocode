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
