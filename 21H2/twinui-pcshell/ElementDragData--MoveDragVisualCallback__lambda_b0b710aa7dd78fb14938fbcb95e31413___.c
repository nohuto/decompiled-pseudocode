/*
 * XREFs of ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18042CA30
 * Callers:
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18042D498 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18042C7AC (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31.c)
 *     _lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_ @ 0x18042CAE0 (_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_--_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_.c)
 */

__int64 __fastcall ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v7; // rax
  __int64 v8; // rdx
  int AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v7 = (__int64 *)lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_(v14, a4);
  AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
                                                                v7,
                                                                v8,
                                                                &v13);
  v10 = AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413;
  if ( AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 < 0 )
  {
    v11 = 458LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413);
    goto LABEL_6;
  }
  AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(
                                                                *(_QWORD *)(a1 + 48),
                                                                a2,
                                                                3LL,
                                                                v13);
  v10 = AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413;
  if ( AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 < 0 )
  {
    v11 = 459LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v10;
}
