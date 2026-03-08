/*
 * XREFs of IsDeallocateSupported @ 0x1C0014A90
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x1C0011F6C (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0012194 (FormInquiryBlockProvisioningData.c)
 *     ScsiUnmapRequest @ 0x1C001ADEC (ScsiUnmapRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDeallocateSupported(__int64 a1)
{
  char v1; // r8

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 520LL) & 4) == 0 && !*(_BYTE *)(a1 + 4347) )
  {
    return 0;
  }
  return v1;
}
