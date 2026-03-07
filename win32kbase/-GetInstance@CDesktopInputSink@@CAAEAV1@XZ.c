struct CDesktopInputSink *CDesktopInputSink::GetInstance(void)
{
  if ( (dword_1C02D2C00 & 1) == 0 )
  {
    qword_1C02D2C08 = 0LL;
    qword_1C02D2C10 = 0LL;
    dword_1C02D2C00 |= 1u;
    xmmword_1C02D2C18 = 0LL;
  }
  return (struct CDesktopInputSink *)&qword_1C02D2C08;
}
