/*
 * XREFs of ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800833EC
 * Callers:
 *     ?SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z @ 0x180083210 (-SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z.c)
 *     ?SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800832B0 (-SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x180083360 (-QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ @ 0x1802995D0 (-AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ.c)
 *     ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x180299740 (-ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ.c)
 *     ?CreateWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJPEAK@Z @ 0x180299860 (-CreateWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJPEAK@Z.c)
 *     ?DeleteWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJK@Z @ 0x180299910 (-DeleteWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJK@Z.c)
 *     ?EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z @ 0x1802999B0 (-EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z.c)
 *     ?EnableWindowGroupPolicy@PrivilegedWindowGroupingOperations@@EEAAJKKK@Z @ 0x180299A60 (-EnableWindowGroupPolicy@PrivilegedWindowGroupingOperations@@EEAAJKKK@Z.c)
 *     ?InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z @ 0x18029A860 (-InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z @ 0x18029AA00 (-MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?RegisterWindowArrangementCallout@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@H@Z @ 0x18029B590 (-RegisterWindowArrangementCallout@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x18029B730 (-RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE.c)
 *     _PrivilegedHotkeyOperations::RequestPrivilegedHotkeys_::_1_::dtor$3 @ 0x18029B906 (_PrivilegedHotkeyOperations--RequestPrivilegedHotkeys_--_1_--dtor$3.c)
 *     ?SetBridgeWindowChild@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x18029BA40 (-SetBridgeWindowChild@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z @ 0x18029BAF0 (-SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z @ 0x18029BB90 (-SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z.c)
 *     ?SetWindowArrangement@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z @ 0x18029BC70 (-SetWindowArrangement@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z.c)
 *     ?SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z @ 0x18029BD30 (-SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z.c)
 *     ?SetWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJKPEAUHWND__@@KK@Z @ 0x18029BE00 (-SetWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJKPEAUHWND__@@KK@Z.c)
 *     ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x18029BFF0 (-SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z.c)
 *     ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x18029C0A4 (-SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x18029CBC0 (-UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall IamAccess::SyncIamAccess::~SyncIamAccess(IamAccess::SyncIamAccess *this)
{
  EnableIAMAccess(*(_QWORD *)(*(_QWORD *)this + 40LL), 0LL);
  ReleaseSRWLockExclusive((PSRWLOCK)(*(_QWORD *)this + 48LL));
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((__int64 *)this);
}
