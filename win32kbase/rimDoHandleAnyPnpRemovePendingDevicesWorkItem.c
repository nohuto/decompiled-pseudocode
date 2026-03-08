/*
 * XREFs of rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x1C01C8300
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C003A13C (rimHandleAnyPnpRemovePendingDevices.c)
 */

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
