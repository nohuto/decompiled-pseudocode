/*
 * XREFs of ProcessKeyboardInjectedInputViaRim @ 0x1C000EE14
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C000ED44 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     ProcessKeyboardInjectedInput @ 0x1C000E730 (ProcessKeyboardInjectedInput.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C000EE70 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01E3DAC (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 */

__int64 __fastcall ProcessKeyboardInjectedInputViaRim(__int64 a1, __int64 a2)
{
  if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(
                       1LL,
                       gptiCurrent,
                       *(_QWORD *)(a2 + 392),
                       *(unsigned int *)(a2 + 400)) )
    return ProcessKeyboardInjectedInput(a1, (_QWORD *)a2, 0LL);
  else
    return InputTraceLogging::Keyboard::DropInput(0LL);
}
