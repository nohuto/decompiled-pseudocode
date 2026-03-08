/*
 * XREFs of HalpUpdatePerDeviceMsiLimitInformation @ 0x140B6C9A4
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x1403A9F1C (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     HalpIsHvRemappingInterrupts @ 0x14085FBC8 (HalpIsHvRemappingInterrupts.c)
 */

char HalpUpdatePerDeviceMsiLimitInformation()
{
  __int16 v0; // dx
  struct _KPRCB *CurrentPrcb; // rax

  v0 = 2048;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) == 0 )
  {
    LOBYTE(CurrentPrcb) = HalpIsHvRemappingInterrupts();
    if ( (_BYTE)CurrentPrcb )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( CurrentPrcb->CpuVendor == 1 )
        v0 = 512;
    }
    goto LABEL_5;
  }
  if ( (HalpIrtAllocationFlags & 4) != 0 )
    v0 = HalpIrtEntriesPerDeviceAperture;
  LOBYTE(CurrentPrcb) = v0 - 1;
  if ( (unsigned __int16)(v0 - 1) <= 0x7FFu )
LABEL_5:
    HalpInterruptPerDeviceMsiLimit = v0;
  return (char)CurrentPrcb;
}
