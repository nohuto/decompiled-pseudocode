/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C00AFDCC
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0035C74 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C00363B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C00AFFA4 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C00AFFE4 (ApiSetEditionCommitMousePosAndMove.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C00C21F4 (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01F41B0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01F8D0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C01F9640 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT a3,
        struct _MousePacketPerf *a4)
{
  __int64 v7; // r8
  BOOL v8; // esi
  __int64 v9; // r8
  BOOL v10; // edi
  __int64 v11; // r8
  BOOL v12; // ebx
  __int64 v13; // r8
  bool v14; // al
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  LONG y; // [rsp+60h] [rbp-29h] BYREF
  LONG x; // [rsp+64h] [rbp-25h] BYREF
  struct tagPOINT v22; // [rsp+68h] [rbp-21h] BYREF
  __int64 v23; // [rsp+70h] [rbp-19h] BYREF
  __int64 v24; // [rsp+78h] [rbp-11h] BYREF
  _WORD v25[4]; // [rsp+80h] [rbp-9h] BYREF
  int v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+8Ch] [rbp+3h]
  int v28; // [rsp+90h] [rbp+7h]
  int v29; // [rsp+94h] [rbp+Bh]

  v22 = a3;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16LL, *(_QWORD *)&a3)
    && CBaseProcessor::IsUMSuppressed(this) )
  {
    v16 = 0;
    v19 = 4LL;
LABEL_16:
    InputTraceLogging::Mouse::DropMove(*((_QWORD *)a2 + 7), v19, v7);
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 22) )
  {
    v15 = ApiSetEditionCommitMousePosAndMove((unsigned int)&v22, 0, 0, (int)a2 + 24, 0, 0LL, 0, 1, 1, 0, (__int64)a4);
  }
  else
  {
    v25[1] = *((_WORD *)a2 + 1);
    v25[2] = *((_WORD *)a2 + 2);
    v25[3] = *((_WORD *)a2 + 3);
    v27 = *((_DWORD *)a2 + 3);
    v28 = *((_DWORD *)a2 + 4);
    v29 = *((_DWORD *)a2 + 5);
    v26 = *((_DWORD *)a2 + 2);
    v25[0] = 0;
    v8 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16LL, v7);
    v10 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 2LL, v9);
    v12 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x2000LL, v11);
    v14 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x10000LL, v13);
    v15 = ApiSetEditionCommitMousePosAndMove(
            (unsigned int)&v22,
            *((_DWORD *)a2 + 5),
            (unsigned int)v25,
            (int)a2 + 24,
            *((_DWORD *)a2 + 12),
            *((_QWORD *)a2 + 7),
            v8,
            v10,
            v12,
            v14,
            (__int64)a4);
  }
  v16 = v15;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_DesktopDWMCursor__private_reporting,
    27829265LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
    0,
    3);
  if ( !v16 )
  {
    v19 = 2LL;
    goto LABEL_16;
  }
LABEL_5:
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
  {
    v23 = InputTraceLogging::CommitMousePosAndMoveResultToString(v16);
    y = gptCursorAsync.y;
    x = gptCursorAsync.x;
    v24 = *((_QWORD *)a2 + 7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_1C028EE70,
      (__int64)&v24,
      (__int64)&x,
      (__int64)&y,
      (__int64)&v23);
  }
  if ( v16 && (v16 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v7);
  *((_DWORD *)a2 + 19) = v16;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a2, 1LL) )
  {
    *((_OWORD *)this + 221) = *((_OWORD *)a2 + 3);
    *((_QWORD *)this + 444) = *((_QWORD *)a2 + 8);
  }
}
