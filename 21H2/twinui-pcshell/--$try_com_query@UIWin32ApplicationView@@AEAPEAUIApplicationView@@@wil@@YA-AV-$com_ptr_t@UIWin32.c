/*
 * XREFs of ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1802C73CC
 * Callers:
 *     ?IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800D67BC (-IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(__int64 a1, _QWORD *a2)
{
  (**(void (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, a1);
  return a1;
}
