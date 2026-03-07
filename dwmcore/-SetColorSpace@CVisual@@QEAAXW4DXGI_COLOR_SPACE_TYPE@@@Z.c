void __fastcall CVisual::SetColorSpace(CVisual *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  CSparseStorage *v2; // rcx
  enum DXGI_COLOR_SPACE_TYPE v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (CVisual *)((char *)this + 224);
  if ( a2 == `CVisual::SetColorSpace'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x4000000u;
  else
    CSparseStorage::SetData(v2, 6u, 4u, &v3);
}
