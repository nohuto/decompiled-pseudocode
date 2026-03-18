/*
 * XREFs of ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140009084
 * Callers:
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x14000945C (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     memmove_0 @ 0x140004AE3 (memmove_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140008368 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140008458 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000849C (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXXZ @ 0x14000877C (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXXZ.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x1400088AC (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?GetFrontBufferColorMap@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ @ 0x140008D10 (-GetFrontBufferColorMap@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ.c)
 *     ?GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ @ 0x140008D88 (-GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x140009674 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     _tlgKeywordOn @ 0x140009A3C (_tlgKeywordOn.c)
 *     ??0CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@PEBG00@Z @ 0x140009B04 (--0CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@PEBG00@Z.c)
 *     ??1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ @ 0x140009B60 (--1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ.c)
 *     ?CollectCurrentProcessHeapDump@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXXZ @ 0x140009C20 (-CollectCurrentProcessHeapDump@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXXZ.c)
 *     ?QueueReportForSubmission@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA?AW4_WER_SUBMIT_RESULT@@XZ @ 0x140009C88 (-QueueReportForSubmission@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA-AW4_WER_SUBMIT_RESU.c)
 *     ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x140009CD0 (-SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z.c)
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x140009D2C (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000A064 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::Run(
        BlackScreenDiagnostics::CBlackScreenDiagnosticReport *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  char v4; // si
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  const unsigned __int16 *v8; // r14
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport *v9; // rcx
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  PCWSTR *v15; // rdi
  const WCHAR *v16; // rbx
  HRESULT v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  const unsigned __int16 *VidPnOwner; // rdi
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
  RPC_WSTR StringUuid; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C8h] BYREF
  __int64 value; // [rsp+48h] [rbp-C0h] BYREF
  PCWSTR value_8[2]; // [rsp+50h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v40; // [rsp+70h] [rbp-98h] BYREF
  __m128i v41; // [rsp+80h] [rbp-88h]
  HREPORT phReportHandle[14]; // [rsp+98h] [rbp-70h] BYREF

  v4 = (char)a3;
  v5 = (int)a2;
  if ( ((unsigned __int8)a3 & 3) != 0 )
  {
    if ( (_DWORD)a2 != 1 )
    {
      si128.m128i_i32[0] = 1;
      *(UUID *)value_8 = Uuid;
      v6 = RtlPublishWnfStateData(WNF_DWM_DUMP_REQUEST, 0LL, value_8, 20LL, 0LL) | 0x10000000;
      if ( v6 < 0 )
        MicrosoftTelemetryAssertTriggeredArgs(v7, (unsigned int)v6, 0LL);
    }
    if ( v5 )
    {
      if ( v5 == 1 )
        v8 = L"LongPowerButtonHold";
      else
        v8 = L"Unknown";
    }
    else
    {
      v8 = L"Hotkey";
    }
    BlackScreenDiagnostics::CWatsonErrorReporting::CWatsonErrorReporting(
      (BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle,
      a2,
      a3,
      a4);
    v10 = 0;
    if ( (v4 & 2) != 0 )
    {
      LOWORD(value_8[0]) = 0;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      StringUuid = 0LL;
      if ( !UuidToStringW(&Uuid, &StringUuid) )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( StringUuid[v13] );
        if ( v13 > si128.m128i_i64[1] )
        {
          std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
            (__int64)value_8,
            v13,
            v12,
            StringUuid);
        }
        else
        {
          v14 = 2 * v13;
          si128.m128i_i64[0] = v13;
          v15 = value_8;
          if ( si128.m128i_i64[1] >= 8uLL )
            v15 = (PCWSTR *)value_8[0];
          memmove_0(v15, StringUuid, 2 * v13);
          *(_WORD *)((char *)v15 + v14) = 0;
        }
        RpcStringFreeW(&StringUuid);
        v16 = (const WCHAR *)value_8;
        if ( si128.m128i_i64[1] >= 8uLL )
          v16 = value_8[0];
        if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(phReportHandle) )
        {
          v17 = WerRegisterCustomMetadata(L"BlackScreenInstanceGuid", v16);
          if ( v17 < 0 )
            MicrosoftTelemetryAssertTriggeredArgs(v18, (unsigned int)v17, 0LL);
        }
        v10 = 1;
      }
      if ( (unsigned int)dword_1400151C0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1400151C0, 0x800000000000LL) )
      {
        v36 = (__int64)&Uuid;
        value = 50331648LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
          v19,
          (int)&unk_14000FD55,
          v20,
          v21,
          (__int64)&value,
          &v36);
      }
      LOBYTE(v11) = 1;
      BlackScreenDiagnostics::TriggerGraphicsCollection(0LL, v11);
      if ( si128.m128i_i64[1] >= 8uLL )
        std::_Deallocate<16,0>((char *)value_8[0], 2 * si128.m128i_i64[1] + 2);
    }
    VidPnOwner = BlackScreenDiagnostics::CBlackScreenDiagnosticReport::GetVidPnOwner(v9);
    FrontBufferColorMap = BlackScreenDiagnostics::CBlackScreenDiagnosticReport::GetFrontBufferColorMap(v24, v23, v25);
    if ( (v4 & 1) != 0 )
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
      v8);
    v41 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v40) = 0;
    BlackScreenDiagnostics::GetCurrentProcessVersionInfo(&v40, v27, v28);
    v29 = (const unsigned __int16 *)&v40;
    if ( v41.m128i_i64[1] >= 8uLL )
      v29 = v40;
    BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
      (BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle,
      4u,
      v29);
    BlackScreenDiagnostics::CWatsonErrorReporting::QueueReportForSubmission((BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle);
    if ( (unsigned int)dword_1400151C0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1400151C0, 0x800000000000LL) )
    {
      v36 = 50331648LL;
      value = (__int64)&Uuid;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
        v30,
        (int)&unk_14000FD10,
        v31,
        v32,
        (__int64)&v36,
        &value);
    }
    if ( v10 )
    {
      if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(phReportHandle) )
      {
        v33 = WerUnregisterCustomMetadata(L"BlackScreenInstanceGuid");
        if ( v33 < 0 )
          MicrosoftTelemetryAssertTriggeredArgs(v34, (unsigned int)v33, 0LL);
      }
    }
    if ( v41.m128i_i64[1] >= 8uLL )
      std::_Deallocate<16,0>((char *)v40, 2 * v41.m128i_i64[1] + 2);
    v41 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v40) = 0;
    BlackScreenDiagnostics::CWatsonErrorReporting::~CWatsonErrorReporting((BlackScreenDiagnostics::CWatsonErrorReporting *)phReportHandle);
  }
  if ( (v4 & 4) != 0 )
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::DoDisplayModeReset(a1);
}
