/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x1C002C39C
 * Callers:
 *     ACPIVectorDisable @ 0x1C0004FF0 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C00050C0 (ACPIVectorEnable.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C000518C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C001E0B8 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C002BFE0 (ACPIGpeBuildWakeMasks.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C002C3F8 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIVectorClear @ 0x1C0043DE0 (ACPIVectorClear.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C002C6DC (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToGpeRegister(__int64 a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // edx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v1, 0LL, 0LL);
  v2 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( v1 >= v2 )
    return ((v1 - v2) >> 3) + *((unsigned __int16 *)AcpiInformation + 43);
  else
    return v1 >> 3;
}
