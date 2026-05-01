/*
 * XREFs of ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@UE$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x18035E94C
 * Callers:
 *     ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@W7E$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x18016A2E0 (-get@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplore.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     std::call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa___ @ 0x18035C684 (std--call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _get__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__SwitchItemDataSource_XamlExplorerHost__UE_AAAPE_AAUISwitchItemDataSource_Multitasking_3Internal_Windows__XZ(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = __abi_winrt_ptr_ctor(a1);
  std::call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa___((struct std::once_flag *)(a1 + 80), (__int64)&v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v2 = (RTL_SRWLOCK *)(a1 + 104);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 104));
  v5 = a1 + 104;
  v3 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 72));
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
