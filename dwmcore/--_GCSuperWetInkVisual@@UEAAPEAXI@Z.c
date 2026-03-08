/*
 * XREFs of ??_GCSuperWetInkVisual@@UEAAPEAXI@Z @ 0x1801C09C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x1801BEA3C (--1-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CSuperWetInkVisual::`scalar deleting destructor'(struct CResource **this, char a2)
{
  CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
