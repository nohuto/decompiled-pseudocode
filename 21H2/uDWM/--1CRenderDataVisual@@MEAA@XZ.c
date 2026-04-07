/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x1800267FC
 * Callers:
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x180014664 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x180027F10 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x1800293EC (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x180029F20 (--_GCText@@EEAAPEAXI@Z.c)
 *     ??1CAccent@@MEAA@XZ @ 0x18002CA38 (--1CAccent@@MEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180034CD4 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CImage@@EEAA@XZ @ 0x18003EDB8 (--1CImage@@EEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180041CF8 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x180046198 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180048188 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x18008169C (--1CLivePreview@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x18008AC58 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x180093A70 (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x1800964D0 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x1800A1A38 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x1800A2508 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x1800A4224 (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800A4F8C (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800A5B98 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800A6228 (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800A694C (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800A6DD0 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800A7740 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800AC3FC (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800AD9EC (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800B8440 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800B9450 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800251AC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderDataVisual::~CRenderDataVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx

  *this = (CBaseObject *)&CDesktopWindowReplacement::`vftable';
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[30];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[30] = 0LL;
  }
  if ( this[31] != this[32] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[31] = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
}
