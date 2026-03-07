__int64 __fastcall CShape::ClipWithRect(const struct CShape *a1, const struct tagRECT *a2, struct CShape **a3)
{
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct tagRECT v10; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-29h] BYREF
  int v12; // [rsp+58h] [rbp-11h] BYREF
  __int64 v13; // [rsp+98h] [rbp+2Fh]

  v11[1] = 0LL;
  v12 = 0;
  v13 = 0LL;
  v11[0] = &CRegionShape::`vftable';
  v11[2] = &v12;
  v10 = *a2;
  CRegionShape::BuildFromRects((__int64)v11, &v10, 1u);
  v6 = CShape::Combine((__int64)a1, v5, (__int64)v11, 0LL, D2D1_COMBINE_MODE_INTERSECT, a3);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xB5u, 0LL);
  CRegionShape::~CRegionShape((CRegionShape *)v11);
  return v8;
}
