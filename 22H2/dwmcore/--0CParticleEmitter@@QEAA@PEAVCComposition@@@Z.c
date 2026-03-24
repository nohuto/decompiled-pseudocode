/*
 * XREFs of ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x1801DC36C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801DDEA0 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F484 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CParticleEmitter *__fastcall CParticleEmitter::CParticleEmitter(CParticleEmitter *this, struct CComposition *a2)
{
  CParticleEmitter *v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CParticleEmitter *result; // rax

  *((_QWORD *)this + 7) = &CParticleEmitter::`vbtable'{for `CContent'};
  *((_QWORD *)this + 13) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 12) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 13) + 4LL) + 104) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v3 = *((_QWORD *)v2 + 7);
  *(_QWORD *)v2 = &CParticleEmitter::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(v3 + 4) + 56) = &CTextVisualContent::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 7) + 8LL) + 56) = &CParticleEmitter::`vftable'{for `IContent'};
  v4 = *(int *)(*((_QWORD *)v2 + 7) + 4LL);
  *(_DWORD *)((char *)v2 + v4 + 52) = v4 - 24;
  v5 = *(int *)(*((_QWORD *)v2 + 7) + 8LL);
  result = v2;
  *(_DWORD *)((char *)v2 + v5 + 52) = v5 - 40;
  return result;
}
