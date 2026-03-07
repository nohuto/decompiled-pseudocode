__int64 __fastcall CPathGeometry::SetProperty(CPathGeometry *a1, int a2, __int64 a3, const struct CPathData *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 == 4 )
  {
    if ( (_DWORD)a3 != 11 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x68u, 0LL);
      return v6;
    }
    CPathGeometry::SetPath(a1, a4, a3);
    return 0;
  }
  v4 = CGeometry::SetProperty((__int64)a1, a2, a3);
  v6 = v4;
  if ( v4 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x70u, 0LL);
  return v6;
}
