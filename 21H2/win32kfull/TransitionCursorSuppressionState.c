/*
 * XREFs of TransitionCursorSuppressionState @ 0x1C0097DC0
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x1C0097CF0 (NtUserEnableMouseInputForCursorSuppression.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00FDC68 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 *     PowerOnGdi @ 0x1C0154D30 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0154F60 (PowerOffGdi.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C016A9CA (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01D53B0 (-xxxSwitchCursors@@YAXHH@Z.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1C0097EB0 (SetPointerMetaVisibility.c)
 *     ReadCursorSuppressionConfig @ 0x1C0099338 (ReadCursorSuppressionConfig.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33@Z @ 0x1C01D3C2C (--$Write@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01D3DE8 (-CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall TransitionCursorSuppressionState(unsigned int a1, int a2)
{
  unsigned int v2; // ebp
  __int64 v4[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v5; // [rsp+70h] [rbp+18h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  v2 = gCursorSuppressionState;
  if ( gCursorSuppressionState > 0 )
  {
    if ( gCursorSuppressionState <= 4 )
    {
      if ( a1 != 1 )
      {
        if ( a1 == 2 )
        {
LABEL_5:
          gCursorSuppressionState = 2;
          goto LABEL_6;
        }
        if ( a1 != 3 )
        {
          if ( a1 != 8 )
            goto LABEL_6;
          if ( a2 )
          {
            gCursorSuppressionState = 4;
LABEL_12:
            _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 2u);
            KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
            goto LABEL_6;
          }
          SetPointerMetaVisibility(1LL);
          goto LABEL_19;
        }
LABEL_33:
        gCursorSuppressionState = 3;
        goto LABEL_6;
      }
      goto LABEL_17;
    }
    if ( gCursorSuppressionState <= 6 || gCursorSuppressionState == 8 )
    {
      if ( a1 == 8 )
      {
LABEL_19:
        gCursorSuppressionState = 8;
        goto LABEL_6;
      }
      if ( a1 == 2 )
      {
        if ( !a2 )
        {
          SetPointerMetaVisibility(0LL);
          goto LABEL_5;
        }
        gCursorSuppressionState = 6;
        goto LABEL_12;
      }
      if ( a1 != 1 )
      {
        if ( a1 != 3 )
          goto LABEL_6;
        if ( a2 )
        {
          gCursorSuppressionState = 7;
          goto LABEL_12;
        }
        SetPointerMetaVisibility(0LL);
        goto LABEL_33;
      }
      if ( a2 )
      {
        gCursorSuppressionState = 5;
        goto LABEL_12;
      }
      SetPointerMetaVisibility(0LL);
LABEL_17:
      gCursorSuppressionState = 1;
      goto LABEL_6;
    }
    if ( gCursorSuppressionState == 9 )
    {
      gCursorSuppressionState = ReadCursorSuppressionConfig();
      SetPointerMetaVisibility(gCursorSuppressionState == 0);
    }
  }
LABEL_6:
  if ( (unsigned int)dword_1C032BE20 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 8LL) )
    {
      v5 = InputTraceLogging::CursorSuppressionToString(gCursorSuppressionState);
      v6 = InputTraceLogging::CursorSuppressionToString(a1);
      v4[0] = InputTraceLogging::CursorSuppressionToString(v2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (int)&dword_1C032BE20,
        (int)&dword_1C02EE2B2,
        (__int64)v4,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
