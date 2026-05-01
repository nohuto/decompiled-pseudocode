/*
 * XREFs of ?PinViewToAllDesktops@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@_N@Z @ 0x1804A3C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::PinViewToAllDesktops(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        char a3)
{
  __int64 v3; // rax
  __int64 *v6; // rdx
  __int64 (__fastcall *v7)(struct IApplicationView *, __int64 *); // rax
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)a2;
  v6 = &qword_1805551F0;
  v7 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(v3 + 208);
  if ( !a3 )
    v6 = &qword_180555200;
  v8 = v7(a2, v6);
  if ( v8 < 0 )
  {
    v9 = 279LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 56LL))(
         *((_QWORD *)this + 2),
         a2);
  if ( v8 < 0 )
  {
    v9 = 280LL;
    goto LABEL_7;
  }
  return (unsigned int)v8;
}
