/*
 * XREFs of RtlpValidAttributeAce @ 0x140615A84
 * Callers:
 *     RtlValidAcl @ 0x1406513E0 (RtlValidAcl.c)
 * Callees:
 *     RtlpValidRelativeAttribute @ 0x140615AF4 (RtlpValidRelativeAttribute.c)
 */

bool __fastcall RtlpValidAttributeAce(__int64 a1)
{
  unsigned __int64 v1; // rdx
  int v2; // eax
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(unsigned __int16 *)(a1 + 2);
    if ( ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1 && (unsigned int)v1 >= 0x10 && *(_BYTE *)(a1 + 8) == 1 )
    {
      v2 = *(unsigned __int8 *)(a1 + 9);
      if ( (unsigned __int8)v2 <= 0xFu
        && v1 >= (unsigned __int64)(unsigned int)(4 * v2 + 16) + 20
        && (unsigned __int8)RtlpValidRelativeAttribute(
                              a1 + 8 + (unsigned int)(4 * v2 + 8),
                              (unsigned int)(v1 - (4 * v2 + 8) - 8)) )
      {
        return 1;
      }
    }
  }
  return result;
}
