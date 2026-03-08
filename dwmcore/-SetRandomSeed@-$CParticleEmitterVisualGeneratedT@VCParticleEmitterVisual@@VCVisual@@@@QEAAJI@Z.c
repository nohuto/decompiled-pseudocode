/*
 * XREFs of ?SetRandomSeed@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJI@Z @ 0x1801C6588
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnRandomSeedChanged@CParticleEmitterVisual@@QEAAXXZ @ 0x1801C29C4 (-OnRandomSeedChanged@CParticleEmitterVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetRandomSeed(
        CParticleEmitterVisual *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 179) )
  {
    *((_DWORD *)a1 + 179) = a2;
    CParticleEmitterVisual::OnRandomSeedChanged(a1);
  }
  return 0LL;
}
