/*
 * XREFs of ?IsEqualByApplicationView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1802BF4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::IsEqualByApplicationView(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2,
        int *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PVOID v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v10);
  if ( !v10 )
  {
LABEL_6:
    v6 = 0;
    goto LABEL_7;
  }
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, PVOID *))(*(_QWORD *)v10 + 24LL))(v10, &v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    AcquireSRWLockShared(this + 24);
    *a3 = v9 == this[62].Ptr;
    if ( this != (RTL_SRWLOCK *)-192LL )
      ReleaseSRWLockShared(this + 24);
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3DE,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  return v6;
}
