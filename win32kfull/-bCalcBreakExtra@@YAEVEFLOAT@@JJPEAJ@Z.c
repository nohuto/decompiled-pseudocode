bool __fastcall bCalcBreakExtra(int a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0;
  v7 = 0;
  bFToL((float)a2 * *(float *)&a1, (int *)&v7, 0);
  return (unsigned int)SafeDivide<long,long,long>(v7, a3, a4) == 0;
}
