__int64 __fastcall CmpUnlockRegistry()
{
  __int64 v0; // rdx
  __int64 result; // rax

  if ( !CmpPuntBoot )
  {
    CmpRecordRegistryLockRelease();
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v0) = 1;
    return PsBoostThreadIo((__int64)KeGetCurrentThread(), v0);
  }
  return result;
}
