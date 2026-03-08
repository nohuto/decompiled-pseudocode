/*
 * XREFs of ??_ECSceneModelTransform@@UEAAPEAXI@Z @ 0x1801C08D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$CSceneModelTransformGeneratedT@VCSceneModelTransform@@VCCompositionTransform@@@@MEAA@XZ @ 0x1801BE9B8 (--1-$CSceneModelTransformGeneratedT@VCSceneModelTransform@@VCCompositionTransform@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CSceneModelTransform::`vector deleting destructor'(struct CResource **this, char a2)
{
  CSceneModelTransformGeneratedT<CSceneModelTransform,CCompositionTransform>::~CSceneModelTransformGeneratedT<CSceneModelTransform,CCompositionTransform>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
