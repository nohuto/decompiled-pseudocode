/*
 * XREFs of ntoskrnl_24 @ 0x1409F9AA0
 * Callers:
 *     ExInitLicenseData @ 0x14082D3F8 (ExInitLicenseData.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14082DE40 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
