/*
 * XREFs of ??$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z @ 0x180168A30
 * Callers:
 *     ??_GCCursorVisual@@UEAAPEAXI@Z @ 0x1801BE640 (--_GCCursorVisual@@UEAAPEAXI@Z.c)
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x1801DE3D0 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800450D0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CVisualReference *>(CResource *a1, struct CResource **a2)
{
  CResource::UnRegisterNotifierInternal(a1, *a2);
  *a2 = 0LL;
}
