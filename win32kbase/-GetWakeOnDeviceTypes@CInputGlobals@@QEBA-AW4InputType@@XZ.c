/*
 * XREFs of ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x1C00BC680
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C009C980 (xxxSystemParametersInfo.c)
 *     RIMIsWakeCapableDevice @ 0x1C00BBEF0 (RIMIsWakeCapableDevice.c)
 * Callees:
 *     <none>
 */

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
