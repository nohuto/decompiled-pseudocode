/*
 * XREFs of TransitionCursorSuppressionState @ 0x1C007B640
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x1C007B540 (NtUserEnableMouseInputForCursorSuppression.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C00D69D0 (-OnPointerCursorOperation@@YAXXZ.c)
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 *     PowerOnGdi @ 0x1C0129280 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C01295B0 (PowerOffGdi.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0142474 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01430AC (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01AECF8 (-xxxSwitchCursors@@YAXHH@Z.c)
 * Callees:
 *     ReadCursorSuppressionConfig @ 0x1C007B6F0 (ReadCursorSuppressionConfig.c)
 *     SetPointerMetaVisibility @ 0x1C007B75C (SetPointerMetaVisibility.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33@Z @ 0x1C01ABB40 (--$Write@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     ?CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01ABE14 (-CursorSuppressionToString@InputTraceLogging@@CAPEBDW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall TransitionCursorSuppressionState(unsigned int a1, int a2)
{
  unsigned int v2; // ebp
  __int64 v4[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v5; // [rsp+70h] [rbp+18h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  v2 = gCursorSuppressionState;
  switch ( gCursorSuppressionState )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      switch ( a1 )
      {
        case 1u:
          goto LABEL_15;
        case 2u:
          goto LABEL_5;
        case 3u:
          goto LABEL_30;
      }
      if ( a1 != 8 )
        break;
      if ( a2 )
      {
        gCursorSuppressionState = 4;
        goto LABEL_20;
      }
      SetPointerMetaVisibility(1LL);
      goto LABEL_36;
    case 5:
    case 6:
    case 8:
      if ( a1 != 8 )
      {
        if ( a1 == 2 )
        {
          if ( a2 )
          {
            gCursorSuppressionState = 6;
LABEL_20:
            _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 2u);
            KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
            break;
          }
          SetPointerMetaVisibility(0LL);
LABEL_5:
          gCursorSuppressionState = 2;
          break;
        }
        if ( a1 == 1 )
        {
          if ( a2 )
          {
            gCursorSuppressionState = 5;
            goto LABEL_20;
          }
          SetPointerMetaVisibility(0LL);
LABEL_15:
          gCursorSuppressionState = 1;
          break;
        }
        if ( a1 != 3 )
          break;
        if ( a2 )
        {
          gCursorSuppressionState = 7;
          goto LABEL_20;
        }
        SetPointerMetaVisibility(0LL);
LABEL_30:
        gCursorSuppressionState = 3;
        break;
      }
LABEL_36:
      gCursorSuppressionState = 8;
      break;
    case 9:
      gCursorSuppressionState = ReadCursorSuppressionConfig();
      SetPointerMetaVisibility(gCursorSuppressionState == 0);
      break;
  }
  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 8LL) )
    {
      v5 = InputTraceLogging::CursorSuppressionToString(gCursorSuppressionState);
      v6 = InputTraceLogging::CursorSuppressionToString(a1);
      v4[0] = InputTraceLogging::CursorSuppressionToString(v2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (int)&dword_1C035C080,
        (int)&dword_1C031B9D0,
        (__int64)v4,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
