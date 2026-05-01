/*
 * XREFs of ??1?$CCoSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@@@QEAA@XZ @ 0x180152BCC
 * Callers:
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$1 @ 0x180153832 (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$1.c)
 *     _CPinnedList::ApplyPrependDefaultTaskbarLayout_::_1_::dtor$1 @ 0x180153B0B (_CPinnedList--ApplyPrependDefaultTaskbarLayout_--_1_--dtor$1.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$1 @ 0x180153E89 (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$1.c)
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$18 @ 0x180174CE0 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$18.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801AFD3C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?RemoveAndReleaseAll@?$CSimplePointerArray@UIUnknown@@V?$CTContainer_PolicyRelease@UIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x1801BF6AC (-RemoveAndReleaseAll@-$CSimplePointerArray@UIUnknown@@V-$CTContainer_PolicyRelease@UIUnknown@@@@.c)
 *     ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x1801C9A20 (-v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z.c)
 *     _RecoverApplicationWindows_::_1_::dtor$0 @ 0x1801CB690 (_RecoverApplicationWindows_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$1 @ 0x18031CDCE (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$1.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180425F80 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ??_GAppResizeData@@UEAAPEAXI@Z @ 0x18048A100 (--_GAppResizeData@@UEAAPEAXI@Z.c)
 *     ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x18048AAB0 (-RecomputeDropTargets@AppResizeData@@UEAAJXZ.c)
 *     _VirtualDesktopPersistence::VirtualDesktopCollectionChanged_::_1_::dtor$1 @ 0x1804A5EC8 (_VirtualDesktopPersistence--VirtualDesktopCollectionChanged_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>::~CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
