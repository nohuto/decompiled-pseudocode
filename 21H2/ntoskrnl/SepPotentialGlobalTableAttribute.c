/*
 * XREFs of SepPotentialGlobalTableAttribute @ 0x14027F2A4
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14024DC80 (AuthzBasepEvaluateAceCondition.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14024E760 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepShouldSetDelinkFlags @ 0x140675C9C (SepShouldSetDelinkFlags.c)
 * Callees:
 *     memcmp @ 0x1403D29E0 (memcmp.c)
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
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
