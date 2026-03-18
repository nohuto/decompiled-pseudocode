/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007EDA8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     NtUserSendInput @ 0x1C007EAF0 (NtUserSendInput.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     NtUserSetCursorPos @ 0x1C009BCC0 (NtUserSetCursorPos.c)
 *     EditionLLMouseButtonHook @ 0x1C00EA420 (EditionLLMouseButtonHook.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C00FDC20 (-OnPointerCursorOperation@@YAXXZ.c)
 *     ProcessHidRawInput @ 0x1C01D11E0 (ProcessHidRawInput.c)
 *     EditionLLMouseWheelHook @ 0x1C01D41E0 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C01F8300 (NtUserInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01D092C (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
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
