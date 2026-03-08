/*
 * XREFs of ??2CKeyframeAnimation@@SAPEAX_K@Z @ 0x1801BF29C
 * Callers:
 *     ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x180240978 (-AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CKeyframeAnimation::operator new()
{
  LPVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x248uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
