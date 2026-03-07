__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  bool v11; // zf

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *a4 = 0;
    v8 = 0;
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
      v9 = 0x10000;
    }
    else
    {
      v10 = *a4;
      if ( (*a4 & 0x10000) != 0 )
      {
        v9 = 0x10000;
      }
      else if ( (v10 & 0x4000) != 0 )
      {
        v9 = 65537;
      }
      else if ( (v10 & 4) != 0 )
      {
        v9 = 0x10000;
      }
      else if ( (v10 & 0x40400) != 0 )
      {
        v9 = 0x10000;
      }
      else if ( (v10 & 0x800) != 0 )
      {
        v9 = 65537;
      }
      else if ( (v10 & 0x40) != 0 )
      {
        v9 = 0x10000;
      }
      else if ( (v10 & 0x1000) != 0 )
      {
        v9 = 65537;
      }
      else
      {
        v11 = (v10 & 8) == 0;
        v9 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
        if ( !v11 )
          v9 = 0x10000;
      }
    }
  }
  else
  {
    v9 = 0x10000;
  }
  *a3 = v9;
  return v8;
}
