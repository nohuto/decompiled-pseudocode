void __fastcall CVisual::SetRelativeLayoutSizeInternal(CVisual *this, struct D2D_SIZE_F a2)
{
  CSparseStorage *v2; // rcx
  struct D2D_SIZE_F v3; // [rsp+20h] [rbp-18h] BYREF

  v2 = (CVisual *)((char *)this + 224);
  v3 = a2;
  if ( a2 == `CVisual::SetRelativeLayoutSizeInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x20000000u;
  else
    CSparseStorage::SetData(v2, 3u, 8u, &v3);
}
