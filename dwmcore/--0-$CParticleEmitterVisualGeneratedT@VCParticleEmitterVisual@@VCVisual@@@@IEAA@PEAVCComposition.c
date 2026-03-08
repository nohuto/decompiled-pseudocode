/*
 * XREFs of ??0?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z @ 0x18023FD88
 * Callers:
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x18023FEB4 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18009B504 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>(
        __int64 a1,
        struct CComposition *a2)
{
  __int64 result; // rax

  CVisual::CVisual((CVisual *)a1, a2);
  *(_DWORD *)(a1 + 708) = 1015580809;
  *(_DWORD *)(a1 + 748) = 1065353216;
  *(_DWORD *)(a1 + 752) = 1065353216;
  *(_DWORD *)(a1 + 756) = 1065353216;
  *(_QWORD *)(a1 + 760) = 1065353216LL;
  *(_DWORD *)(a1 + 784) = 1148846080;
  *(_DWORD *)(a1 + 788) = 1148846080;
  *(_DWORD *)(a1 + 792) = 1148846080;
  result = a1;
  *(_DWORD *)(a1 + 744) = 10000;
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_DWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 848) = 0LL;
  *(_QWORD *)(a1 + 856) = 0LL;
  *(_QWORD *)(a1 + 864) = 0LL;
  return result;
}
