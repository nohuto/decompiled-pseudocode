__int64 __fastcall SafeDivide<unsigned long,unsigned long,unsigned long>(unsigned int a1, unsigned int a2, int *a3)
{
  if ( !a2 )
    return 2147500037LL;
  *a3 = a1 / a2;
  return 0LL;
}
