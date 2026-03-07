__int64 __fastcall MAPPER::bWin31BitmapWidthScaling(MAPPER *this, int a2, int a3, int *a4)
{
  __int64 result; // rax

  if ( (unsigned int)SafeDivide<long,long,long>(a2 - (a3 + 1) / 2, a3, a4) )
    return 0LL;
  result = 1LL;
  ++*a4;
  return result;
}
