/*
 * XREFs of NormalizationListEntry_Alloc @ 0x1405B5AF0
 * Callers:
 *     RtlpGetNormalization @ 0x1409C896C (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 NormalizationListEntry_Alloc()
{
  return ExAllocatePool2(256LL, 144LL, 1164734286LL);
}
