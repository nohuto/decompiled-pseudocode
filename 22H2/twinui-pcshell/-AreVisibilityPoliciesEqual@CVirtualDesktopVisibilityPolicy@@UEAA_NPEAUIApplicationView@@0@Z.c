/*
 * XREFs of ?AreVisibilityPoliciesEqual@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@0@Z @ 0x1804A2FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@Z @ 0x1804A2EF8 (-AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesEqual(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  char v5; // bl
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  if ( CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesCompatible(this, a2, a3) )
  {
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 200LL))(a2, v10);
    if ( v6 < 0 )
    {
      v7 = 226LL;
LABEL_4:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v6);
      return v5;
    }
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a3 + 200LL))(a3, v11);
    if ( v6 < 0 )
    {
      v7 = 227LL;
      goto LABEL_4;
    }
    v8 = v10[0] - v11[0];
    if ( v10[0] == v11[0] )
      v8 = v10[1] - v11[1];
    if ( !v8 )
      return 1;
  }
  return v5;
}
