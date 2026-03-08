/*
 * XREFs of ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x18023FEB4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??2CContent@@KAPEAX_K@Z @ 0x1800387D8 (--2CContent@@KAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004A570 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     ?InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ @ 0x1801C1C18 (-InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ.c)
 *     ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x18023E220 (--0CParticleEmitter@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z @ 0x18023FD88 (--0-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition.c)
 *     ??0ParticleCollection@CParticleEmitterVisual@@QEAA@XZ @ 0x180240184 (--0ParticleCollection@CParticleEmitterVisual@@QEAA@XZ.c)
 */

CParticleEmitterVisual *__fastcall CParticleEmitterVisual::CParticleEmitterVisual(
        CParticleEmitterVisual *this,
        struct CComposition *a2)
{
  CParticleEmitter *v4; // rdi
  unsigned int *v5; // r8
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  CParticleEmitter *v8; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  int Src; // [rsp+20h] [rbp-13B8h] BYREF
  _DWORD v14[1251]; // [rsp+24h] [rbp-13B4h]

  CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(
    (__int64)this,
    a2);
  *(_QWORD *)this = &CParticleEmitterVisual::`vftable';
  CParticleEmitterVisual::ParticleCollection::ParticleCollection((CParticleEmitterVisual *)((char *)this + 872));
  v4 = 0LL;
  *((_QWORD *)this + 167) = 0LL;
  v5 = (unsigned int *)((char *)this + 1396);
  *((_QWORD *)this + 168) = 0LL;
  v6 = 5489;
  *((_QWORD *)this + 169) = 0LL;
  *((_QWORD *)this + 170) = 0LL;
  v7 = 1LL;
  *((_QWORD *)this + 171) = 0LL;
  *((_QWORD *)this + 172) = 0LL;
  *((_DWORD *)this + 1596) = -1;
  *((_DWORD *)this + 348) = 5489;
  do
  {
    v6 = v7++ + 1812433253 * (v6 ^ (v6 >> 30));
    *v5++ = v6;
  }
  while ( v7 < 0x270 );
  *((_DWORD *)this + 347) = 624;
  *((_DWORD *)this + 1605) = 1065353216;
  *((_QWORD *)this + 803) = 1065353216LL;
  *(_QWORD *)((char *)this + 6388) = 0LL;
  *((_DWORD *)this + 1599) = 0;
  *((_QWORD *)this + 800) = 0LL;
  *((_DWORD *)this + 1602) = 0;
  *((_QWORD *)this + 804) = 0LL;
  *((_DWORD *)this + 1610) = 0;
  *((_WORD *)this + 3222) = 1;
  *((_BYTE *)this + 6446) = 0;
  v8 = (CParticleEmitter *)CContent::operator new(0x78uLL);
  if ( v8 )
    v4 = CParticleEmitter::CParticleEmitter(v8, a2);
  *((_QWORD *)this + 806) = v4;
  *((_QWORD *)v4 + 9) = this;
  v9 = std::_Random_device();
  v14[1248] = -1;
  v10 = 1LL;
  v11 = v9;
  v14[0] = v9;
  do
  {
    v11 = v10 + 1812433253 * (v11 ^ (v11 >> 30));
    v14[v10++] = v11;
  }
  while ( v10 < 0x270 );
  Src = 624;
  memcpy_0((char *)this + 1388, &Src, 0x1388uLL);
  CParticleEmitterVisual::InitializeParticleLists(this);
  CVisual::SetContent((struct CResource **)this, *((struct CContent **)this + 806));
  return this;
}
