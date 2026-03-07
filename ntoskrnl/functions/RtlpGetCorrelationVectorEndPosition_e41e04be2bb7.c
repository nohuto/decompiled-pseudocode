__int64 __fastcall RtlpGetCorrelationVectorEndPosition(__int64 a1, __int64 a2)
{
  int CorrelationVectorBufferLength; // eax
  int v3; // r8d
  __int64 v4; // r10
  int v5; // r9d
  __int64 i; // rdx
  __int64 result; // rax

  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, a2, 0LL);
  v5 = CorrelationVectorBufferLength;
  if ( CorrelationVectorBufferLength > 0 )
  {
    for ( i = 0LL; i < CorrelationVectorBufferLength; ++i )
    {
      if ( !*(_BYTE *)(v4 + i + 1) )
        break;
      ++v3;
    }
  }
  result = 0xFFFFFFFFLL;
  if ( v5 > v3 )
    return (unsigned int)v3;
  return result;
}
