__int64 __fastcall MiGetSlabAllocatorTypeByProtection(__int64 a1, char a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a3 )
    return 4LL;
  if ( (a2 & 2) == 0 )
  {
    if ( (a2 & 1) != 0 )
      return ((unsigned int)MiFlags >> 15) & 1;
    else
      return 2LL;
  }
  return result;
}
