__int64 __fastcall GetDpiDepStockObjectPlateauSlot(int a1, int a2)
{
  unsigned int v2; // r8d

  v2 = -3;
  if ( a1 == a2 )
  {
    return (unsigned int)-2;
  }
  else if ( a1 == 96 )
  {
    return (unsigned int)-1;
  }
  else if ( a1 == 24 * (a1 / 24) && (unsigned int)(a1 - 120) <= 0x168 )
  {
    return (unsigned int)((a1 - 120) / 24);
  }
  return v2;
}
