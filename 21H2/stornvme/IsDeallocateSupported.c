/*
 * XREFs of IsDeallocateSupported @ 0x1C0005BA8
 * Callers:
 *     ScsiUnmapRequest @ 0x1C0002794 (ScsiUnmapRequest.c)
 *     FormInquiryBlockLimitsData @ 0x1C0005D3C (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0011DB0 (FormInquiryBlockProvisioningData.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDeallocateSupported(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 56) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 1624) + 520LL) & 4) == 0 )
    return 0;
  return v1;
}
