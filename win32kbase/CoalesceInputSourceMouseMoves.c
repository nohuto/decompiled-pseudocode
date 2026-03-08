/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C007D560
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C007D1C4 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C007D6BC (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PostPendingMouseMove @ 0x1C0071380 (PostPendingMouseMove.c)
 *     IsEqualInputSource @ 0x1C007EDD0 (IsEqualInputSource.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(struct tagQ *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 99) & 0x20) == 0 )
    {
LABEL_3:
      *((_DWORD *)a1 + 105) = *a2;
      *((_DWORD *)a1 + 106) = a2[1];
      return;
    }
    if ( !(unsigned __int8)IsEqualInputSource((char *)a1 + 420, a2) )
    {
      if ( (*((_DWORD *)a1 + 106) & 0xFFFFFFFB) != 0 )
      {
        if ( (a2[1] & 0xFFFFFFFB) != 0 )
        {
          if ( (*((_DWORD *)PtiCurrentShared(4294967291LL, v4, v5, v6) + 122) & 1) == 0 )
            PostPendingMouseMove(a1);
          goto LABEL_3;
        }
      }
      else if ( (a2[1] & 0xFFFFFFFB) != 0 )
      {
        goto LABEL_3;
      }
    }
  }
}
