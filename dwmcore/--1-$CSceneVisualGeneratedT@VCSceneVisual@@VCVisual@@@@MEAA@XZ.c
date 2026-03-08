/*
 * XREFs of ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x1801BEA3C
 * Callers:
 *     ??_GCSuperWetInkVisual@@UEAAPEAXI@Z @ 0x1801C09C0 (--_GCSuperWetInkVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSceneVisual@@UEAAPEAXI@Z @ 0x180216EF0 (--_GCSceneVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[88]);
  this[88] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
