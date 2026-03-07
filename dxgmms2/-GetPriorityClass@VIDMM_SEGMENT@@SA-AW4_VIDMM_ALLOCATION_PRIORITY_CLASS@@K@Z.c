__int64 __fastcall VIDMM_SEGMENT::GetPriorityClass(unsigned int a1)
{
  if ( a1 >= 0xC8000000 )
    return 4LL;
  if ( a1 >= 0xA0000000 )
    return 3LL;
  if ( a1 < 0x78000000 )
    return a1 >= 0x50000000;
  return 2LL;
}
