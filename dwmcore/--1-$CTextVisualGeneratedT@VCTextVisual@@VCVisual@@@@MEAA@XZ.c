void __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::~CTextVisualGeneratedT<CTextVisual,CVisual>(
        struct CResource ***this)
{
  char *v1; // rbx
  void **v3; // rdi

  v1 = (char *)(this + 88);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 88);
  v3 = (void **)(this + 91);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 91);
  CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 94);
  if ( this[94] )
  {
    std::_Deallocate<16,0>(this[94], ((char *)this[96] - (char *)this[94]) & 0xFFFFFFFFFFFFFFF8uLL);
    this[94] = 0LL;
    this[95] = 0LL;
    this[96] = 0LL;
  }
  if ( *v3 )
  {
    std::_Deallocate<16,0>(*v3, ((char *)this[93] - (_BYTE *)*v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *v3 = 0LL;
    this[92] = 0LL;
    this[93] = 0LL;
  }
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16,0>(*(void **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
}
