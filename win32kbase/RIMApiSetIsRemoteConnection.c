/*
 * XREFs of RIMApiSetIsRemoteConnection @ 0x1C00364A8
 * Callers:
 *     RIMDoAsyncPnpWorkItem @ 0x1C0036418 (RIMDoAsyncPnpWorkItem.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00374F8 (RIMDiscoverDevicesOfInputType.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMOpenDev @ 0x1C0089058 (RIMOpenDev.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00C74B0 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00C7510 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMApiSetIsRemoteConnection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  return *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 24) == 1
      && *(_DWORD *)(SGDGetUserSessionState(v5, v4, v6, v7) + 508) != 0;
}
