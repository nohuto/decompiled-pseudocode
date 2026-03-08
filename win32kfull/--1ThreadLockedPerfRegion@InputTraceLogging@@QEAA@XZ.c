/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D6CE8
 * Callers:
 *     NtUserSendInput @ 0x1C0016F20 (NtUserSendInput.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C00D69D0 (-OnPointerCursorOperation@@YAXXZ.c)
 *     ProcessHidRawInput @ 0x1C0141BD0 (ProcessHidRawInput.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0142474 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C01AD480 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01AD660 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C01D65E0 (NtUserInjectTouchInput.c)
 *     NtUserSetCursorPos @ 0x1C01DC530 (NtUserSetCursorPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01AA6D0 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
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
