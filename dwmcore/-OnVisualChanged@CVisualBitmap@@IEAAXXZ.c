void __fastcall CVisualBitmap::OnVisualChanged(CVisualBitmap *this)
{
  __int64 v2; // rcx
  CVisual *v3; // rcx

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 13) = 0LL;
  }
  ReleaseInterface<CVisualTree>((__int64 *)this + 12);
  v3 = (CVisual *)*((_QWORD *)this + 9);
  if ( v3 )
    CVisual::GetVisualTree(v3, (struct CVisualTree **)this + 12);
}
