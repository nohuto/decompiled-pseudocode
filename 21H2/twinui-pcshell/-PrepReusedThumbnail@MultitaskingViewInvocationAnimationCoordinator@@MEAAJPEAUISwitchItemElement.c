/*
 * XREFs of ?PrepReusedThumbnail@MultitaskingViewInvocationAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUIDCompThumbnail@@@Z @ 0x18041F860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MultitaskingViewInvocationAnimationCoordinator::PrepReusedThumbnail(
        MultitaskingViewInvocationAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct IDCompThumbnail *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64 *, struct IDCompThumbnail *))(*(_QWORD *)a2 + 24LL))(
                   a2,
                   &v8,
                   a3);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v3 + 504LL))(*v3, v4, 0LL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
