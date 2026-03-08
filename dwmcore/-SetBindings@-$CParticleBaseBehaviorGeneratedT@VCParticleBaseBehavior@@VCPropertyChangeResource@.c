/*
 * XREFs of ?SetBindings@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801C3290
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleBaseBehaviorGeneratedT<CParticleBaseBehavior,CPropertyChangeResource>::SetBindings(
        __int64 a1,
        __int64 a2)
{
  return CParticleBaseBehaviorGeneratedT<CParticleBaseBehavior,CPropertyChangeResource>::SetOrAppendBindings(
           a1,
           a2,
           0LL);
}
