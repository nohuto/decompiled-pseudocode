__int64 __fastcall RtlExtendCorrelationVector(__int64 a1, __int64 a2)
{
  int CorrelationVectorEndPosition; // eax
  __int64 v4; // rdx
  int CorrelationVectorBufferLength; // eax
  __int64 v6; // r8
  unsigned int v7; // r11d

  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition(a1, a2);
  if ( CorrelationVectorEndPosition < 0 )
    return (unsigned int)-2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, v4, CorrelationVectorEndPosition);
  if ( (int)v6 >= CorrelationVectorBufferLength - 3 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    *(_WORD *)(v6 + a1 + 1) = 12334;
    *(_BYTE *)(v6 + a1 + 3) = v7;
  }
  return v7;
}
