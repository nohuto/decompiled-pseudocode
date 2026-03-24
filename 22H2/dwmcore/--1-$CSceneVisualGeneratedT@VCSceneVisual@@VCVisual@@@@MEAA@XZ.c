/*
 * XREFs of ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x1801EC188
 * Callers:
 *     ??_GCSceneVisual@@UEAAPEAXI@Z @ 0x1801EC1C0 (--_GCSceneVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSuperWetInkVisual@@UEAAPEAXI@Z @ 0x1801EDEB0 (--_GCSuperWetInkVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800450D0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[77]);
  this[77] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
