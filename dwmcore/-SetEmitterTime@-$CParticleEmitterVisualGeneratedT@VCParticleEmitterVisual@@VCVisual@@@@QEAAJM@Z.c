/*
 * XREFs of ?SetEmitterTime@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJM@Z @ 0x1801C3B98
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ @ 0x1801C296C (-OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetEmitterTime(
        float *a1,
        float a2)
{
  if ( a2 != a1[176] )
  {
    a1[176] = a2;
    CParticleEmitterVisual::OnEmitterTimeChanged((CParticleEmitterVisual *)a1);
  }
  return 0LL;
}
