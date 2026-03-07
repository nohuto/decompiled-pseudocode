__int64 __fastcall ACPIBuildProcessPowerResourceFailure(_QWORD *Entry)
{
  __int64 v1; // rbx

  v1 = Entry[5];
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 16), 0xFFFFFFFFFFFFFFFCuLL);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return ACPIBuildProcessGenericComplete(Entry);
}
