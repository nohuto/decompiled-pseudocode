void __fastcall rimDoHandleAnyPnpRemovePendingDevicesWorkItem(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  RIMLockExclusive(v1 + 760);
  *(_DWORD *)(v1 + 1116) = 0;
  *(_QWORD *)(v1 + 768) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 760, 0LL);
  KeLeaveCriticalRegion();
  rimHandleAnyPnpRemovePendingDevices(v1);
}
