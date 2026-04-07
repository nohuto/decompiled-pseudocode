/*
 * XREFs of ??1CAccentBlurBehind@@EEAA@XZ @ 0x180093800
 * Callers:
 *     ??_ECAccentBlurBehind@@EEAAPEAXI@Z @ 0x180093840 (--_ECAccentBlurBehind@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseResource@CAccentBlurBehind@@AEAAXXZ @ 0x180093B48 (-ReleaseResource@CAccentBlurBehind@@AEAAXXZ.c)
 */

void __fastcall CAccentBlurBehind::~CAccentBlurBehind(CAccentBlurBehind *this)
{
  *(_QWORD *)this = &CAccentBlurBehind::`vftable';
  CAccentBlurBehind::ReleaseResource(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 36);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
