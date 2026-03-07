__int64 __fastcall SetCollectionLabel(unsigned __int8 *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // r10
  unsigned int v4; // r9d
  unsigned int v5; // r11d
  unsigned __int8 v6; // dl
  __int64 v7; // r10

  v3 = *a3;
  v4 = 0;
  v5 = a2;
  if ( (int)v3 + 4 < a2 )
  {
    if ( a1[1] == 13 )
    {
      a1[v3] = 9;
      v6 = a1[3];
      v4 = 1;
      *a3 = v3 + 2;
      v7 = (unsigned int)(v3 + 1);
      if ( (unsigned __int8)(v6 - 1) <= 1u )
      {
        a1[v7] = 32;
        return v4;
      }
      if ( (unsigned __int8)(v6 - 4) <= 1u )
      {
        a1[v7] = 34;
        return v4;
      }
      a2 = v5;
    }
    return (unsigned int)BuildVendorDefinedCL(a1, a2, a3);
  }
  return v4;
}
