__int64 __fastcall HalpAdjustWakeSecondsDue(unsigned __int64 a1, unsigned __int64 a2)
{
  signed __int64 v3; // rdx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( a2 >= a1 || (v3 = (a1 - a2) / 0x989680, v3 < 30) )
  {
    LODWORD(v3) = 30;
  }
  else if ( v3 >= 0xFFFFFFFFLL )
  {
    LODWORD(v3) = -2;
  }
  return (unsigned int)v3;
}
