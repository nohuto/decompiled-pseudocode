void __fastcall CVisualSurface::ClearAllRenderTargets(CVisualSurface *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi

  v1 = (_QWORD *)*((_QWORD *)this + 14);
  v2 = (_QWORD *)*((_QWORD *)this + 15);
  while ( v1 != v2 )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear(*v1 + 192LL);
    v1 += 2;
  }
}
