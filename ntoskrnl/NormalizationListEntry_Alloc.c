/*
 * XREFs of NormalizationListEntry_Alloc @ 0x1405B3640
 * Callers:
 *     RtlpGetNormalization @ 0x1409C5918 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 NormalizationListEntry_Alloc()
{
  return ExAllocatePool2(256LL, 144LL, 1164734286LL);
}
