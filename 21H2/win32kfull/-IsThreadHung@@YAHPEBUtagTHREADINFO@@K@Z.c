/*
 * XREFs of ?IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z @ 0x1C00A93A4
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C00038F4 (xxxSwitchToThisWindow.c)
 *     DoExplorerHangDetection @ 0x1C0004E74 (DoExplorerHangDetection.c)
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00A9418 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     xxxQueryInformationThread @ 0x1C00FC914 (xxxQueryInformationThread.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0109AC4 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     zzzCancelJournalling @ 0x1C011886C (zzzCancelJournalling.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C021D188 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsThreadHung(const struct tagTHREADINFO *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a2 )
    a2 = gdwHungAppTimeout;
  v4 = *((_QWORD *)a1 + 56);
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 20) > a2
    && (*(_DWORD *)(v4 + 16) & 0x1C07) == 0
    && !(unsigned int)PsGetThreadFreezeCount(*(_QWORD *)a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 53) + 12LL) & 0x40) == 0 )
  {
    return 1;
  }
  return v3;
}
