/*
 * XREFs of ?IsViewTabbed@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180374940
 * Callers:
 *     ?TryGetSelectedTabForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x1803780D0 (-TryGetSelectedTabForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAPEAUIInsp.c)
 *     ?TryGetTabForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x180378170 (-TryGetTabForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitcherTabViewManagerWrapper::IsViewTabbed(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        int *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 424LL))(a2, a3);
  if ( v6 < 0 )
  {
    v7 = 58LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"internal\\pcshellshell\\private\\inc\\SwitcherTabViewManagerWrapper.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( *a3 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, int *))(**((_QWORD **)this + 4) + 72LL))(
           *((_QWORD *)this + 4),
           a2,
           a3);
    if ( v6 < 0 )
    {
      v7 = 61LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
