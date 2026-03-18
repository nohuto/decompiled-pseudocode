/*
 * XREFs of PopFxDestroyDripsBlockingDeviceList @ 0x14098D024
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405CB06C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDripsWatchdogCallbackHandler @ 0x14099613C (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x1409A0958 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PopFxReleaseDevice @ 0x1405CD96C (PopFxReleaseDevice.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140943144 (IoLockUnlockPnpDeviceTree.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDripsBlockingDeviceList(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  void *v4; // rcx

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v2[1] != a1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    v4 = (void *)v2[3];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x4D584650u);
      v2[3] = 0LL;
      *((_DWORD *)v2 + 8) = 0;
    }
    PopFxReleaseDevice((__int64)(v2 - 109));
  }
  ExReleasePushLockEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  IoLockUnlockPnpDeviceTree(0);
}
