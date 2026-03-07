__int64 __fastcall CTouchProcessor::GetButtonChange(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 != a3 )
  {
    if ( (a2 & 0x10) == 0 && (a3 & 0x10) != 0 )
    {
      return 1;
    }
    else if ( (a2 & 0x10) != 0 && (a3 & 0x10) == 0 )
    {
      return 2;
    }
    else if ( (a2 & 0x20) == 0 && (a3 & 0x20) != 0 )
    {
      return 3;
    }
    else if ( (a2 & 0x20) != 0 && (a3 & 0x20) == 0 )
    {
      return 4;
    }
  }
  return v3;
}
