/*
 * XREFs of PhkFirstValid @ 0x1C00EA6F4
 * Callers:
 *     xxxCallMouseHook @ 0x1C0002CD4 (xxxCallMouseHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C00EA420 (EditionLLMouseButtonHook.c)
 *     EditionKeyEventLLHook @ 0x1C00EA4C0 (EditionKeyEventLLHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00EA5C0 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionLLMouseWheelHook @ 0x1C01D41E0 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01E1508 (zzzUnhookWindowsHook.c)
 *     xxxPointerCallHook @ 0x1C01EAF28 (xxxPointerCallHook.c)
 * Callees:
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C004DBCC (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     PhkNextValid @ 0x1C00EA754 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = a2;
  LockRefactorStagingAssertAny((PERESOURCE *)gDomainHookLock);
  v4 = *(_QWORD *)(a1 + 8 * v3 + 920);
  if ( (v4 || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v3 + 48)) != 0) && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4);
  return v4;
}
