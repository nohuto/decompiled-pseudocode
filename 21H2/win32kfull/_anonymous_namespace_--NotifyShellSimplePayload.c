/*
 * XREFs of _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C00F4DAC
 * Callers:
 *     _anonymous_namespace_::NotifyPartExit @ 0x1C007FC08 (_anonymous_namespace_--NotifyPartExit.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1C00F4CFC (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C015C47C (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1C023625C (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C02362C8 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1C0236504 (_anonymous_namespace_--NotifyPartEnter.c)
 *     ?ResetArrangement@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0236AF4 (-ResetArrangement@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?TrackedWindowMoveSizeIntercept@NotifyShell@@YAXPEAUtagWND@@IK@Z @ 0x1C0236DB8 (-TrackedWindowMoveSizeIntercept@NotifyShell@@YAXPEAUtagWND@@IK@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C0236F64 (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00A9418 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

bool __fastcall anonymous_namespace_::NotifyShellSimplePayload(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD v9[10]; // [rsp+20h] [rbp-88h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0] = a1;
  LODWORD(v9[1]) = a2;
  v9[2] = a3;
  v9[3] = a4;
  return (unsigned int)anonymous_namespace_::NotifyIAMWindowManagementEvent() != 0;
}
