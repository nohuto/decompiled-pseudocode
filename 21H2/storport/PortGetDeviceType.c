/*
 * XREFs of PortGetDeviceType @ 0x1C00740D4
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001B320 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C001B410 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001B6A8 (RaidUnitGetHardwareIds.c)
 *     RaidUnitRegisterInterfaces @ 0x1C001BC54 (RaidUnitRegisterInterfaces.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C007376C (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0074C34 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  __int64 v1; // rax

  v1 = 21LL;
  if ( a1 < 0x16 )
    v1 = a1;
  return &PortScsiDeviceTypes[4 * v1];
}
