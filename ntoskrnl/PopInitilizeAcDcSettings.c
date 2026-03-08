/*
 * XREFs of PopInitilizeAcDcSettings @ 0x140380E04
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x1402BCB00 (PopSetNotificationWork.c)
 *     PopSetPowerSettingValue @ 0x14068CFA0 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x14068D434 (PopFindPowerSettingConfiguration.c)
 */

void PopInitilizeAcDcSettings()
{
  char v0; // bl
  _DWORD *PowerSettingConfiguration; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL, 0LL, 4LL, &v5);
  v5 = 1;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL, 1LL, 4LL, &v5);
  v0 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = (_DWORD *)PopFindPowerSettingConfiguration(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL);
  if ( PowerSettingConfiguration[14] || PowerSettingConfiguration[15] )
  {
    PowerSettingConfiguration[13] |= 1u;
    v0 = 1;
  }
  ExReleaseFastMutex(&PopSettingLock);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v0 )
      PopSetNotificationWork(0x80u, v2, v3, v4);
    PopSetNotificationWork(0x20u, v2, v3, v4);
  }
}
