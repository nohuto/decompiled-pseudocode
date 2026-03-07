float __fastcall ApplyEdgeFlagsWorker_3_1_2_(char a1, float a2, float a3)
{
  int v3; // ecx
  int v4; // ecx

  v3 = (a1 & 3) - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        return a2;
    }
    else
    {
      a2 = a2 + a3;
    }
  }
  else
  {
    a2 = a2 - a3;
  }
  return (float)(((int)(float)(a2 * 256.0) + 127) >> 8);
}
