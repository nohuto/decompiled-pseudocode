/*
 * XREFs of _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0220058
 * Callers:
 *     _anonymous_namespace_::NotifyPartExit @ 0x1C00BDC68 (_anonymous_namespace_--NotifyPartExit.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1C00EC8F0 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021F9F0 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1C021FB48 (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C021FBB0 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1C021FE90 (_anonymous_namespace_--NotifyPartEnter.c)
 *     ?ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z @ 0x1C02205FC (-ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z.c)
 *     ?TrackedWindowMoveSizeIntercept@NotifyShell@@YAXPEAUtagWND@@IK@Z @ 0x1C0220918 (-TrackedWindowMoveSizeIntercept@NotifyShell@@YAXPEAUtagWND@@IK@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C0220AD0 (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C009B94C (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

bool __fastcall anonymous_namespace_::NotifyShellSimplePayload(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v10; // [rsp+20h] [rbp-88h] BYREF
  int v11; // [rsp+28h] [rbp-80h]
  __int64 v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+38h] [rbp-70h]

  memset_0(&v10, 0, 0x50uLL);
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  return (unsigned int)anonymous_namespace_::NotifyIAMWindowManagementEvent(&v10, a5) != 0;
}
