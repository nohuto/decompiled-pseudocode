/*
 * XREFs of HUBDSM_GettingConfigDescriptorWhileRenuemrating @ 0x1C00212F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C002A9A4 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingConfigDescriptorWhileRenuemrating(__int64 a1)
{
  HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
