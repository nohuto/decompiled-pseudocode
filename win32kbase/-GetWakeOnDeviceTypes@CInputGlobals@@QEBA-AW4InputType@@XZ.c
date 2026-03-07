__int64 __fastcall CInputGlobals::GetWakeOnDeviceTypes(__int64 a1)
{
  unsigned int v2; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v2 = *(_DWORD *)(a1 + 100);
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
