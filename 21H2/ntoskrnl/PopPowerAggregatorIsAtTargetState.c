/*
 * XREFs of PopPowerAggregatorIsAtTargetState @ 0x1407763C4
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775E14 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

bool PopPowerAggregatorIsAtTargetState()
{
  char v0; // dl

  v0 = 0;
  if ( !(_DWORD)xmmword_140C21798 )
    return (xmmword_140C217C8 & 0xFFFFFFFD) == 0;
  if ( (_DWORD)xmmword_140C21798 != 1 )
  {
    if ( (_DWORD)xmmword_140C21798 != 2 )
    {
      if ( (_DWORD)xmmword_140C21798 == 3 )
        return (_DWORD)xmmword_140C217C8 == 5;
      return v0;
    }
    return (xmmword_140C217C8 & 0xFFFFFFFD) == 0;
  }
  if ( (_DWORD)xmmword_140C217C8 == 1 )
    return *((_QWORD *)&xmmword_140C217C8 + 1) == *(_QWORD *)ymmword_140C217A8.m256_f32;
  return v0;
}
