/*
 * XREFs of TransitionCursorSuppressionState @ 0x1C0028C70
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00282E8 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x1C00284F0 (NtUserEnableMouseInputForCursorSuppression.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C00313BC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     xxxRemoteReconnect @ 0x1C0161DA0 (xxxRemoteReconnect.c)
 *     PowerOnGdi @ 0x1C0163520 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0163760 (PowerOffGdi.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DA6B8 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DA9F0 (-xxxSwitchCursors@@YAXHH@Z.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1C0028D8C (SetPointerMetaVisibility.c)
 *     ReadCursorSuppressionConfig @ 0x1C0135B7C (ReadCursorSuppressionConfig.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33@Z @ 0x1C01D7ED8 (--$Write@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01D80C4 (-CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall TransitionCursorSuppressionState(unsigned int a1, int a2)
{
  unsigned int v2; // ebp
  __int64 v4[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v5; // [rsp+70h] [rbp+18h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  v2 = gCursorSuppressionState;
  if ( gCursorSuppressionState <= 0 )
    goto LABEL_11;
  if ( gCursorSuppressionState > 4 )
  {
    if ( gCursorSuppressionState > 6 && gCursorSuppressionState != 8 )
    {
      if ( gCursorSuppressionState == 9 )
      {
        gCursorSuppressionState = ReadCursorSuppressionConfig();
        if ( gCursorSuppressionState )
          SetPointerMetaVisibility(0LL);
      }
      goto LABEL_11;
    }
    if ( a1 == 8 )
      goto LABEL_9;
    if ( a1 == 2 )
    {
      if ( a2 )
      {
        gCursorSuppressionState = 6;
        goto LABEL_14;
      }
      SetPointerMetaVisibility(0LL);
LABEL_10:
      gCursorSuppressionState = 2;
      goto LABEL_11;
    }
    if ( a1 != 1 )
    {
      if ( a1 != 3 )
        goto LABEL_11;
      if ( a2 )
      {
        gCursorSuppressionState = 7;
        goto LABEL_14;
      }
      SetPointerMetaVisibility(0LL);
LABEL_34:
      gCursorSuppressionState = 3;
      goto LABEL_11;
    }
    if ( a2 )
    {
      gCursorSuppressionState = 5;
      goto LABEL_14;
    }
    SetPointerMetaVisibility(0LL);
LABEL_21:
    gCursorSuppressionState = 1;
    goto LABEL_11;
  }
  switch ( a1 )
  {
    case 1u:
      goto LABEL_21;
    case 2u:
      goto LABEL_10;
    case 3u:
      goto LABEL_34;
    case 8u:
      if ( !a2 )
      {
        SetPointerMetaVisibility(1LL);
LABEL_9:
        gCursorSuppressionState = 8;
        break;
      }
      gCursorSuppressionState = 4;
LABEL_14:
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 2u);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
      break;
  }
LABEL_11:
  if ( (unsigned int)dword_1C032FB20 > 4 && (qword_1C032FB30 & 8) != 0 && (qword_1C032FB38 & 8) == qword_1C032FB38 )
  {
    v5 = InputTraceLogging::CursorSuppressionToString(gCursorSuppressionState);
    v6 = InputTraceLogging::CursorSuppressionToString(a1);
    v4[0] = InputTraceLogging::CursorSuppressionToString(v2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      (int)&dword_1C032FB20,
      (int)&dword_1C02F05FE,
      (__int64)v4,
      (__int64)&v6,
      (__int64)&v5);
  }
}
