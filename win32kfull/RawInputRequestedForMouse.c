/*
 * XREFs of RawInputRequestedForMouse @ 0x1C01AD860
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0142474 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0142A40 (EditionPostRawMouseInputMessage.c)
 *     EditionHandleRawInputThrottlingTimer @ 0x1C01AD3A0 (EditionHandleRawInputThrottlingTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputRequestedForMouse(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_DWORD *)(SGDGetUserSessionState(a1) + 16852) || *(_DWORD *)(SGDGetUserSessionState(v1) + 15956) )
    return 1;
  return v2;
}
