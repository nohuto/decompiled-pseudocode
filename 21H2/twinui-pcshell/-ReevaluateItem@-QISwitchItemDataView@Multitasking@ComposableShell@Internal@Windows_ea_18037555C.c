/*
 * XREFs of ?ReevaluateItem@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x18037555C
 * Callers:
 *     ?ReevaluateItem@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@W7E$AAAXPE$AAUISwitchItem@2345@@Z @ 0x18016B120 (-ReevaluateItem@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemD.c)
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateItem@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJPE$AAUISwitchItem@2345@@Z @ 0x18037D058 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_Ree_ea_18037D058.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x1802D8554 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x180378394 (-UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall _ReevaluateItem__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAXPE_AAUISwitchItem_2345__Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h]

  v5 = a2;
  v3 = __abi_winrt_ptr_ctor(a2);
  v5 = v3;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 56));
  v6 = a1 + 56;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)(a1 + 104),
    &v4,
    (unsigned __int64 *)&v5);
  if ( v4 != *(__int64 **)(a1 + 104) )
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateItemState(a1, v4[5]);
  if ( a1 != -56 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 56));
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
