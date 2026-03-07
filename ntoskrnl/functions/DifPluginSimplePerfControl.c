bool __fastcall DifPluginSimplePerfControl(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // eax

  if ( a1 > a3 )
    return 0;
  if ( a1 < a2 )
    return 1;
  if ( a1 >= 10 * a2 )
  {
    if ( a1 >= 100 * a2 )
    {
      if ( a1 >= 1000 * a2 )
      {
        if ( a1 >= 10000 * a2 )
          v4 = 100000 * (a1 / 0x186A0);
        else
          v4 = 10000 * (a1 / 0x2710);
      }
      else
      {
        v4 = 1000 * (a1 / 0x3E8);
      }
    }
    else
    {
      v4 = 100 * (a1 / 0x64);
    }
  }
  else
  {
    v4 = 10 * (a1 / 0xA);
  }
  return a1 == v4;
}
