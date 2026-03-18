/*
 * XREFs of WheapInitializeInUsePageOfflineNotifications @ 0x140850CB8
 * Callers:
 *     WheaInitializeServices @ 0x140B69138 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

PVOID *WheapInitializeInUsePageOfflineNotifications()
{
  PVOID *result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  WheapInUsePageOfflineNotifyLock = 0LL;
  result = &WheapInUsePageOfflineNotifyList;
  qword_140D16D88 = (__int64)&WheapInUsePageOfflineNotifyList;
  WheapInUsePageOfflineNotifyList = &WheapInUsePageOfflineNotifyList;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  WheapInUsePageOfflineNotifyInit = 1;
  return result;
}
