void __fastcall CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::~CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>(
        struct CResource ***this)
{
  char *v1; // rdi

  v1 = (char *)(this + 20);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 20);
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16,0>(*(void **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  *this = (struct CResource **)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
