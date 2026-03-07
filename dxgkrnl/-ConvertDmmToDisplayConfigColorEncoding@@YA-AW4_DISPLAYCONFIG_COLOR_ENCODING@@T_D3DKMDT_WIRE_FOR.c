__int64 __fastcall ConvertDmmToDisplayConfigColorEncoding(unsigned int a1)
{
  if ( (a1 & 0xFC) != 0 )
    return 0LL;
  if ( (a1 & 0x3F00) != 0 )
    return 1LL;
  if ( (a1 & 0xFC000) != 0 )
    return 2LL;
  if ( (a1 & 0x3F00000) != 0 )
    return 3LL;
  return a1 < 0x4000000 ? -1 : 4;
}
