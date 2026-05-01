/*
 * XREFs of ??$GetWeakReference@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@details@wil@@YAJPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAPEAUIWeakReference@@@Z @ 0x1802B9B14
 * Callers:
 *     ??$com_weak_copy_failfast@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802BAC70 (--$com_weak_copy_failfast@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@.c)
 *     ??$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802BAD04 (--$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@w.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@UIKeepAliveView@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C92F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostI.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::GetWeakReference<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v5 = 0LL;
  v3 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::QueryInterface(
         a1,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 24LL))(v5, a2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
  return (unsigned int)v3;
}
