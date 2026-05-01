/*
 * XREFs of ?_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18045F638
 * Callers:
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18004E01C (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_dcfb6d10058c25b5f9500f870e919e4d_::operator() @ 0x18045A0E8 (_lambda_dcfb6d10058c25b5f9500f870e919e4d_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDesktopPositioner::_IsViewTabbed(CDesktopPositioner *this, struct IApplicationView *a2)
{
  __int64 v2; // rcx
  char v3; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 39);
  v3 = 0;
  if ( !v2 )
    return 0;
  if ( (*(int (__fastcall **)(__int64, struct IApplicationView *, int *))(*(_QWORD *)v2 + 72LL))(v2, a2, &v5) >= 0 )
    return v5 != 0;
  return v3;
}
