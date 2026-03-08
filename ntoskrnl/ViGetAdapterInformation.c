/*
 * XREFs of ViGetAdapterInformation @ 0x140AC5E2C
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405CC330 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall ViGetAdapterInformation(int a1)
{
  return ViGetAdapterInformationInternal(a1);
}
