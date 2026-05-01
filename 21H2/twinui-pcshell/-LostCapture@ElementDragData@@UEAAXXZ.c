/*
 * XREFs of ?LostCapture@ElementDragData@@UEAAXXZ @ 0x18042D9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099544 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x18042D1E4 (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::LostCapture(ElementDragData *this)
{
  _BYTE v2[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v3[24]; // [rsp+50h] [rbp-38h] BYREF
  int v4; // [rsp+68h] [rbp-20h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (ElementDragData *)((char *)this + 184),
    (wil::ActivityThreadWatcher *)v2);
  if ( (unsigned int)(*((_DWORD *)this + 124) - 2) > 1 )
    ElementDragData::CancelDrag(this);
  if ( v4 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v3);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v2);
}
