ULONG CmpIsRegistryLockAcquired()
{
  __int64 v0; // rcx

  Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage();
  v0 = *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex;
  if ( v0 )
    return *(_DWORD *)(v0 + 8);
  CmpThreadInfoLogStack();
  return ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
}
