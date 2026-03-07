__int64 __fastcall D3DDDIRotationToDXGIRotation(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx

  v1 = 1;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return 4;
    }
    else
    {
      return 3;
    }
  }
  else
  {
    return 2;
  }
  return v1;
}
