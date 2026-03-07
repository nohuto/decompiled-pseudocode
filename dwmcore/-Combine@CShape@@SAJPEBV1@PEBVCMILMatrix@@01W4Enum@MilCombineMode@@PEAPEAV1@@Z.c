__int64 __fastcall CShape::Combine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        enum D2D1_COMBINE_MODE a5,
        CRectanglesShape **a6)
{
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  int v14; // eax
  unsigned int v15; // ecx

  v9 = CShape::TryOptimizedCombinePaths(a1, 0LL, a3, a4, a5, a6);
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x1CCu, 0LL);
  }
  else if ( !*a6 )
  {
    v14 = CShape::D2DCombine(a1, v10, a3, a4, a5, a6);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1D7u, 0LL);
  }
  return v12;
}
