/*
 * XREFs of HUBDSM_GettingBOSDescriptorHeader @ 0x1C0022660
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C002B534 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingBOSDescriptorHeader(__int64 a1)
{
  HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
