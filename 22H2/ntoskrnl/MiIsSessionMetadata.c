/*
 * XREFs of MiIsSessionMetadata @ 0x14036A760
 * Callers:
 *     MiCombineCandidate @ 0x1403690F0 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  return (unsigned int)MiGetSystemRegionType(a1) == 1 && a1 >= qword_140C4DDE0 && a1 < qword_140C4DDE0 + 290816;
}
