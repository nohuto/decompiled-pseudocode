/*
 * XREFs of SepPotentialGlobalTableAttribute @ 0x140241AF4
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402F24D0 (AuthzBasepEvaluateAceCondition.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402F2FB0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepShouldSetDelinkFlags @ 0x14060E6EC (SepShouldSetDelinkFlags.c)
 * Callees:
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 */

char __fastcall SepPotentialGlobalTableAttribute(PCUNICODE_STRING String2)
{
  UNICODE_STRING *v2; // rbx
  int v3; // edi
  char result; // al

  v2 = &PotentialGlobalAttributePrefixes;
  v3 = 0;
  while ( 1 )
  {
    if ( KeGetCurrentIrql() >= 2u )
      result = v2->Length <= String2->Length && memcmp(v2->Buffer, String2->Buffer, v2->Length) == 0;
    else
      result = RtlPrefixUnicodeString(v2, String2, 1u);
    if ( result )
      break;
    ++v3;
    ++v2;
    if ( v3 )
      return result;
  }
  return 1;
}
