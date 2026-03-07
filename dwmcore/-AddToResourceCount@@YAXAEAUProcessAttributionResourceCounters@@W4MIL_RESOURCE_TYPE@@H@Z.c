void __fastcall AddToResourceCount(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx

  if ( a2 > 0x2E )
  {
    v3 = a2 - 92;
    if ( !v3 )
    {
      a1[18] += a3;
      return;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
LABEL_9:
      a1[17] += a3;
      return;
    }
    v5 = v4 - 84;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 18;
        if ( v7 )
        {
          if ( v7 != 8 )
            goto LABEL_8;
        }
      }
      goto LABEL_9;
    }
    goto LABEL_19;
  }
  if ( a2 == 46 )
  {
LABEL_19:
    a1[15] += a3;
    return;
  }
  v8 = a2 - 32;
  if ( v8 && (v9 = v8 - 2) != 0 && (v10 = v9 - 2) != 0 && (v11 = v10 - 2) != 0 && (v12 = v11 - 3) != 0 )
  {
    if ( v12 != 1 )
    {
LABEL_8:
      a1[16] += a3;
      return;
    }
    a1[20] += a3;
  }
  else
  {
    a1[19] += a3;
  }
}
