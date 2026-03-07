struct CContentRects *CContentRects::GetInstance(void)
{
  if ( (dword_1C02D18EC & 1) == 0 )
  {
    qword_1C02D4EB0 = 0LL;
    qword_1C02D4EB8 = 0LL;
    dword_1C02D18EC |= 1u;
    memset(&unk_1C02D4EC0, 0, 0x40uLL);
    dword_1C02D4F00 = 0;
  }
  return (struct CContentRects *)&qword_1C02D4EB0;
}
