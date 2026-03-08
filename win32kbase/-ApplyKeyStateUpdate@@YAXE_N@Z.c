/*
 * XREFs of ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C021D024
 * Callers:
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021E280 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     UpdateRawKeyState @ 0x1C007F0C8 (UpdateRawKeyState.c)
 *     UpdateAsyncKeyState @ 0x1C00922C0 (UpdateAsyncKeyState.c)
 */

void __fastcall ApplyKeyStateUpdate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // di
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r9

  v4 = a2;
  v5 = a1;
  UpdateRawKeyState(a1, a2, a3, a4);
  LOBYTE(v6) = v4;
  LOBYTE(v7) = v5;
  UpdateAsyncKeyState(gpqForeground, v7, v6, v8);
}
