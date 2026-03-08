/*
 * XREFs of AuthzBasepFindTokenAttribute @ 0x14066C6D4
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x14066C748 (AuthzBasepQueryTokenAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140297EF8 (AuthzBasepEqualUnicodeString.c)
 */

__int64 **__fastcall AuthzBasepFindTokenAttribute(const UNICODE_STRING *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  const UNICODE_STRING **i; // rsi

  v1 = 0LL;
  v2 = 0;
  for ( i = (const UNICODE_STRING **)&TokenAttributeLookupTable; !AuthzBasepEqualUnicodeString(a1, *i); i += 2 )
  {
    if ( ++v2 >= 4 )
      return (__int64 **)v1;
  }
  return &(&TokenAttributeLookupTable)[2 * v2];
}
