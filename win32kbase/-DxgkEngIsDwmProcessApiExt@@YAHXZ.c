__int64 DxgkEngIsDwmProcessApiExt(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02D5730 && (int)qword_1C02D5730() >= 0 && qword_1C02D5738 )
    return (unsigned int)qword_1C02D5738();
  return v0;
}
