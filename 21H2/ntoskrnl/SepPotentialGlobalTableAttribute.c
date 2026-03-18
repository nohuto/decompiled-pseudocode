/*
 * XREFs of SepPotentialGlobalTableAttribute @ 0x1402D6A64
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140219130 (AuthzBasepEvaluateAceCondition.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x14030097C (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     SepShouldSetDelinkFlags @ 0x1407546B8 (SepShouldSetDelinkFlags.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 */

bool __fastcall SepPotentialGlobalTableAttribute(PCUNICODE_STRING String2)
{
  char v1; // al

  if ( KeGetCurrentIrql() >= 2u )
    v1 = PotentialGlobalAttributePrefixes.Length <= String2->Length
      && memcmp(PotentialGlobalAttributePrefixes.Buffer, String2->Buffer, PotentialGlobalAttributePrefixes.Length) == 0;
  else
    v1 = RtlPrefixUnicodeString(&PotentialGlobalAttributePrefixes, String2, 1u);
  return v1 != 0;
}
