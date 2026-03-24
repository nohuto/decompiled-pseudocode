/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00C1144
 * Callers:
 *     NtUserSetCursorPos @ 0x1C00131C0 (NtUserSetCursorPos.c)
 *     EditionLLMouseButtonHook @ 0x1C0023450 (EditionLLMouseButtonHook.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C00282A0 (-OnPointerCursorOperation@@YAXXZ.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C00313BC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 *     NtUserSendInput @ 0x1C00C00F0 (NtUserSendInput.c)
 *     EditionHandleMitSignal @ 0x1C00C10A0 (EditionHandleMitSignal.c)
 *     ProcessHidRawInput @ 0x1C01D5160 (ProcessHidRawInput.c)
 *     EditionLLMouseWheelHook @ 0x1C01D9460 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C01FD7E0 (NtUserInjectTouchInput.c)
 *     OnPTPMouseOperation @ 0x1C0213650 (OnPTPMouseOperation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01D471C (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this)
{
  __int64 v1; // rdi

  if ( *(_QWORD *)this )
  {
    v1 = *(_QWORD *)this;
    *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 16) = *(_QWORD *)(v1 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
