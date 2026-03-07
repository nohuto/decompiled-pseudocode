void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::Run(
        BlackScreenDiagnostics::CBlackScreenDiagnosticReport *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  char v5; // si
  int v6; // ebx
  __int128 v7; // xmm0
  DWORD CurrentProcessId; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  const unsigned __int16 *v13; // rbx
  __int64 v14; // rdx
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport *v15; // rcx
  const WCHAR *v16; // r14
  HRESULT v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  const unsigned __int16 *VidPnOwner; // r14
  __int64 v23; // rdx
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport *v24; // rcx
  __int64 v25; // r8
  const unsigned __int16 *FrontBufferColorMap; // r15
  __int64 v27; // rdx
  __int64 v28; // r8
  const unsigned __int16 *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  HRESULT v33; // eax
  __int64 v34; // rcx
  RPC_WSTR StringUuid; // [rsp+30h] [rbp-99h] BYREF
  __int64 v36; // [rsp+38h] [rbp-91h] BYREF
  __int64 v37; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int16 *v38[2]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v39; // [rsp+58h] [rbp-71h]
  unsigned __int64 v40; // [rsp+60h] [rbp-69h]
  __int128 v41; // [rsp+68h] [rbp-61h] BYREF
  DWORD pSessionId[2]; // [rsp+78h] [rbp-51h] BYREF
  HREPORT phReportHandle[14]; // [rsp+80h] [rbp-49h] BYREF

  v5 = (char)a3;
  v6 = (int)a2;
  if ( ((unsigned __int8)a3 & 3) == 0 )
    goto LABEL_35;
  if ( (_DWORD)a2 == 1 )
    goto LABEL_11;
  v7 = *(_OWORD *)a4;
  pSessionId[1] = 0;
  v41 = v7;
  pSessionId[0] = 1;
  CurrentProcessId = GetCurrentProcessId();
  ProcessIdToSessionId(CurrentProcessId, &pSessionId[1]);
  v9 = RtlPublishWnfStateData(WNF_DWM_DUMP_REQUEST, 0LL, &v41, 24LL, 0LL) | 0x10000000;
  if ( v9 < 0 )
    MicrosoftTelemetryAssertTriggeredArgs(v10, (unsigned int)v9, 0LL);
  v11 = RtlPublishWnfStateData(WNF_DWM_DUMP_REQUEST_FOR_SERVICE, 0LL, &v41, 24LL, 0LL) | 0x10000000;
  if ( v11 < 0 )
    MicrosoftTelemetryAssertTriggeredArgs(v12, (unsigned int)v11, 0LL);
  if ( !v6 )
  {
    v13 = L"Hotkey";
    goto LABEL_12;
  }
  if ( v6 == 1 )
  {
LABEL_11:
    v13 = L"LongPowerButtonHold";
    goto LABEL_12;
  }
  v13 = L"Unknown";
LABEL_12:
  BlackScreenDiagnostics::CWatsonErrorReporting::CWatsonErrorReporting(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle,
    a2,
    a3,
    a4);
  StringUuid = 0LL;
  if ( !UuidToStringW((const UUID *)a4, &StringUuid) )
  {
    v16 = StringUuid;
    if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(phReportHandle) )
    {
      v17 = WerRegisterCustomMetadata(L"BlackScreenInstanceGuid", v16);
      if ( v17 < 0 )
        MicrosoftTelemetryAssertTriggeredArgs(v18, (unsigned int)v17, 0LL);
    }
    RpcStringFreeW(&StringUuid);
  }
  if ( (v5 & 2) != 0 )
  {
    if ( (unsigned int)dword_140016000 > 5 && (unsigned __int8)tlgKeywordOn() )
    {
      v36 = (__int64)a4;
      v37 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
        v19,
        (int)&unk_140011355,
        v20,
        v21,
        (__int64)&v37,
        &v36);
    }
    LOBYTE(v14) = 1;
    BlackScreenDiagnostics::TriggerGraphicsCollection(0LL, v14, a4);
  }
  VidPnOwner = BlackScreenDiagnostics::CBlackScreenDiagnosticReport::GetVidPnOwner(v15);
  FrontBufferColorMap = BlackScreenDiagnostics::CBlackScreenDiagnosticReport::GetFrontBufferColorMap(v24, v23, v25);
  if ( (v5 & 1) != 0 )
    BlackScreenDiagnostics::CWatsonErrorReporting::CollectCurrentProcessHeapDump((BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle);
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle,
    0,
    VidPnOwner);
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle,
    1u,
    L"Unknown");
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle,
    2u,
    FrontBufferColorMap);
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle,
    3u,
    v13);
  v38[0] = 0LL;
  v40 = 7LL;
  v39 = 0LL;
  BlackScreenDiagnostics::GetCurrentProcessVersionInfo(v38, v27, v28);
  v29 = (const unsigned __int16 *)v38;
  if ( v40 >= 8 )
    v29 = v38[0];
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle,
    4u,
    v29);
  BlackScreenDiagnostics::CWatsonErrorReporting::QueueReportForSubmission((BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle);
  if ( (unsigned int)dword_140016000 > 5 && (unsigned __int8)tlgKeywordOn() )
  {
    v37 = (__int64)a4;
    v36 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
      v30,
      (int)&unk_1400112A9,
      v31,
      v32,
      (__int64)&v36,
      &v37);
  }
  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(phReportHandle) )
  {
    v33 = WerUnregisterCustomMetadata(L"BlackScreenInstanceGuid");
    if ( v33 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v34, (unsigned int)v33, 0LL);
  }
  if ( v40 >= 8 )
    std::_Deallocate<16,0>((char *)v38[0], 2 * v40 + 2);
  v39 = 0LL;
  v40 = 7LL;
  LOWORD(v38[0]) = 0;
  BlackScreenDiagnostics::CWatsonErrorReporting::~CWatsonErrorReporting((BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle);
LABEL_35:
  if ( (v5 & 4) != 0 )
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::DoDisplayModeReset(a1, (const struct _GUID *)a4);
}
