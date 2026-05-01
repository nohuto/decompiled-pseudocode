/*
 * XREFs of ?PointerMove@ElementDragData@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18042DBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099544 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18042D258 (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::PointerMove(ElementDragData *this, const struct MultitaskingViewPointerInputArgs *a2)
{
  _BYTE v4[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v5[24]; // [rsp+50h] [rbp-38h] BYREF
  int v6; // [rsp+68h] [rbp-20h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (ElementDragData *)((char *)this + 184),
    (wil::ActivityThreadWatcher *)v4);
  if ( *((_DWORD *)this + 124) != 3 && (!*((_DWORD *)this + 27) || *(_QWORD *)((char *)this + 92) != *(_QWORD *)a2) )
    ElementDragData::DragOver(this, a2);
  if ( v6 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v5);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v4);
}
