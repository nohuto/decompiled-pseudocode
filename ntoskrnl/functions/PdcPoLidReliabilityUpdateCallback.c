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
