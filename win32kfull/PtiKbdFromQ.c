/*
 * XREFs of PtiKbdFromQ @ 0x1C009FA48
 * Callers:
 *     AllocateHidData @ 0x1C0009078 (AllocateHidData.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C0022FA8 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00388C0 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     HasRawInputForegroundTarget @ 0x1C009EFE4 (HasRawInputForegroundTarget.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C009F110 (EditionHandleAndPostKeyEvent.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00E83C0 (EditionKeyEventLLHook.c)
 *     EditionHandleAltTab @ 0x1C00F54C0 (EditionHandleAltTab.c)
 *     xxxProcessHidInput @ 0x1C0141C40 (xxxProcessHidInput.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0148BAC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BC8CC (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiKbdFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 104);
}
