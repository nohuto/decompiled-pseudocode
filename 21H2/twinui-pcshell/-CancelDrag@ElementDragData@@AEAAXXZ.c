/*
 * XREFs of ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x18042D1E4
 * Callers:
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_scalar_deleting_destructor_ @ 0x18042D0F0 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___--_scalar_d.c)
 *     ?KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z @ 0x18042D940 (-KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z.c)
 *     ?LostCapture@ElementDragData@@UEAAXXZ @ 0x18042D9C0 (-LostCapture@ElementDragData@@UEAAXXZ.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099544 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18042D498 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::CancelDrag(ElementDragData *this)
{
  _BYTE v2[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v3[24]; // [rsp+50h] [rbp-38h] BYREF
  int v4; // [rsp+68h] [rbp-20h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (ElementDragData *)((char *)this + 184),
    (wil::ActivityThreadWatcher *)v2);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 464LL))(*((_QWORD *)this + 5));
  ElementDragData::FinishDrag(this, 0LL);
  if ( v4 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v3);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v2);
}
