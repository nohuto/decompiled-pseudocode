/*
 * XREFs of ??1CDCompAnimationsOffBehaviorModifier@DCompThumbnailHelpers@@QEAA@XZ @ 0x18047C430
 * Callers:
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$7 @ 0x18048078F (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DCompThumbnailHelpers::CDCompAnimationsOffBehaviorModifier::~CDCompAnimationsOffBehaviorModifier(
        DCompThumbnailHelpers::CDCompAnimationsOffBehaviorModifier *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 160LL))(v2, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
