/*
 * XREFs of ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1804630D8
 * Callers:
 *     ??_GCAutoAppTransitionRequest@@UEAAPEAXI@Z @ 0x1804635F0 (--_GCAutoAppTransitionRequest@@UEAAPEAXI@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180463894 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$5 @ 0x1804640DC (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$5.c)
 *     ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x180469420 (-OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ.c)
 *     _TabletModePositioner::OnOutgoingTransitionCompleted_::_1_::dtor$1 @ 0x1804694EF (_TabletModePositioner--OnOutgoingTransitionCompleted_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAutoAppTransitionRequest::~CAutoAppTransitionRequest(CAutoAppTransitionRequest *this)
{
  __int64 *v1; // rbx

  *(_QWORD *)this = &CAutoAppTransitionRequest::`vftable';
  v1 = (__int64 *)((char *)this + 8);
  if ( *((_BYTE *)this + 16) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 40LL))(*v1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
}
