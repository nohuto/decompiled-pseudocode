/*
 * XREFs of ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800A66DC
 * Callers:
 *     ??_GCPenPressHoldVisual@@MEAAPEAXI@Z @ 0x1800A6780 (--_GCPenPressHoldVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180020250 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800A6A90 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CPenPressHoldVisual::~CPenPressHoldVisual(CBaseObject **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CPenPressHoldVisual::`vftable';
  CPenPressHoldVisual::StopTimer((CPenPressHoldVisual *)this);
  CVisual::SetOpacity((CVisual *)this, 0.0);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 88); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[41] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = this[39];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 41);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
