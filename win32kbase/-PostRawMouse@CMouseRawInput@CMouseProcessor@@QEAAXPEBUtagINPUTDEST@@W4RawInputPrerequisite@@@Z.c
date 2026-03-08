/*
 * XREFs of ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C022F130
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C007C068 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C023042C (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1C0241C48 (ApiSetEditionPostRawMouseInputMessage.c)
 */

void __fastcall CMouseProcessor::CMouseRawInput::PostRawMouse(__int64 a1, int a2, int a3)
{
  if ( !*(_BYTE *)(a1 + 69) && !*(_BYTE *)(a1 + 68) && (a3 & *(_DWORD *)(a1 + 64)) == a3 )
    *(_BYTE *)(a1 + 68) = (unsigned int)ApiSetEditionPostRawMouseInputMessage(
                                          a2,
                                          *(_QWORD *)(a1 + 32),
                                          *(_DWORD *)(a1 + 24),
                                          (int)a1 + 40,
                                          a1) != 0;
}
