/*
 * XREFs of PopFxDestroyDripsBlockingDeviceList @ 0x140981B94
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140586854 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140999010 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x14099E1CC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PopFxReleaseDevice @ 0x14045A79C (PopFxReleaseDevice.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140951CA0 (IoLockUnlockPnpDeviceTree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  ExReleasePushLockEx((__int64 *)&PopFxBlockingDeviceListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  IoLockUnlockPnpDeviceTree(0);
}
