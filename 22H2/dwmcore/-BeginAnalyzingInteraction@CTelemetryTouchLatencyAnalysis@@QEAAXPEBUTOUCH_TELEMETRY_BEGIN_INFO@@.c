/*
 * XREFs of ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x1800235E8
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x180023E60 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_B.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180023208 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?GetDwmRemotingMode@CTelemetryTouchLatencyAnalysis@@CA?AW4Enum@DwmRemotingMode@@XZ @ 0x180023D04 (-GetDwmRemotingMode@CTelemetryTouchLatencyAnalysis@@CA-AW4Enum@DwmRemotingMode@@XZ.c)
 *     ?BeginInteraction@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_K@Z @ 0x180023D20 (-BeginInteraction@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnaly.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180023D4C (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18003454C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180035058 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800350CC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18015B9DC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18015BA78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?ReuseScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_K@Z @ 0x18015FF38 (-ReuseScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a2,
        __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        const struct _LUID *a7,
        bool a8)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  CTelemetryTouchLatencyAnalysis *v14; // r11
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v15; // rbx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v16; // rax
  const unsigned __int16 *v17; // rdx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v18; // rbx
  _WORD *v19; // rdx
  unsigned __int64 v20; // rcx
  _WORD *v21; // rax
  _WORD *v22; // rdi
  __int64 v23; // rdi
  __int128 v24; // xmm0
  __m128i v25; // xmm1
  __int128 v26; // xmm0
  __m128i v27; // xmm1
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int128 v34; // xmm0
  int v35; // edx
  _WORD *v36; // rcx
  int v37; // [rsp+40h] [rbp-89h] BYREF
  __int64 v38; // [rsp+48h] [rbp-81h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-79h] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v40; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp-59h]
  unsigned __int64 v43; // [rsp+78h] [rbp-51h]
  __int128 v44; // [rsp+80h] [rbp-49h] BYREF
  __m128i si128; // [rsp+90h] [rbp-39h]
  __int128 v46; // [rsp+A0h] [rbp-29h] BYREF
  __m128i v47; // [rsp+B0h] [rbp-19h]

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v15 = Scenario;
  if ( !Scenario )
  {
    if ( !a4 && *((_DWORD *)a2 + 12) != 2 )
      return;
    v16 = CTelemetryTouchLatencyAnalysis::AllocateScenario(v14);
    v17 = (const unsigned __int16 *)&unk_1802CE8C0;
    v18 = v16;
    if ( a4 )
      v17 = a4;
    std::wstring::wstring(v41, v17);
    v19 = v41;
    if ( v43 >= 8 )
      v19 = (_WORD *)v41[0];
    if ( !v42 )
      goto LABEL_31;
    v20 = v42;
    v21 = v19;
    v22 = 0LL;
    if ( *v19 == 1 )
    {
LABEL_11:
      v22 = v21;
    }
    else
    {
      while ( v20 != 1 )
      {
        ++v21;
        --v20;
        if ( *v21 == 1 )
          goto LABEL_11;
      }
    }
    if ( v22 )
      v23 = v22 - v19;
    else
LABEL_31:
      v23 = -1LL;
    if ( v23 != -1 )
    {
      LOWORD(v44) = 0;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      std::wstring::assign(&v44);
      if ( (__int128 *)((char *)v18 + 16) != &v44 )
      {
        std::wstring::_Tidy_deallocate((char *)v18 + 16);
        v24 = v44;
        LOWORD(v44) = 0;
        v25 = si128;
        *((_OWORD *)v18 + 1) = v24;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        *((__m128i *)v18 + 2) = v25;
      }
      std::wstring::_Tidy_deallocate(&v44);
      LOWORD(v46) = 0;
      v47 = _mm_load_si128((const __m128i *)&_xmm);
      if ( v42 >= v23 + 1 )
      {
        std::wstring::assign(&v46);
        if ( (__int128 *)((char *)v18 + 48) != &v46 )
        {
          std::wstring::_Tidy_deallocate((char *)v18 + 48);
          v26 = v46;
          LOWORD(v46) = 0;
          v27 = v47;
          *((_OWORD *)v18 + 3) = v26;
          v47 = _mm_load_si128((const __m128i *)&_xmm);
          *((__m128i *)v18 + 4) = v27;
        }
        std::wstring::_Tidy_deallocate(&v46);
LABEL_21:
        v28 = *(_QWORD *)a2;
        *((_QWORD *)v18 + 1) = *(_QWORD *)a2;
        *((_DWORD *)v18 + 20) = *((_DWORD *)a2 + 3);
        *((_WORD *)v18 + 64) = *((_WORD *)a2 + 4);
        *((_WORD *)v18 + 65) = *((_WORD *)a2 + 5);
        *((_DWORD *)v18 + 33) = a6;
        v29 = (__int64)*a7;
        *((_BYTE *)v18 + 144) = a8;
        *((_QWORD *)v18 + 17) = v29;
        *((_DWORD *)v18 + 37) = CTelemetryTouchLatencyAnalysis::GetDwmRemotingMode(v29, v28);
        *((_DWORD *)v18 + 22) = *((_DWORD *)a2 + 4);
        v34 = *(_OWORD *)((char *)a2 + 20);
        *((_DWORD *)v18 + 39) = 0;
        *(_OWORD *)((char *)v18 + 100) = v34;
        *((_QWORD *)v18 + 15) = *((_QWORD *)a2 + 5);
        *((_DWORD *)v18 + 24) = *((_DWORD *)a2 + 12);
        if ( (unsigned int)dword_180344EB8 > 4 && (qword_180344EC8 & 8) != 0 && (qword_180344ED0 & 8) == qword_180344ED0 )
        {
          v37 = *((_DWORD *)v18 + 38);
          v38 = v30;
          v39 = a5;
          v40 = v18;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v31,
            (unsigned int)&unk_1802E59F7,
            v32,
            v33,
            (__int64)&v40,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v39);
        }
        InteractionTraceProvider::BeginInteraction(v18, a5);
        std::wstring::_Tidy_deallocate(v41);
        return;
      }
      std::_Xout_of_range("invalid string position");
      __debugbreak();
    }
    if ( (_QWORD *)((char *)v18 + 16) != v41 )
      std::wstring::assign((char *)v18 + 16);
    v36 = (_WORD *)((char *)v18 + 48);
    if ( *((_QWORD *)v18 + 9) >= 8uLL )
      v36 = (_WORD *)*((_QWORD *)v18 + 6);
    *((_QWORD *)v18 + 8) = 0LL;
    *v36 = 0;
    goto LABEL_21;
  }
  v35 = *((_DWORD *)Scenario + 38) + 1;
  *((_DWORD *)Scenario + 38) = v35;
  if ( (unsigned int)dword_180344EB8 > 5 && (qword_180344EC8 & 8) != 0 && (qword_180344ED0 & 8) == qword_180344ED0 )
  {
    v38 = *((_QWORD *)Scenario + 1);
    v37 = v35;
    v39 = (unsigned __int64)Scenario;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_1802E5AAB,
      v12,
      v13,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37);
  }
  InteractionTraceProvider::ReuseScenario(v15, a5);
  *((_QWORD *)v15 + 15) = *((_QWORD *)a2 + 5);
  InteractionTraceProvider::BeginInteraction(v15, a5);
}
