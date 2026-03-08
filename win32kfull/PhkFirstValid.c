/*
 * XREFs of PhkFirstValid @ 0x1C00368A8
 * Callers:
 *     xxxCallMouseHook @ 0x1C000D82C (xxxCallMouseHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C001D504 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00E83C0 (EditionKeyEventLLHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0142474 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C01AD480 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01AD660 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01BCE2C (zzzUnhookWindowsHook.c)
 *     xxxPointerCallHook @ 0x1C01C5F94 (xxxPointerCallHook.c)
 * Callees:
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C003794C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     PhkNextValid @ 0x1C0039A4C (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = a2;
  LockRefactorStagingAssertAny(gDomainHookLock);
  v4 = *(_QWORD *)(a1 + 8 * v3 + 928);
  if ( (v4 || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v3 + 48)) != 0) && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4);
  return v4;
}
