/*
 * XREFs of PopUsbErrorWNFNotificationCallback @ 0x140993110
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x1403C0538 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140793060 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopUsbErrorWNFNotificationCallback(__int64 a1)
{
  int v1; // edi
  int v2; // ebx
  unsigned int v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  _DWORD v6[4]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 12;
  v1 = 0;
  v2 = ExQueryWnfStateData(a1, &v5, v6, &v4);
  if ( v2 >= 0 )
  {
    if ( v4 == 12 )
    {
      LOBYTE(v1) = v6[2] == 1;
      PopAcquireRwLockExclusive((ULONG_PTR)&PopWeakChargerLock);
      PopWeakChargerNotificationUsbStack = v1;
      PopBatteryQueueWork(0x40u);
      PopReleaseRwLock((ULONG_PTR)&PopWeakChargerLock);
    }
    else
    {
      return 128;
    }
  }
  return (unsigned int)v2;
}
