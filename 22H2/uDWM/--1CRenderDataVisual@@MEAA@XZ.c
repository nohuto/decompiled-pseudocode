/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x180025FBC
 * Callers:
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x180013E24 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x1800276D0 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180028BAC (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x1800296E0 (--_GCText@@EEAAPEAXI@Z.c)
 *     ??1CAccent@@MEAA@XZ @ 0x18002C1F8 (--1CAccent@@MEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180034494 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CImage@@EEAA@XZ @ 0x18003ED08 (--1CImage@@EEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180041C48 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800460E8 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x1800480D8 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x18008142C (--1CLivePreview@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x18008A9E8 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x180093800 (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180096260 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x1800A17C8 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x1800A2298 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x1800A3FB4 (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800A4D1C (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800A5928 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800A5FB8 (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800A66DC (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800A6B60 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800A74D0 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800AC18C (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800AD77C (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800B81D0 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800B91E0 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002496C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
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
