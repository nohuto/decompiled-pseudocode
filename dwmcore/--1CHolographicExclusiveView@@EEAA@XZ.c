/*
 * XREFs of ??1CHolographicExclusiveView@@EEAA@XZ @ 0x1802A4C30
 * Callers:
 *     ??_GCHolographicExclusiveView@@EEAAPEAXI@Z @ 0x1802A4C80 (--_GCHolographicExclusiveView@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CHolographicExclusiveView::~CHolographicExclusiveView(CHolographicExclusiveView *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CHolographicExclusiveView::`vftable';
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CResource::~CResource(this);
}
