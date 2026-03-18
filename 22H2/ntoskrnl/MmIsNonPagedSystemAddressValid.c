/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x14046B520
 * Callers:
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140AE0D00 (VfMiscIoInitializeWorkItem_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AE2700 (ViMiscValidateSynchronizationObject.c)
 *     VfPnpVerifyNewRequest @ 0x140AE8350 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE8430 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // eax

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  return SystemRegionType != 6 && SystemRegionType != 1;
}
