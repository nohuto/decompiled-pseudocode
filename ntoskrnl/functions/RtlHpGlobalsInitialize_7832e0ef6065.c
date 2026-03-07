char RtlHpGlobalsInitialize()
{
  char result; // al

  memset(&RtlpHpHeapGlobals, 0, 0x40uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_140C6AF48 = RtlpHeapGenerateRandomValue64();
  qword_140C6AF50 = (__int64)&RtlpHeapFailureInfo;
  result = RtlIsProcessorFeaturePresent(0x2Au);
  if ( result )
    LODWORD(qword_140C6AF78) = qword_140C6AF78 | 1;
  LODWORD(qword_140C6AF78) = qword_140C6AF78 | 2;
  return result;
}
