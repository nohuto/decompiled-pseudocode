/*
 * XREFs of GetActiveHKL @ 0x1C006B1A0
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C000242C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     xxxKeyEventEx @ 0x1C006A7C8 (xxxKeyEventEx.c)
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C006AD8C (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01EA524 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01EA900 (ProcessKeyboardInputWorker.c)
 *     VKFromVSC @ 0x1C01EB390 (VKFromVSC.c)
 * Callees:
 *     _GetKeyboardLayout @ 0x1C0069AE0 (_GetKeyboardLayout.c)
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
    return GetKeyboardLayout(0);
  }
}
