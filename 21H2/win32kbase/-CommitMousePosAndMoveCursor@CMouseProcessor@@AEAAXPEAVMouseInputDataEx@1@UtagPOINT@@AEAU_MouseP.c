/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C009C8D4
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00405A4 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0040C3C (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C009CA84 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C009CAC4 (ApiSetEditionCommitMousePosAndMove.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C00B0C9C (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01BB0F0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01BE47C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C01BEF88 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT a3,
        struct _MousePacketPerf *a4)
{
  BOOL v7; // esi
  BOOL v8; // edi
  BOOL v9; // ebx
  bool v10; // al
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  LONG y; // [rsp+60h] [rbp-29h] BYREF
  LONG x; // [rsp+64h] [rbp-25h] BYREF
  struct tagPOINT v16; // [rsp+68h] [rbp-21h] BYREF
  __int64 v17; // [rsp+70h] [rbp-19h] BYREF
  __int64 v18; // [rsp+78h] [rbp-11h] BYREF
  _WORD v19[4]; // [rsp+80h] [rbp-9h] BYREF
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  int v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+94h] [rbp+Bh]

  v16 = a3;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16) && CBaseProcessor::IsUMSuppressed(this) )
  {
    v12 = 0;
    v13 = 4LL;
    goto LABEL_15;
  }
  if ( *((_DWORD *)a2 + 22) )
  {
    v11 = ApiSetEditionCommitMousePosAndMove((unsigned int)&v16, 0, 0, (int)a2 + 24, 0, 0LL, 0, 1, 1, 0, (__int64)a4);
  }
  else
  {
    v19[1] = *((_WORD *)a2 + 1);
    v19[2] = *((_WORD *)a2 + 2);
    v19[3] = *((_WORD *)a2 + 3);
    v21 = *((_DWORD *)a2 + 3);
    v22 = *((_DWORD *)a2 + 4);
    v23 = *((_DWORD *)a2 + 5);
    v20 = *((_DWORD *)a2 + 2);
    v19[0] = 0;
    v7 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
    v8 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 2);
    v9 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x2000);
    v10 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x10000);
    v11 = ApiSetEditionCommitMousePosAndMove(
            (unsigned int)&v16,
            *((_DWORD *)a2 + 5),
            (unsigned int)v19,
            (int)a2 + 24,
            *((_DWORD *)a2 + 12),
            *((_QWORD *)a2 + 7),
            v7,
            v8,
            v9,
            v10,
            (__int64)a4);
  }
  v12 = v11;
  if ( !v11 )
  {
    v13 = 2LL;
LABEL_15:
    InputTraceLogging::Mouse::DropMove(*((_QWORD *)a2 + 7), v13);
  }
  if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 64LL) )
  {
    v17 = InputTraceLogging::CommitMousePosAndMoveResultToString(v12);
    y = gptCursorAsync.y;
    x = gptCursorAsync.x;
    v18 = *((_QWORD *)a2 + 7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_1C024BA90,
      (__int64)&v18,
      (__int64)&x,
      (__int64)&y,
      (__int64)&v17);
  }
  if ( v12 && (v12 & 1) == 0 )
  {
    y = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2274LL);
  }
  *((_DWORD *)a2 + 19) = v12;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a2, 1LL) )
  {
    *(_OWORD *)((char *)this + 3528) = *((_OWORD *)a2 + 3);
    *((_QWORD *)this + 443) = *((_QWORD *)a2 + 8);
  }
}
