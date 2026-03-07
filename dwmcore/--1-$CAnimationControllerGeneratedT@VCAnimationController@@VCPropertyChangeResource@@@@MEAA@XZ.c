void __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::~CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>(
        CResource *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 88);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>(this);
  if ( *v1 )
  {
    std::_Deallocate<16,0>(*v1, (v1[2] - *v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *v1 = 0LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
