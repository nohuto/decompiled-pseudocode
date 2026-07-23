/*
 * XREFs of PopPowerAggregatorIsAtTargetState @ 0x140776584
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

bool PopPowerAggregatorIsAtTargetState()
{
  char v0; // dl

  v0 = 0;
  if ( !(_DWORD)xmmword_140C217F8 )
    return (xmmword_140C21828 & 0xFFFFFFFD) == 0;
  if ( (_DWORD)xmmword_140C217F8 != 1 )
  {
    if ( (_DWORD)xmmword_140C217F8 != 2 )
    {
      if ( (_DWORD)xmmword_140C217F8 == 3 )
        return (_DWORD)xmmword_140C21828 == 5;
      return v0;
    }
    return (xmmword_140C21828 & 0xFFFFFFFD) == 0;
  }
  if ( (_DWORD)xmmword_140C21828 == 1 )
    return *((_QWORD *)&xmmword_140C21828 + 1) == *(_QWORD *)ymmword_140C21808.m256_f32;
  return v0;
}
