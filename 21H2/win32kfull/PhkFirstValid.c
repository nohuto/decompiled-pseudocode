/*
 * XREFs of PhkFirstValid @ 0x1C00202CC
 * Callers:
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0020124 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionKeyEventLLHook @ 0x1C0020240 (EditionKeyEventLLHook.c)
 *     EditionLLMouseButtonHook @ 0x1C00234F0 (EditionLLMouseButtonHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C003145C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     xxxCallMouseHook @ 0x1C012B03C (xxxCallMouseHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01D9A20 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01E7050 (zzzUnhookWindowsHook.c)
 *     xxxPointerCallHook @ 0x1C01F048C (xxxPointerCallHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C0020370 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 920);
  if ( (v3 || (v3 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8LL * a2 + 48)) != 0) && (*(_DWORD *)(v3 + 64) & 0x80u) != 0 )
    return PhkNextValid(v3);
  return v3;
}
