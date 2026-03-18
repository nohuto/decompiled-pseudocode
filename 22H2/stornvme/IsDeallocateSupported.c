/*
 * XREFs of IsDeallocateSupported @ 0x1C0014B00
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x1C0011FDC (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0012204 (FormInquiryBlockProvisioningData.c)
 *     ScsiUnmapRequest @ 0x1C001AE5C (ScsiUnmapRequest.c)
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
