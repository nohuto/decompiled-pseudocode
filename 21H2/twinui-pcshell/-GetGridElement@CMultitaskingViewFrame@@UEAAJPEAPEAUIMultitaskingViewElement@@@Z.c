/*
 * XREFs of ?GetGridElement@CMultitaskingViewFrame@@UEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x180409AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewFrame::GetGridElement(
        CMultitaskingViewFrame *this,
        struct IMultitaskingViewElement **a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, struct IMultitaskingViewElement **); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMultitaskingViewElement **))*((_QWORD *)this + 315);
  if ( !v2 )
    return 2147943568LL;
  v3 = (**v2)(v2, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, a2);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28F,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
