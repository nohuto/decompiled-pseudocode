/*
 * XREFs of DmrGetNextRemappingStructure @ 0x14037BFAC
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x14037BB68 (HalpIvtProcessDmarTable.c)
 *     DmrEnumerateSatcDevices @ 0x14037BC00 (DmrEnumerateSatcDevices.c)
 *     DmrFindDrhdForDeviceScope @ 0x14037BC80 (DmrFindDrhdForDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x14037BD30 (DmrEnumerateRmrrDomains.c)
 *     DmrValidateDeviceScope @ 0x14037BE8C (DmrValidateDeviceScope.c)
 *     IvtCheckForReservedRegion @ 0x14080BF70 (IvtCheckForReservedRegion.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DmrGetNextRemappingStructure(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v2 = 0LL;
  v3 = a1 + *(unsigned int *)(a1 + 4);
  if ( v3 <= a1 )
    return 0LL;
  if ( a2 )
    v4 = a2 + *(unsigned __int16 *)(a2 + 2);
  else
    v4 = a1 + 48;
  if ( v4 + 4 <= v3 && v4 + 4 > v4 )
  {
    v5 = v4 + *(unsigned __int16 *)(v4 + 2);
    if ( v5 > v4 && v5 <= v3 )
      return v4;
  }
  return v2;
}
