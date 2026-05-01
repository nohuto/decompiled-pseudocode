/*
 * XREFs of ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18042D498
 * Callers:
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x18042D1E4 (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragStarted @ 0x18042D480 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486__ea_18042D480.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18042DC50 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099544 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FD1BC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1803FD240 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18042C86C (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18042CA30 (ElementDragData--MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x18042CFBC (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18042D674 (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::FinishDrag(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // r8
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-59h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-51h]
  __int128 v14; // [rsp+30h] [rbp-49h] BYREF
  __int64 v15; // [rsp+40h] [rbp-39h]
  __int64 v16[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v18[24]; // [rsp+80h] [rbp+7h] BYREF
  int v19; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v21; // [rsp+E0h] [rbp+67h] BYREF
  int v22; // [rsp+F0h] [rbp+77h] BYREF
  int v23; // [rsp+F4h] [rbp+7Bh]
  __int64 v24; // [rsp+F8h] [rbp+7Fh] BYREF

  v15 = -2LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 184),
    (wil::ActivityThreadWatcher *)v17);
  v21 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v16, &v21, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v4 = 0;
  if ( a2 != -1 )
    v4 = a2;
  v24 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
  *(_DWORD *)(a1 + 496) = 3;
  *(_DWORD *)(a1 + 88) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 440LL))(
    *(_QWORD *)(a1 + 40),
    *(_QWORD *)(a1 + 24),
    v4);
  if ( v4 == 2 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 464LL))(*(_QWORD *)(a1 + 40));
  }
  else if ( *(_DWORD *)(a1 + 108) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 200LL))(*(_QWORD *)(a1 + 40), a1 + 92);
  }
  v12 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v13 = v4;
  if ( v4 - 1 > 1 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    v21 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v21);
    v14 = 0LL;
    ElementDragData::GetDragSourceLocation((ElementDragData *)a1, (struct Geometry::CRect *)&v14);
    v6 = *(_DWORD *)(a1 + 60) + DWORD1(v14);
    v22 = v14 + *(_DWORD *)(a1 + 56);
    v23 = v6;
    v8 = ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
           a1,
           (__int64)&v22,
           v7,
           (__int64)&v12);
    v9 = retaddr;
    if ( v8 >= 0 )
      goto LABEL_15;
    v10 = 341LL;
    goto LABEL_14;
  }
  v11 = 4LL;
  if ( v4 != 1 )
    v11 = 0LL;
  v8 = ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(a1, v11, (__int64)&v12);
  v9 = retaddr;
  if ( v8 < 0 )
  {
    v10 = 323LL;
LABEL_14:
    wil::details::in1diag3::_Log_Hr(
      v9,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v8);
    lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()((unsigned int *)&v12);
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v16);
  if ( v19 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v17);
}
