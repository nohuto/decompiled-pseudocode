void __fastcall CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>::~CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>(
        struct CResource ***this)
{
  char *v1; // rbx

  v1 = (char *)(this + 10);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 10);
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16,0>(*(void **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  CGeometry2D::~CGeometry2D((CGeometry2D *)this);
}
