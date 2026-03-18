/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C0033E80
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0033B48 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C003404C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     PostPendingMouseMove @ 0x1C003C8D0 (PostPendingMouseMove.c)
 *     IsEqualInputSource @ 0x1C00ACCA0 (IsEqualInputSource.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(struct tagQ *a1, _DWORD *a2)
{
  int v4; // eax

  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 97) & 0x20) == 0 )
      goto LABEL_3;
    if ( !(unsigned __int8)IsEqualInputSource((char *)a1 + 412) )
    {
      v4 = a2[1];
      if ( (*((_DWORD *)a1 + 104) & 0xFFFFFFFB) != 0 && (v4 & 0xFFFFFFFB) != 0 )
      {
        if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 1) == 0 )
          PostPendingMouseMove(a1);
        goto LABEL_3;
      }
      if ( (v4 & 0xFFFFFFFB) != 0 )
      {
LABEL_3:
        *((_DWORD *)a1 + 103) = *a2;
        *((_DWORD *)a1 + 104) = a2[1];
      }
    }
  }
}
