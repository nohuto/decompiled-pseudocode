char CcHasGlobalTelemetryChanged()
{
  char result; // al

  result = 0;
  if ( qword_140C5F520 || qword_140C5F528 || qword_140C5F530 || qword_140C5F538 || qword_140C5F540 )
    return 1;
  return result;
}
