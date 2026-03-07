__int64 EtwTraceFlipManagerProducerSetContent_Enabled()
{
  unsigned int v0; // edx

  if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000000000001000uLL) == 0 )
    return 0;
  v0 = 1;
  if ( (unsigned __int8)(byte_1C02C4068 - 1) <= 2u
    || (qword_1C02C4050 & 0x8000000000001000uLL) == 0
    || (qword_1C02C4058 & 0x8000000000001000uLL) != qword_1C02C4058 )
  {
    return 0;
  }
  return v0;
}
