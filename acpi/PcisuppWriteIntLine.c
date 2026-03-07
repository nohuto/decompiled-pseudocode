__int64 __fastcall PcisuppWriteIntLine(__int64 a1, char a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&PciRouteInterfaceLock, 1u);
  v5 = 0;
  if ( InterruptRouting )
  {
    LOBYTE(v4) = a2;
    (*((void (__fastcall **)(__int64, __int64))InterruptRouting + 6))(a1, v4);
  }
  else
  {
    v5 = -1073741823;
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  return v5;
}
