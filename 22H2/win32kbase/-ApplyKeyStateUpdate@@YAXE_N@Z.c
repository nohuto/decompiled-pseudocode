/*
 * XREFs of ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01B3D6C
 * Callers:
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B7A10 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     UpdateAsyncKeyState @ 0x1C004D680 (UpdateAsyncKeyState.c)
 *     UpdateRawKeyState @ 0x1C0095DC8 (UpdateRawKeyState.c)
 */

void __fastcall ApplyKeyStateUpdate(unsigned __int8 a1, char a2)
{
  UpdateRawKeyState(a1, a2);
  UpdateAsyncKeyState(gpqForeground, a1, a2);
}
