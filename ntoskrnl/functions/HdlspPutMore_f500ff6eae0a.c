char __fastcall HdlspPutMore(bool *a1)
{
  int v2; // ebx
  char result; // al
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[16]; // [rsp+28h] [rbp-20h] BYREF

  Interval.QuadPart = -100000LL;
  v2 = 0;
  HdlspPutString("----Press <Enter> for more----");
  if ( HdlspGetLine(v5, 0xAuLL) )
  {
LABEL_7:
    *a1 = v5[0] == 3;
    do
      result = HdlspGetLine(v5, 0xAuLL);
    while ( result );
  }
  else
  {
    while ( 1 )
    {
      if ( (HeadlessGlobals[6] & 2) == 0 )
      {
        KeDelayExecutionThread(0, 0, &Interval);
        if ( (unsigned int)++v2 > 0x1770 )
          break;
      }
      if ( HdlspGetLine(v5, 0xAuLL) )
        goto LABEL_7;
    }
    result = HdlspPutString("\r\n No input was detected: auto-scrolling was engaged...\r\n");
    *a1 = 0;
  }
  return result;
}
