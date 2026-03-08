/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x140463620
 * Callers:
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140ADCD00 (VfMiscIoInitializeWorkItem_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140ADE700 (ViMiscValidateSynchronizationObject.c)
 *     VfPnpVerifyNewRequest @ 0x140AE4350 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE4430 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // eax

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  return SystemRegionType != 6 && SystemRegionType != 1;
}
