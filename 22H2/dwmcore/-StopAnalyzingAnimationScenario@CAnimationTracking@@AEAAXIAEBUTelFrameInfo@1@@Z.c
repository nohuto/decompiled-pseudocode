/*
 * XREFs of ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B0B88
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18006CE20 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800B0980 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800B17AC (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 * Callees:
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800B1104 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800B11C4 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800B2088 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800B2244 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioDetails@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@QEBAPEBGXZ @ 0x1800B2298 (-GetScenarioDetails@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@QEBAPEBGXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800B2544 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     McTemplateU0qqqzzq_EventWriteTransfer @ 0x1800B25FC (McTemplateU0qqqzzq_EventWriteTransfer.c)
 *     McTemplateU0xxqqqzzq_EventWriteTransfer @ 0x1800B2714 (McTemplateU0xxqqqzzq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$07@@544444433434@Z @ 0x180156658 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U2@U2.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer @ 0x1801570F4 (McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer.c)
 */

void __fastcall CAnimationTracking::StopAnalyzingAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        const struct CAnimationTracking::TelFrameInfo *a3)
{
  const struct _GUID *v3; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // r12d
  __int64 v10; // r8
  float v11; // xmm0_4
  float v12; // xmm1_4
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  LONGLONG v15; // r8
  LONGLONG v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rtt
  unsigned __int16 *ScenarioName; // r13
  CAnimationTracking *v20; // rcx
  unsigned int v21; // r9d
  const unsigned __int16 *ScenarioDetails; // r11
  size_t v23; // r8
  int v24; // edx
  DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *v25; // rcx
  DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *v26; // rcx
  const unsigned __int16 *v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r9d
  char v30; // al
  char v31; // r8
  char v32; // al
  unsigned int v33; // ecx
  bool v34; // zf
  const unsigned __int16 *v35; // r8
  const struct _GUID *v36; // rax
  CAnimationTracking *v37; // rbx
  wchar_t *v38; // rcx
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  char v42; // al
  unsigned int v43; // r9d
  wchar_t *v44; // rdx
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // rtt
  wchar_t *v47; // r8
  __int64 v48; // rcx
  int v49; // eax
  wchar_t *v50; // rax
  wchar_t *v51; // rcx
  unsigned __int16 **v52; // [rsp+20h] [rbp-120h]
  int v53; // [rsp+C0h] [rbp-80h]
  unsigned int v54; // [rsp+C4h] [rbp-7Ch]
  int v55; // [rsp+C8h] [rbp-78h]
  unsigned int v56; // [rsp+D0h] [rbp-70h]
  unsigned __int64 v57; // [rsp+E0h] [rbp-60h]
  unsigned int v59; // [rsp+128h] [rbp-18h]
  unsigned int v60; // [rsp+130h] [rbp-10h]
  unsigned __int16 *v62; // [rsp+168h] [rbp+28h] BYREF
  unsigned int v63[2]; // [rsp+170h] [rbp+30h]
  wchar_t String2[12]; // [rsp+178h] [rbp+38h] BYREF
  unsigned __int16 v65[128]; // [rsp+190h] [rbp+50h] BYREF
  unsigned __int16 v66[128]; // [rsp+290h] [rbp+150h] BYREF
  unsigned __int16 v67[128]; // [rsp+390h] [rbp+250h] BYREF

  v3 = 0LL;
  LODWORD(v4) = 0;
  v59 = a2;
  v56 = 0;
  LODWORD(v57) = 0;
  LOBYTE(v53) = 0;
  v5 = *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
  if ( *(_BYTE *)a3 && *(_DWORD *)(v5 + 72) >= 3u && (v6 = *(_DWORD *)(v5 + 28), v6 > *(_DWORD *)(v5 + 24)) )
  {
    v7 = v6 - *(_DWORD *)(v5 + 24);
    v8 = *(_DWORD *)(v5 + 32);
    if ( v8 > v7 )
    {
      *(_DWORD *)(v5 + 32) = v7;
      v8 = v7;
    }
    v9 = 100 * v8 / v7;
    if ( !v9 )
      v9 = v8 != 0;
    v10 = *((_QWORD *)a3 + 2);
    *(_QWORD *)v63 = v10 * (unsigned __int64)v7 / 0x2710;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = 10000000.0 / v11;
    if ( (float)(10000000.0 / v11) >= 59.0 && v12 <= 61.0 )
      v12 = FLOAT_60_0;
    v13 = *(_QWORD *)(v5 + 96);
    v14 = *(_QWORD *)(v5 + 152);
    v55 = (int)v12;
    v54 = (int)v12 * (100 - v9) / 0x64;
    v15 = v13 / g_qpcFrequency.QuadPart;
    v16 = v13 % g_qpcFrequency.QuadPart;
    v60 = 1000 * v15 + (unsigned __int64)(1000 * v16) / g_qpcFrequency.QuadPart;
    if ( v14 )
    {
      if ( *(_QWORD *)(v14 + 8) )
      {
        v17 = *(_QWORD *)(v5 + 104);
        if ( v17 > *(_QWORD *)(v14 + 8) )
        {
          v18 = v17 - *(_QWORD *)(v14 + 8);
          v16 = v18 / g_qpcFrequency.QuadPart;
          v4 = (10000000 * (v18 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
              + 10000000 * (v18 / g_qpcFrequency.QuadPart))
             / 0x2710;
          v56 = v4;
          if ( (_DWORD)v4 )
            v16 = *(_QWORD *)(v5 + 80) / g_qpcFrequency.QuadPart;
        }
      }
      if ( *(_QWORD *)(v14 + 16) )
      {
        v45 = *(_QWORD *)(v5 + 104);
        if ( v45 > *(_QWORD *)(v14 + 16) )
        {
          v46 = v45 - *(_QWORD *)(v14 + 16);
          v16 = v46 / g_qpcFrequency.QuadPart;
          v57 = (10000000 * (v46 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
               + 10000000 * (v46 / g_qpcFrequency.QuadPart))
              / 0x2710;
        }
      }
      v53 = *(_DWORD *)(v14 + 24);
    }
    ScenarioName = (unsigned __int16 *)CAnimationTracking::GetScenarioName(
                                         (CAnimationTracking *)g_qpcFrequency.QuadPart,
                                         (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v5,
                                         v66,
                                         v16);
    ScenarioDetails = CAnimationTracking::GetScenarioDetails(
                        v20,
                        (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v5,
                        v67,
                        v21);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v47 = word_1802CE8C0;
      if ( *(_QWORD *)(v5 + 136) )
        v47 = *(wchar_t **)(v5 + 136);
      v48 = *(_QWORD *)(v5 + 152);
      if ( v48 )
        v49 = *(_DWORD *)(v48 + 28);
      else
        LOBYTE(v49) = 0;
      McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer(
        v54,
        v55,
        *(_QWORD *)(v5 + 56),
        *((_QWORD *)a3 + 1),
        v9,
        v7,
        v55,
        v54,
        v60,
        (__int64)ScenarioName,
        *(_DWORD *)(v5 + 20),
        *(_DWORD *)(v5 + 36),
        v4,
        v57,
        v53,
        v49,
        (__int64)ScenarioDetails,
        (__int64)v47,
        *(_DWORD *)(v5 + 40),
        *(_DWORD *)(v5 + 32));
    }
    wcscpy(String2, L"DManip");
    if ( ScenarioName )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( String2[v23] );
      if ( wcsncmp(ScenarioName, String2, v23)
        && (unsigned int)dword_180344E48 > 5
        && (qword_180344E58 & 0x200000000004LL) != 0
        && (qword_180344E60 & 0x200000000004LL) == qword_180344E60 )
      {
        v50 = *(wchar_t **)(v5 + 136);
        v51 = word_1802CE8C0;
        v62 = ScenarioName;
        if ( v50 )
          v51 = v50;
        v52 = &v62;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v51,
          &unk_1802E3D38);
      }
    }
    if ( *(_DWORD *)(v5 + 32) || (unsigned int)v4 >= 0xC8 )
    {
      v24 = *(_DWORD *)(v5 + 32);
      if ( *(_DWORD *)v5 )
      {
        v25 = *(DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO **)(v5 + 152);
        if ( v25 )
        {
          if ( DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::GetScenarioDetails(v25) )
          {
            v27 = DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::GetScenarioDetails(v26);
            LODWORD(v52) = *(_DWORD *)(v28 + 28);
            StringCchPrintfW(v65, 0x80uLL, L"%ws|%X|%ws", ScenarioName, v52, v27);
            v24 = *(_DWORD *)(v5 + 32);
            ScenarioName = v65;
          }
        }
      }
      v29 = (int)v12;
      if ( v24 )
      {
        v30 = -1;
        if ( v7 < 0xFFF )
          v30 = v7;
        v31 = v30;
        v32 = -1;
        if ( v60 < 0xFFF )
          v32 = v60;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
        {
          v38 = word_1802CE8C0;
          if ( *(_QWORD *)(v5 + 136) )
            v38 = *(wchar_t **)(v5 + 136);
          McTemplateU0xxqqqzzq_EventWriteTransfer(
            (_DWORD)v38,
            *(_DWORD *)(v5 + 20),
            *(_QWORD *)(v5 + 56),
            *((_QWORD *)a3 + 1),
            v9,
            v31,
            v32,
            (__int64)ScenarioName,
            (__int64)v38,
            *(_DWORD *)(v5 + 20));
          v29 = (int)v12;
        }
      }
      if ( v56 < 0xC8 )
        goto LABEL_39;
      v39 = 255;
      v40 = 4095;
      if ( v7 < 0xFFF )
        v40 = v7;
      if ( v29 < 0xFF )
        v39 = v29;
      v41 = v40 | (v39 << 12);
      v42 = -1;
      v43 = v41 | 0x80000000;
      if ( !*(_DWORD *)v5 )
        v43 = v41;
      if ( (unsigned int)v57 < 0xFFF )
        v42 = v57;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
      {
        v44 = word_1802CE8C0;
        if ( *(_QWORD *)(v5 + 136) )
          v44 = *(wchar_t **)(v5 + 136);
        LODWORD(v4) = v56;
        McTemplateU0qqqzzq_EventWriteTransfer(
          *(_DWORD *)(v5 + 20),
          (_DWORD)v44,
          v56,
          v43,
          v42,
          (__int64)ScenarioName,
          (__int64)v44,
          *(_DWORD *)(v5 + 20));
      }
      else
      {
LABEL_39:
        LODWORD(v4) = v56;
      }
    }
    v33 = *(_DWORD *)(v5 + 36);
    v34 = *(_DWORD *)v5 == 0;
    if ( *(_DWORD *)v5 )
      v35 = *(const unsigned __int16 **)(v5 + 136);
    else
      v35 = 0LL;
    v36 = (const struct _GUID *)(v5 + 4);
    v37 = this;
    if ( v34 )
      v3 = v36;
    CAnimationTracking::UpdateLongtermStatistics(this, v3, v35, v9, v55, v54, v4, v63[0], v33);
    a2 = v59;
  }
  else
  {
    v37 = this;
  }
  CAnimationTracking::DeleteScenario(v37, a2);
}
