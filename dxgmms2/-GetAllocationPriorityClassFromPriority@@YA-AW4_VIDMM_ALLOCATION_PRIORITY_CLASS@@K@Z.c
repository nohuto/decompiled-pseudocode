__int64 __fastcall GetAllocationPriorityClassFromPriority(unsigned int a1)
{
  if ( a1 <= 0x28000000 )
    return 0LL;
  if ( a1 < 0x78000000 )
    return 1LL;
  if ( a1 >= 0xA0000000 )
    return 4 - (unsigned int)(a1 < 0xC8000000);
  return 2LL;
}
