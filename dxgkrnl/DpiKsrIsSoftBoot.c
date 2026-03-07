char DpiKsrIsSoftBoot()
{
  char result; // al

  result = 0;
  if ( qword_1C013B9A0 )
  {
    if ( !*(_BYTE *)(qword_1C013B9A0 + 28) )
      return 1;
  }
  return result;
}
