__int64 (*GreDwmDesktopOverlaysEnabled())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D6048;
  if ( qword_1C02D6048 )
    return (__int64 (*)(void))qword_1C02D6048();
  return result;
}
