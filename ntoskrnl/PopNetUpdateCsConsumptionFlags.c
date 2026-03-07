bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140CF7888 )
  {
    if ( (byte_140CF7949 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140CF7949 = (PopNetCompliantNicCount != 0) | byte_140CF7949 & 0xFE;
    }
  }
  return result;
}
