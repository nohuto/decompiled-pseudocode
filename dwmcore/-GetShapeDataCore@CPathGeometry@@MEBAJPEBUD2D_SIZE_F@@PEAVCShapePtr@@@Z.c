__int64 __fastcall CPathGeometry::GetShapeDataCore(
        const struct CPathData **this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v3; // edi
  CPathSegmentsShape *v6; // rax
  __int64 v7; // rcx
  CPathSegmentsShape *v8; // rsi

  v3 = 0;
  if ( this[18] )
  {
    v6 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
    if ( v6 && (v8 = CPathSegmentsShape::CPathSegmentsShape(v6, this[18])) != 0LL )
    {
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v8;
      *((_BYTE *)a3 + 8) = 1;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x35u, 0LL);
    }
  }
  return v3;
}
