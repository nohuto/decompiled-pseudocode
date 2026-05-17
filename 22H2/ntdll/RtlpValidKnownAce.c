/*
 * XREFs of RtlpValidKnownAce @ 0x180037900
 * Callers:
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpValidKnownAce(__int64 a1)
{
  unsigned __int64 v1; // rdx
  char result; // al

  if ( !a1 )
    return 0;
  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v1 )
    return 0;
  if ( (unsigned int)v1 < 0x10 )
    return 0;
  result = 1;
  if ( *(_BYTE *)(a1 + 8) != 1
    || *(_BYTE *)(a1 + 9) > 0xFu
    || v1 < 4 * (unsigned __int64)*(unsigned __int8 *)(a1 + 9) + 16 )
  {
    return 0;
  }
  return result;
}
