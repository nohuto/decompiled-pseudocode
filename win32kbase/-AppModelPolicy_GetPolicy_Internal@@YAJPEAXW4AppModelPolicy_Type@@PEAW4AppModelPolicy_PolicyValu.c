__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v11; // eax
  bool v12; // zf

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    v8 = 0;
    *a4 = 0;
    *a3 = 0;
  }
  else
  {
    *a3 = 0;
    if ( PackageClaims < 0 )
      return v8;
  }
  if ( (*a5 & 1) != 0 )
  {
    if ( (*a5 & 8) != 0 )
    {
      v9 = 196609;
    }
    else
    {
      v11 = *a4;
      if ( (*a4 & 0x10000) != 0 )
      {
        v9 = 196608;
      }
      else if ( (v11 & 0x4000) != 0 )
      {
        v9 = 196608;
      }
      else if ( (v11 & 4) != 0 )
      {
        v9 = 196608;
      }
      else if ( (v11 & 0x40400) != 0 )
      {
        v9 = 196608;
      }
      else if ( (v11 & 0x800) != 0 )
      {
        v9 = 196609;
      }
      else if ( (v11 & 0x40) != 0 )
      {
        v9 = 196608;
      }
      else if ( (v11 & 0x1000) != 0 )
      {
        v9 = 196608;
      }
      else
      {
        v12 = (v11 & 8) == 0;
        v9 = 196609;
        if ( !v12 )
          v9 = 196611;
      }
    }
  }
  else
  {
    v9 = 196608;
  }
  *a3 = v9;
  return v8;
}
