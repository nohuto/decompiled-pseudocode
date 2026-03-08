/*
 * XREFs of ntoskrnl_24 @ 0x1409F6C30
 * Callers:
 *     ExInitLicenseData @ 0x140819CE8 (ExInitLicenseData.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14081A5DC (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
