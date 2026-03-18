/*
 * XREFs of KiInitializeNormalPriorityAntiStarvationPolicies @ 0x1403B27FC
 * Callers:
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     RtlQueryImageFileKeyOption @ 0x1406B6070 (RtlQueryImageFileKeyOption.c)
 */

int KiInitializeNormalPriorityAntiStarvationPolicies()
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    {
      if ( (unsigned int)KiNormalPriorityBoostScanLatencyTicks >= 7 )
      {
        if ( (unsigned int)KiNormalPriorityBoostScanLatencyTicks > 0x46 )
          KiNormalPriorityBoostScanLatencyTicks = 70;
      }
      else
      {
        KiNormalPriorityBoostScanLatencyTicks = 7;
      }
    }
    if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    {
      if ( (unsigned int)KiNormalPriorityBoostReadyTimeTicks >= 6 )
      {
        if ( (unsigned int)KiNormalPriorityBoostReadyTimeTicks > 0x46 )
          KiNormalPriorityBoostReadyTimeTicks = 70;
      }
      else
      {
        KiNormalPriorityBoostReadyTimeTicks = 6;
      }
    }
    if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    {
      if ( KiNormalPriorityBoostMaximumThreadReadyCount )
      {
        if ( (unsigned int)KiNormalPriorityBoostMaximumThreadReadyCount > 0xA )
          KiNormalPriorityBoostMaximumThreadReadyCount = 10;
      }
      else
      {
        KiNormalPriorityBoostMaximumThreadReadyCount = 1;
      }
    }
    result = RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
    if ( result >= 0 )
    {
      result = KiNormalPriorityBoostingPeriodMultiplier;
      if ( KiNormalPriorityBoostingPeriodMultiplier )
      {
        if ( (unsigned int)KiNormalPriorityBoostingPeriodMultiplier > 0x14 )
          KiNormalPriorityBoostingPeriodMultiplier = 20;
      }
      else
      {
        KiNormalPriorityBoostingPeriodMultiplier = 1;
      }
    }
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
