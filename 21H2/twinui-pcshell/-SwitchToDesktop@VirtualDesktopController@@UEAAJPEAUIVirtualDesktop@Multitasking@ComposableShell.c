/*
 * XREFs of ?SwitchToDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803E7510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::SwitchToDesktop(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  PVOID Ptr; // rbx
  _QWORD *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v15; // [rsp+58h] [rbp+20h]

  v4 = this + 15;
  AcquireSRWLockShared(this + 15);
  v15 = v4;
  if ( !this[10].Ptr )
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_9;
  }
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v6 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))a2)(
         a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v13);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 111LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)v7);
    goto LABEL_8;
  }
  Ptr = this[10].Ptr;
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v14);
  v5 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)Ptr + 72LL))(Ptr, *v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 112LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
LABEL_9:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)v5;
}
