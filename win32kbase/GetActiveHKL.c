/*
 * XREFs of GetActiveHKL @ 0x1C007F950
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C000ED44 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     xxxProcessKeyEvent @ 0x1C007EE00 (xxxProcessKeyEvent.c)
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C007F530 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C021A3F8 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C021A7E0 (ProcessKeyboardInputWorker.c)
 *     VKFromVSC @ 0x1C021B5D0 (VKFromVSC.c)
 * Callees:
 *     _GetKeyboardLayout @ 0x1C00827AC (_GetKeyboardLayout.c)
 */

__int64 GetActiveHKL()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( gpqForeground
    && ((v0 = *(_QWORD *)(gpqForeground + 120)) != 0
     && (v1 = *(_QWORD *)(v0 + 16)) != 0
     && (v2 = *(_QWORD *)(v1 + 440)) != 0
     || (v4 = *(_QWORD *)(gpqForeground + 128)) != 0
     && (v5 = *(_QWORD *)(v4 + 16)) != 0
     && (v2 = *(_QWORD *)(v5 + 440)) != 0) )
  {
    return *(_QWORD *)(v2 + 40);
  }
  else
  {
    return GetKeyboardLayout(0LL);
  }
}
