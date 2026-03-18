/*
 * XREFs of HasHidTable @ 0x1C01184A0
 * Callers:
 *     UpdateRawMouseMode @ 0x1C005DFA4 (UpdateRawMouseMode.c)
 *     EditionUpdateRawMouseMode @ 0x1C005E010 (EditionUpdateRawMouseMode.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00603F4 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     HasRawInputForegroundTarget @ 0x1C0060504 (HasRawInputForegroundTarget.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0060630 (EditionHandleAndPostKeyEvent.c)
 *     EditionKeyEventLLHook @ 0x1C00718F0 (EditionKeyEventLLHook.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C009EE00 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EditionHandleAltTab @ 0x1C00BDAD0 (EditionHandleAltTab.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01A897C (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01AA00C (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01AA0B8 (UnregisterModernAppThreadForRawKeyboard.c)
 *     EditionRawInputRequestedForKeyboard @ 0x1C01E7760 (EditionRawInputRequestedForKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasHidTable(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 424);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 848) )
        return 1LL;
    }
  }
  return result;
}
