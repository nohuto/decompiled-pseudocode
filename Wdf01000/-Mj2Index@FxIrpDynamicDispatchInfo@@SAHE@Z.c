__int64 __fastcall FxIrpDynamicDispatchInfo::Mj2Index(unsigned __int8 MajorFunction)
{
  __int64 result; // rax

  result = 3LL;
  switch ( MajorFunction )
  {
    case 3u:
      return 0LL;
    case 4u:
      return 1LL;
    case 0xEu:
      return 2LL;
  }
  if ( MajorFunction != 15 )
    return 4LL;
  return result;
}
