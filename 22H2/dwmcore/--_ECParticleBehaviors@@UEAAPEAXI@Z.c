/*
 * XREFs of ??_ECParticleBehaviors@@UEAAPEAXI@Z @ 0x1801C3420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$CParticleBehaviorsGeneratedT@VCParticleBehaviors@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x1801C1AA4 (--1-$CParticleBehaviorsGeneratedT@VCParticleBehaviors@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CParticleBehaviors::`vector deleting destructor'(struct CResource **this, char a2)
{
  CParticleBehaviorsGeneratedT<CParticleBehaviors,CPropertyChangeResource>::~CParticleBehaviorsGeneratedT<CParticleBehaviors,CPropertyChangeResource>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
