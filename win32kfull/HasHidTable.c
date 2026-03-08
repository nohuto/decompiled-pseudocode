/*
 * XREFs of HasHidTable @ 0x1C0038CB0
 * Callers:
 *     EditionUpdateRawMouseMode @ 0x1C0036FE0 (EditionUpdateRawMouseMode.c)
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C009EED4 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     HasRawInputForegroundTarget @ 0x1C009EFE4 (HasRawInputForegroundTarget.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C009F110 (EditionHandleAndPostKeyEvent.c)
 *     UpdateRawMouseMode @ 0x1C00CE364 (UpdateRawMouseMode.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00D5560 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00E83C0 (EditionKeyEventLLHook.c)
 *     EditionHandleAltTab @ 0x1C00F54C0 (EditionHandleAltTab.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01A9B80 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01AB1FC (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01AB2A8 (UnregisterModernAppThreadForRawKeyboard.c)
 *     EditionRawInputRequestedForKeyboard @ 0x1C01E8850 (EditionRawInputRequestedForKeyboard.c)
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
      if ( *(_QWORD *)(v2 + 824) )
        return 1LL;
    }
  }
  return result;
}
