__int64 __fastcall CComposeTop::NewContentRendered(CComposeTop *this, __int64 a2)
{
  const struct tagRECT *v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  int v8; // ebx
  __int64 v9; // rcx
  struct CShape *v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-59h]
  struct CShape *v16; // [rsp+30h] [rbp-49h] BYREF
  struct CShape **v17; // [rsp+38h] [rbp-41h] BYREF
  CRectanglesShape *v18; // [rsp+40h] [rbp-39h] BYREF
  char v19; // [rsp+48h] [rbp-31h]
  _QWORD v20[3]; // [rsp+50h] [rbp-29h] BYREF
  int v21; // [rsp+68h] [rbp-11h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+2Fh]

  v16 = 0LL;
  v20[1] = 0LL;
  v20[0] = &CRegionShape::`vftable';
  v20[2] = &v21;
  v21 = 0;
  v22 = 0LL;
  v3 = (const struct tagRECT *)CMilRectLFromMilRectF((int *)&v17, a2);
  CRegionShape::BuildFromRects((__int64)v20, v3, 1u);
  if ( !*((_QWORD *)this + 20) )
  {
    v5 = DefaultHeap::Alloc(0x60uLL);
    v7 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x60uLL);
      *v7 = &CRegionShape::`vftable';
      v6 = (__int64)(v7 + 3);
      v7[2] = v7 + 3;
      *((_DWORD *)v7 + 6) = 0;
      v7[11] = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = v7;
    if ( v4 )
      std::default_delete<CShape>::operator()(v6, v4);
    if ( !*((_QWORD *)this + 20) )
    {
      v8 = -2147024882;
      v15 = 112;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v8, v15, 0LL);
      goto LABEL_17;
    }
  }
  v9 = *((_QWORD *)this + 2);
  v17 = &v16;
  v18 = 0LL;
  v19 = 1;
  v8 = CShape::Combine(v9, (__int64)v4, (__int64)v20, (__int64)this + 92, D2D1_COMBINE_MODE_INTERSECT, &v18);
  if ( v19 )
  {
    v10 = *v17;
    *v17 = v18;
    if ( v10 )
      std::default_delete<CShape>::operator()(v6, (__int64 (__fastcall ***)(_QWORD, __int64))v10);
  }
  if ( v8 < 0 )
  {
    v15 = 121;
    goto LABEL_16;
  }
  v11 = CComposeTop::AddShapeToLifetime(this, v16);
  v8 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x7Fu, 0LL);
LABEL_17:
  CRegionShape::~CRegionShape((CRegionShape *)v20);
  if ( v16 )
    std::default_delete<CShape>::operator()(v13, (__int64 (__fastcall ***)(_QWORD, __int64))v16);
  return (unsigned int)v8;
}
