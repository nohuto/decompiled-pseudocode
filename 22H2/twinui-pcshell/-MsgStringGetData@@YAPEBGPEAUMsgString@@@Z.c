/*
 * XREFs of ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x180313CDC
 * Callers:
 *     ?CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWrapper@@PEAVViewEventDispatcher@@PEAPEAUIViewWrapperInternal@@@Z @ 0x1803124A8 (-CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWra.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180318B8C (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803194BC (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x18031ADAC (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18031BB84 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x180330D4C (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x1803CE5A0 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall MsgStringGetData(struct MsgString *a1)
{
  unsigned int v2; // eax

  if ( !a1 )
    return 0LL;
  v2 = *(_DWORD *)a1 & 0xE0000000;
  if ( v2 == 0x40000000 )
    return (const unsigned __int16 *)((char *)a1 + 8);
  if ( v2 != 0x80000000 )
    __debugbreak();
  return (const unsigned __int16 *)*((_QWORD *)a1 + 1);
}
