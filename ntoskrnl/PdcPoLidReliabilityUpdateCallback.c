/*
 * XREFs of PdcPoLidReliabilityUpdateCallback @ 0x140828FA0
 * Callers:
 *     PopLidReliabilityInit @ 0x14038FDA0 (PopLidReliabilityInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopSetPowerSettingValueAcDc @ 0x14073BE70 (PopSetPowerSettingValueAcDc.c)
 */

void __fastcall PdcPoLidReliabilityUpdateCallback(char a1)
{
  BOOL v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 != 0;
  _InterlockedExchange(&PopLidStateIsReliable, v2);
  PopSetPowerSettingValueAcDc(&GUID_LIDSWITCH_STATE_RELIABILITY, 4u, &v2);
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE1(PopBsdPowerTransitionExtension) ^= (BYTE1(PopBsdPowerTransitionExtension) ^ (16 * a1)) & 0x10;
    PopBsdHandleRequest(2u);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
