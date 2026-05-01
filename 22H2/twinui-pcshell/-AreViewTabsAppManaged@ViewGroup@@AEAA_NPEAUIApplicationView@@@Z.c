/*
 * XREFs of ?AreViewTabsAppManaged@ViewGroup@@AEAA_NPEAUIApplicationView@@@Z @ 0x180306158
 * Callers:
 *     ?AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180305D10 (-AddView@ViewGroup@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ViewGroup::AreViewTabsAppManaged(ViewGroup *this, struct IApplicationView *a2)
{
  bool v2; // bl
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, GUID *, __int64 *))(**((_QWORD **)this + 12) + 64LL))(
         *((_QWORD *)this + 12),
         a2,
         &GUID_f264283f_b510_4555_80ed_4c7216018854,
         &v8);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      726LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  if ( v8 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 160LL))(v8, &v7);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        730LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v2 = v7 != 0;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  return v2;
}
