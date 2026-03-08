/*
 * XREFs of ?AppendBindings@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801C0C2C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleBaseBehaviorGeneratedT<CParticleBaseBehavior,CPropertyChangeResource>::AppendBindings(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 1;
  return CParticleBaseBehaviorGeneratedT<CParticleBaseBehavior,CPropertyChangeResource>::SetOrAppendBindings(a1, a2, a3);
}
