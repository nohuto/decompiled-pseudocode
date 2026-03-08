/*
 * XREFs of HalpFirmwareInitDiscard @ 0x140B68B70
 * Callers:
 *     HalpFirmwareInitSystem @ 0x140A8E380 (HalpFirmwareInitSystem.c)
 * Callees:
 *     HalpEfiInitialization @ 0x140B68BC0 (HalpEfiInitialization.c)
 */

__int64 HalpFirmwareInitDiscard()
{
  off_140C01C50[0] = (__int64 (__fastcall *)())HalpQueryCapsuleCapabilities;
  off_140C01C58[0] = HalpUpdateCapsule;
  off_140C01D50[0] = (__int64 (__fastcall *)())HalpIsEFIRuntimeActive;
  off_140C01D90[0] = (__int64 (__fastcall *)())HalpEnumerateEnvironmentVariablesWithFilter;
  return HalpEfiInitialization();
}
