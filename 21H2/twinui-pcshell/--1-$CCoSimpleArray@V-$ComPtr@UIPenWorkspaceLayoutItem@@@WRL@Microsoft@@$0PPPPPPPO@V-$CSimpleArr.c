/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x18020BB2C
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18020D830 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 *     _TaskbarLayoutPolicyManager::GetTaskbarLayout_::_1_::dtor$1 @ 0x18020DA0D (_TaskbarLayoutPolicyManager--GetTaskbarLayout_--_1_--dtor$1.c)
 *     _TaskbarLayoutPolicyManager::PopulateAndSetPinned_::_1_::dtor$1 @ 0x18020E1F9 (_TaskbarLayoutPolicyManager--PopulateAndSetPinned_--_1_--dtor$1.c)
 *     _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::_Emplace_reallocate_ParsedPenWorkspaceLayout__::_1_::dtor$13 @ 0x180210777 (_std--vector_ParsedPenWorkspaceLayout_std--allocator_ParsedPenWorkspaceLayout___--_Emplace_reall.c)
 *     _std::_Uninitialized_move_ParsedPenWorkspaceLayout___ParsedPenWorkspaceLayout___std::allocator_ParsedPenWorkspaceLayout____::_1_::dtor$1 @ 0x18021088A (_std--_Uninitialized_move_ParsedPenWorkspaceLayout___ParsedPenWorkspaceLayout___std_ea_18021088A.c)
 *     _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::dtor$7 @ 0x180210930 (_std--vector_ParsedPenWorkspaceLayout_std--allocator_ParsedPenWorkspaceLayout___--emplace_back_P.c)
 *     _PWSLayoutPolicyManager::GetPenWorkspaceLayout_::_1_::dtor$0 @ 0x180295BDD (_PWSLayoutPolicyManager--GetPenWorkspaceLayout_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::Populate_::_1_::dtor$1 @ 0x180295F71 (_PWSLayoutPolicyManager--Populate_--_1_--dtor$1.c)
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$5 @ 0x1804B1C79 (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$5.c)
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$6 @ 0x1804B1C89 (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$6.c)
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$7 @ 0x1804B1C99 (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>(
        __int64 a1)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(a1);
}
