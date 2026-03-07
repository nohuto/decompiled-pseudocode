void __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::~CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(
        CVisual *this)
{
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 100));
  *((_QWORD *)this + 100) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 101));
  *((_QWORD *)this + 101) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 102));
  *((_QWORD *)this + 102) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 103));
  *((_QWORD *)this + 103) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 104));
  *((_QWORD *)this + 104) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 105));
  *((_QWORD *)this + 105) = 0LL;
  CResource::UnRegisterNotifiers<CKeyframeAnimation>(this, (struct CResource ***)this + 106);
  if ( *((_QWORD *)this + 106) )
  {
    std::_Deallocate<16,0>(
      *((void **)this + 106),
      (*((_QWORD *)this + 108) - *((_QWORD *)this + 106)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 106) = 0LL;
    *((_QWORD *)this + 107) = 0LL;
    *((_QWORD *)this + 108) = 0LL;
  }
  CVisual::~CVisual(this);
}
