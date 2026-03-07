__int64 __fastcall BcdSetSystemStore(__int64 a1)
{
  char IsOfflineHandle; // si
  int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // r8d
  int v6; // [rsp+48h] [rbp+10h] BYREF

  IsOfflineHandle = BiIsOfflineHandle(a1);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 < 0
    || (v6 = 1,
        v3 = BiSetRegistryValue(a1, L"System", (__int64)L"Description", 4u, &v6, 4u),
        BiReleaseBcdSyncMutant(IsOfflineHandle),
        v3 < 0) )
  {
    BiLogMessage(4LL, L"BcdSetSystemStore: Failed to set store as system store.Status: %x", (unsigned int)v3);
    return (unsigned int)v3;
  }
  else
  {
    result = BiMarkTreatAsSystemStore(a1, 1);
    if ( (int)result < 0 )
    {
      BiLogMessage(4LL, L"BcdSetSystemStore: Failed to set mark as system store.Status: %x", (unsigned int)result);
      return v5;
    }
  }
  return result;
}
