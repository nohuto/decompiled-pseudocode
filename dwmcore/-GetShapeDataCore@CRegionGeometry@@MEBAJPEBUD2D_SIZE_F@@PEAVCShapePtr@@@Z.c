__int64 __fastcall CRegionGeometry::GetShapeDataCore(
        CRegionGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v4; // esi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // rcx

  v4 = 0;
  v6 = operator new(0x60uLL);
  v8 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x60uLL);
    *v8 = &CRegionShape::`vftable';
    v8[2] = v8 + 3;
    *((_DWORD *)v8 + 6) = 0;
    v8[11] = 0LL;
    v9 = *((_QWORD *)this + 18);
    v10 = (*((_QWORD *)this + 19) - v9) >> 4;
    if ( v10 )
    {
      CRegionShape::BuildFromRects(v8, v9, (unsigned int)v10);
    }
    else
    {
      *(_DWORD *)v8[2] = 0;
      v12 = v8[11];
      v8[11] = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v8;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v4;
}
