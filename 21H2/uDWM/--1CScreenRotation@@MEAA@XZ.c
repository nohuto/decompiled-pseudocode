/*
 * XREFs of ??1CScreenRotation@@MEAA@XZ @ 0x1800AC3FC
 * Callers:
 *     ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x1800965A0 (--_ECScreenRotation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800AD51C (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

void __fastcall CScreenRotation::~CScreenRotation(CScreenRotation *this)
{
  *(_QWORD *)this = &CScreenRotation::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 35) = &CScreenRotation::`vftable'{for `IAnimationListener'};
  CScreenRotation::Stop(this, 0);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
