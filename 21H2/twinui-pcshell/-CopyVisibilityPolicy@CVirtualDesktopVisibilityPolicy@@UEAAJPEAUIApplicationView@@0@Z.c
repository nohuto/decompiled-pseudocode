/*
 * XREFs of ?CopyVisibilityPolicy@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@0@Z @ 0x1804A3520
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@Z @ 0x1804A3288 (-AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::CopyVisibilityPolicy(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesCompatible(this, a3, a2) )
  {
    v6 = -2147019873;
    v7 = 245LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a3 + 200LL))(a3, v10);
  if ( v6 < 0 )
  {
    v7 = 247LL;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 200LL))(a2, v11);
  if ( v6 < 0 )
  {
    v7 = 248LL;
    goto LABEL_3;
  }
  v9 = v10[0] - v11[0];
  if ( v10[0] == v11[0] )
    v9 = v10[1] - v11[1];
  if ( v9 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 208LL))(a2, v10);
    if ( v6 < 0 )
    {
      v7 = 251LL;
      goto LABEL_3;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 56LL))(
           *((_QWORD *)this + 2),
           a2);
    if ( v6 < 0 )
    {
      v7 = 252LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
