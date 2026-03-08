/*
 * XREFs of ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C021FDB0
 * Callers:
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021F9F0 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C021FBB0 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1C021FF88 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C02200D8 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall ShellWindowManagement::GetWindowTrackState(const struct tagWND *a1, char a2)
{
  unsigned int v2; // r8d
  char v3; // r9

  v2 = 0;
  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v3 & 1) != 0 )
  {
    return 1;
  }
  else if ( (v3 & 0x20) != 0 )
  {
    return 2;
  }
  else if ( a2 && IsSemiMaximized(a1) )
  {
    return 3;
  }
  return v2;
}
