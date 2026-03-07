_BOOL8 __fastcall MAPPER::bWin31BitmapHeightScaling(MAPPER *this, int a2, int a3, int *a4)
{
  return (unsigned int)SafeDivide<long,long,long>(a2 + a3 / 4, a3, a4) == 0;
}
