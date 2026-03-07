void __fastcall CParticleEmitterVisual::~CParticleEmitterVisual(CParticleEmitterVisual *this)
{
  __int64 v1; // rdx
  void *v3; // rcx
  void *v4; // rcx

  v1 = *((_QWORD *)this + 800);
  if ( v1 )
    std::default_delete<EmitterShapes::CSpawner>::operator()((__int64)this, v1);
  v3 = (void *)*((_QWORD *)this + 170);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 172) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 170) = 0LL;
    *((_QWORD *)this + 171) = 0LL;
    *((_QWORD *)this + 172) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 167);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 16 * ((__int64)(*((_QWORD *)this + 169) - (_QWORD)v4) >> 4));
    *((_QWORD *)this + 167) = 0LL;
    *((_QWORD *)this + 168) = 0LL;
    *((_QWORD *)this + 169) = 0LL;
  }
  CParticleEmitterVisual::ParticleCollection::~ParticleCollection((CParticleEmitterVisual *)((char *)this + 872));
  CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::~CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(this);
}
