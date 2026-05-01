/*
 * XREFs of ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18042D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099524 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z @ 0x18042C97C (--0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z.c)
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18042CEC8 (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18042D108 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x18042D4A0 (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::PointerUp(__int64 a1, int a2, const struct MultitaskingViewPointerInputArgs *a3)
{
  float ExternalDragProgress; // xmm0_4
  unsigned int v7; // eax
  _BYTE v8[8]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v9; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v11[24]; // [rsp+60h] [rbp-38h] BYREF
  int v12; // [rsp+78h] [rbp-20h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 184),
    (wil::ActivityThreadWatcher *)v10);
  if ( *(_DWORD *)(a1 + 88) == a2 )
  {
    ElementDragData::DragOver((ElementDragData *)a1, a3);
    if ( *(_DWORD *)(a1 + 496) == 2 )
    {
      *(_DWORD *)(a1 + 88) = 0;
    }
    else
    {
      ExternalDragProgress = ElementDragData::GetExternalDragProgress((ElementDragData *)a1);
      DragAndDropArgs::DragAndDropArgs((__int64)v8, *(_DWORD *)(a1 + 176), *(_QWORD *)(a1 + 24), ExternalDragProgress);
      v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const struct MultitaskingViewPointerInputArgs *))(**(_QWORD **)(a1 + 40) + 472LL))(
             *(_QWORD *)(a1 + 40),
             v8,
             a3);
      ElementDragData::FinishDrag(a1, v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
  }
  if ( v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v10);
}
