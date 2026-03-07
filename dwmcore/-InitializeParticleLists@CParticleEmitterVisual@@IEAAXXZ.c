void __fastcall CParticleEmitterVisual::InitializeParticleLists(CParticleEmitterVisual *this)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  char *v4; // rax

  CParticleEmitterVisual::ParticleCollection::Reserve(
    (CParticleEmitterVisual *)((char *)this + 872),
    *((_DWORD *)this + 186));
  v2 = *((unsigned int *)this + 186);
  v3 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 168) - *((_QWORD *)this + 167)) >> 4);
  if ( v2 >= v3 )
  {
    if ( v2 <= v3 )
      return;
    if ( v2 > 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 169) - *((_QWORD *)this + 167)) >> 4) )
    {
      std::vector<Instance_Pos4_QRot_ColorDW_Size2>::_Resize_reallocate<std::_Value_init_tag>((__int64)this + 1336, v2);
      return;
    }
    v4 = std::_Uninitialized_value_construct_n<std::allocator<Instance_Pos4_QRot_ColorDW_Size2>>(
           *((char **)this + 168),
           v2 - v3);
  }
  else
  {
    v4 = (char *)(*((_QWORD *)this + 167) + 48 * v2);
  }
  *((_QWORD *)this + 168) = v4;
}
