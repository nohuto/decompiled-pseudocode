__int64 __fastcall FxDevice::_RequiresRemLock(unsigned __int8 MajorCode, unsigned __int8 MinorCode)
{
  if ( MajorCode == 22 || MajorCode == 23 )
    return 1LL;
  if ( MajorCode == 27 )
    return (unsigned int)(MinorCode == 2) + 1;
  return 3LL;
}
