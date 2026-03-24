/*
 * XREFs of ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0049BD4
 * Callers:
 *     CitProcessCallout @ 0x1C0045FB0 (CitProcessCallout.c)
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C004B588 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagSHELL_INPUT_USAGE_DATA_.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C008FDFC (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     CitSessionConnectChange @ 0x1C00B4EB0 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C00B6FBC (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01FD3F4 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C00463E0 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C00464E8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C00465F4 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C0047474 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0048838 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C004A668 (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA-AU1@AEBU1@@Z.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C004AFF4 (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004B69C (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C008D088 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C008E2EC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U3@U3@U?$_tlgWrapperByVal@$03@@U4@U4@U?$_tlgWrapperByVal@$01@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U4@U5@U5@U5@U5@U2@U5@U2@U5@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@455AEBU?$_tlgWrapperByVal@$03@@66AEBU?$_tlgWrapperByVal@$01@@777777777777767777474763@Z @ 0x1C008EF38 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@$0BA@@@U2@U3@U3@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U3@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U5@U5@U5@U2@U5@U2@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@455AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@77747463@Z @ 0x1C008F28C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@$0BA_ea_1C008F28C.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C009FFB8 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01FD7E4 (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C01FE120 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C01FE628 (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 */

__int64 __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a5)
{
  struct tagSHELL_INPUT_USAGE_DATA_INFO *v5; // r14
  unsigned int v6; // edi
  __int64 v7; // r13
  char *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // edx
  unsigned int v16; // r9d
  int v17; // ecx
  bool v18; // cf
  unsigned int v19; // eax
  int v20; // edx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _CIT_PROCESS *v23; // rax
  int v24; // edi
  unsigned int v25; // ecx
  int v26; // eax
  struct tagPROCESSINFO *v27; // rdx
  int v28; // r14d
  struct tagPROCESSINFO *v29; // rdx
  struct _GUID *AppSessionId; // rax
  __int64 v31; // r9
  __int64 v32; // r8
  struct _GUID v33; // xmm0
  __int64 v34; // r8
  int v35; // r9d
  __int16 v36; // cx
  __int16 v37; // ax
  __int16 v38; // cx
  __int16 v39; // ax
  __int16 v40; // cx
  __int16 v41; // ax
  int v42; // ecx
  __int16 v43; // ax
  struct _CIT_INTERACTION_SUMMARY *v44; // rax
  struct _CIT_INTERACTION_SUMMARY *v45; // r11
  unsigned int v46; // ecx
  int v47; // r9d
  int v48; // r8d
  int v49; // edx
  unsigned int v50; // ecx
  int v51; // edx
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // edx
  unsigned int v55; // eax
  int v56; // ecx
  int v57; // eax
  unsigned int v58; // ecx
  unsigned int v59; // eax
  __int64 v60; // r11
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r11
  __int64 v65; // rbx
  int v66; // eax
  struct _GUID *v67; // rax
  __int64 v68; // r9
  __int64 v69; // r8
  struct _GUID v70; // xmm0
  int v71; // ecx
  __int64 v72; // r8
  int v73; // r9d
  __int64 v75; // rax
  unsigned int v76; // edx
  struct _CIT_PROG_DATA *v77; // rax
  unsigned int v78; // ecx
  int v79; // r8d
  int v80; // edx
  unsigned int v81; // ecx
  int v82; // edx
  char v83; // [rsp+130h] [rbp-80h] BYREF
  char v84; // [rsp+131h] [rbp-7Fh] BYREF
  char v85; // [rsp+132h] [rbp-7Eh] BYREF
  char v86; // [rsp+133h] [rbp-7Dh] BYREF
  char v87; // [rsp+134h] [rbp-7Ch] BYREF
  char v88; // [rsp+135h] [rbp-7Bh] BYREF
  char v89; // [rsp+136h] [rbp-7Ah] BYREF
  char v90; // [rsp+137h] [rbp-79h] BYREF
  int v91; // [rsp+138h] [rbp-78h] BYREF
  unsigned int v92; // [rsp+13Ch] [rbp-74h] BYREF
  __int16 v93; // [rsp+140h] [rbp-70h] BYREF
  __int16 v94; // [rsp+142h] [rbp-6Eh] BYREF
  __int16 v95; // [rsp+144h] [rbp-6Ch] BYREF
  __int16 v96; // [rsp+146h] [rbp-6Ah] BYREF
  __int16 v97; // [rsp+148h] [rbp-68h] BYREF
  __int16 v98; // [rsp+14Ah] [rbp-66h] BYREF
  __int16 v99; // [rsp+14Ch] [rbp-64h] BYREF
  __int16 v100; // [rsp+14Eh] [rbp-62h] BYREF
  __int16 v101; // [rsp+150h] [rbp-60h] BYREF
  __int16 v102; // [rsp+152h] [rbp-5Eh] BYREF
  __int16 v103; // [rsp+154h] [rbp-5Ch] BYREF
  __int16 v104; // [rsp+156h] [rbp-5Ah] BYREF
  __int16 v105; // [rsp+158h] [rbp-58h] BYREF
  __int16 v106; // [rsp+15Ah] [rbp-56h] BYREF
  __int16 v107; // [rsp+15Ch] [rbp-54h] BYREF
  __int16 v108; // [rsp+15Eh] [rbp-52h] BYREF
  __int16 v109; // [rsp+160h] [rbp-50h] BYREF
  __int16 v110; // [rsp+162h] [rbp-4Eh] BYREF
  __int16 v111; // [rsp+164h] [rbp-4Ch] BYREF
  __int16 v112; // [rsp+166h] [rbp-4Ah] BYREF
  __int16 v113; // [rsp+168h] [rbp-48h] BYREF
  __int16 v114; // [rsp+16Ah] [rbp-46h] BYREF
  __int16 v115; // [rsp+16Ch] [rbp-44h] BYREF
  struct _CIT_PROCESS *v116; // [rsp+170h] [rbp-40h] BYREF
  unsigned int v117; // [rsp+178h] [rbp-38h] BYREF
  unsigned int v118; // [rsp+17Ch] [rbp-34h] BYREF
  unsigned int v119; // [rsp+180h] [rbp-30h] BYREF
  int v120; // [rsp+184h] [rbp-2Ch] BYREF
  int v121; // [rsp+188h] [rbp-28h] BYREF
  int v122; // [rsp+18Ch] [rbp-24h] BYREF
  unsigned int v123; // [rsp+190h] [rbp-20h] BYREF
  struct tagSHELL_INPUT_USAGE_DATA_INFO *v124; // [rsp+198h] [rbp-18h] BYREF
  int v125; // [rsp+1A0h] [rbp-10h] BYREF
  int v126; // [rsp+1A4h] [rbp-Ch]
  int v127; // [rsp+1A8h] [rbp-8h] BYREF
  int v128; // [rsp+1ACh] [rbp-4h]
  __int64 v129; // [rsp+1B0h] [rbp+0h] BYREF
  __int64 v130; // [rsp+1B8h] [rbp+8h] BYREF
  __int64 v131; // [rsp+1C0h] [rbp+10h] BYREF
  struct _GUID *v132; // [rsp+1C8h] [rbp+18h] BYREF
  struct _GUID *v133; // [rsp+1D0h] [rbp+20h] BYREF
  struct _GUID *v134; // [rsp+1D8h] [rbp+28h] BYREF
  __int64 v135; // [rsp+1E0h] [rbp+30h] BYREF
  struct tagWND *v136; // [rsp+1E8h] [rbp+38h]
  __int64 v137; // [rsp+1F0h] [rbp+40h] BYREF
  struct _GUID *v138; // [rsp+1F8h] [rbp+48h] BYREF
  struct _GUID *v139; // [rsp+200h] [rbp+50h] BYREF
  struct _GUID *v140; // [rsp+208h] [rbp+58h] BYREF
  __int64 v141; // [rsp+210h] [rbp+60h] BYREF
  struct _GUID v142; // [rsp+218h] [rbp+68h] BYREF
  struct _GUID v143; // [rsp+228h] [rbp+78h] BYREF
  __int64 v144; // [rsp+238h] [rbp+88h] BYREF
  int v145; // [rsp+240h] [rbp+90h]
  __int64 v146; // [rsp+248h] [rbp+98h] BYREF
  int v147; // [rsp+250h] [rbp+A0h]
  struct _GUID v148; // [rsp+258h] [rbp+A8h] BYREF
  struct _GUID v149; // [rsp+268h] [rbp+B8h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = (__int64)a3;
  v136 = a4;
  v124 = a5;
  v91 = 0;
  if ( *((struct tagPROCESSINFO **)a1 + 15) == a3 )
    return 0LL;
  v10 = (char *)a1 + 204;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 204), a2);
  v11 = *((_QWORD *)v10 + 2);
  v129 = v11;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 228), a2);
  v12 = *(_QWORD *)((char *)a1 + 244);
  v13 = v11 - *((_DWORD *)a1 + 145);
  v130 = v12;
  if ( v13 > *(&xmmword_1C0255534 + 2) )
  {
    v76 = 3;
LABEL_60:
    CitpPostUpdateUseInfoLog(a1, v76);
    *((_DWORD *)a1 + 145) = v11;
    *((_DWORD *)a1 + 144) = a2;
    goto LABEL_4;
  }
  if ( a2 - *((_DWORD *)a1 + 144) > 2 * *(&xmmword_1C0255534 + 2) )
  {
    v76 = 4;
    goto LABEL_60;
  }
LABEL_4:
  if ( a2 - *((_DWORD *)a1 + 206) >= HIDWORD(xmmword_1C0255544) )
    CitpDPDataLog(a1);
  if ( *((_QWORD *)a1 + 15) )
  {
    v14 = *((_DWORD *)a1 + 81);
    v15 = -1;
    v16 = a2 - *((_DWORD *)a1 + 34);
    v92 = v16;
    v17 = v14 + 1;
    v18 = v14 + 1 < v14;
    v19 = *((_DWORD *)a1 + 82);
    if ( !v18 )
      v15 = v17;
    *((_DWORD *)a1 + 81) = v15;
    v20 = -1;
    if ( v19 + v16 >= v19 )
      v20 = v19 + v16;
    *((_DWORD *)a1 + 82) = v20;
    v116 = *(struct _CIT_PROCESS **)(*((_QWORD *)a1 + 15) + 928LL);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v129, &v125, (char *)a1 + 184);
    CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v130, &v127, (char *)a1 + 192);
    v23 = v116;
    v24 = v127;
    *((_DWORD *)a1 + 158) += v127;
    v25 = *((unsigned __int8 *)v23 + 92);
    if ( (v25 & 0x1E) != 0 )
    {
      v75 = (v25 >> 1) & 0xF;
      if ( (unsigned int)v75 < 0xB )
        *((_DWORD *)a1 + v75 + 158) += v24;
    }
    if ( dword_1C024A250 && (unsigned __int8)tlgKeywordOn(&dword_1C024A250, 0x800000000800LL, v21, v22) )
    {
      v26 = *(_DWORD *)((char *)a1 + 178);
      v27 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
      v144 = *(_QWORD *)((char *)a1 + 170);
      v145 = v26;
      CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v144, v27, 0LL);
      v28 = v125;
      if ( HIBYTE(qword_1C0255554) )
      {
        v29 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
        v117 = 0;
        AppSessionId = CitpProcessGetAppSessionId(&v142, v29, &v117);
        v32 = *((_QWORD *)a1 + 104) + 1LL;
        v33 = *AppSessionId;
        *((_QWORD *)a1 + 104) = v32;
        v148 = v33;
        if ( (unsigned int)dword_1C024A250 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024A250, 0x800000000800LL, v32, v31) )
          {
            v119 = v117;
            v36 = *((_WORD *)a1 + 80);
            v115 = *((_WORD *)a1 + 81);
            v93 = v145;
            v84 = BYTE2(v145);
            v94 = HIWORD(v144);
            v95 = WORD2(v144);
            v96 = WORD1(v144);
            v97 = v144;
            v120 = *(&xmmword_1C0255534 + 1);
            v98 = *((_WORD *)a1 + 83);
            v99 = *((_WORD *)a1 + 82);
            v100 = *((_WORD *)a1 + 76);
            v37 = v36 + *((_WORD *)a1 + 79);
            v101 = v36;
            v38 = *((_WORD *)a1 + 78);
            v102 = v37;
            v39 = v38 + *((_WORD *)a1 + 77);
            v103 = v38;
            v40 = *((_WORD *)a1 + 75);
            v104 = v39;
            v41 = v40 + *((_WORD *)a1 + 74);
            v105 = v40;
            v42 = *((unsigned __int16 *)a1 + 73);
            v106 = v41;
            v114 = *((_WORD *)a1 + 72);
            v43 = *((_WORD *)a1 + 71);
            v131 = v34;
            v108 = v42 + v43;
            v109 = *((_WORD *)a1 + 70);
            v110 = v126;
            v123 = v92;
            v132 = &v148;
            v133 = &v148;
            v134 = &v148;
            v83 = 1;
            v107 = v42;
            v121 = v24;
            v122 = v28;
            v85 = 1;
            v86 = 0;
            v135 = 0x2000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v42,
              (unsigned int)&unk_1C0222E2A,
              v34,
              v35,
              (__int64)&v135,
              (__int64)&v86,
              (__int64)&v134,
              (__int64)&v85,
              (__int64)&v133,
              (__int64)&v132,
              (__int64)&v123,
              (__int64)&v122,
              (__int64)&v121,
              (__int64)&v110,
              (__int64)&v109,
              (__int64)&v108,
              (__int64)&v114,
              (__int64)&v107,
              (__int64)&v106,
              (__int64)&v105,
              (__int64)&v104,
              (__int64)&v103,
              (__int64)&v102,
              (__int64)&v101,
              (__int64)&v100,
              (__int64)&v99,
              (__int64)&v98,
              (__int64)&v120,
              (__int64)&v97,
              (__int64)&v96,
              (__int64)&v95,
              (__int64)&v94,
              (__int64)&v84,
              (__int64)&v93,
              (__int64)&v83,
              (__int64)&v115,
              (__int64)&v119,
              (__int64)&v131);
          }
        }
      }
      if ( BYTE5(qword_1C0255554) )
      {
        v77 = CitpProcessEnsureProgData(*((struct tagPROCESSINFO **)v116 + 1));
        if ( v77 )
        {
          v78 = *((_DWORD *)v77 + 20);
          v79 = -1;
          v80 = v78 + 1;
          v18 = v78 + 1 < v78;
          v81 = *((_DWORD *)v77 + 21);
          if ( !v18 )
            v79 = v80;
          v82 = -1;
          *((_DWORD *)v77 + 20) = v79;
          if ( v81 + v92 >= v81 )
            v82 = v81 + v92;
          *((_DWORD *)v77 + 21) = v82;
          CitpProgDataNotifyUseUpdate(xmmword_1C0255560, v77);
        }
      }
      if ( (xmmword_1C0255544 & 1) != 0 )
      {
        v44 = CitpInteractionSummaryEnsure(a1, (struct tagPROCESSINFO **)v116, 2);
        v45 = v44;
        if ( v44 )
        {
          v46 = *((_DWORD *)v44 + 33);
          v47 = -1;
          v48 = -1;
          v49 = v46 + 1;
          v18 = v46 + 1 < v46;
          v50 = *((_DWORD *)v44 + 34);
          if ( !v18 )
            v48 = v49;
          v51 = -1;
          *((_DWORD *)v44 + 33) = v48;
          if ( v50 + v92 >= v50 )
            v51 = v50 + v92;
          v52 = -1;
          *((_DWORD *)v45 + 34) = v51;
          v53 = *((_DWORD *)v45 + 35);
          if ( v53 + (v126 & 0x7FFFFFFF) >= v53 )
            v52 = v53 + (v126 & 0x7FFFFFFF);
          v54 = -1;
          *((_DWORD *)v45 + 35) = v52;
          v55 = *((_DWORD *)v45 + 36);
          v56 = v28 + v55;
          v18 = v28 + v55 < v55;
          v57 = -1;
          if ( !v18 )
            v54 = v56;
          *((_DWORD *)v45 + 36) = v54;
          v58 = *((_DWORD *)v45 + 37);
          if ( v58 + (v128 & 0x7FFFFFFF) >= v58 )
            v57 = v58 + (v128 & 0x7FFFFFFF);
          *((_DWORD *)v45 + 37) = v57;
          v59 = *((_DWORD *)v45 + 38);
          if ( v59 + v24 >= v59 )
            v47 = v59 + v24;
          *((_DWORD *)v45 + 38) = v47;
          CitpInputTimesAddTo(
            (struct _CIT_INTERACTION_SUMMARY *)((char *)v45 + 32),
            (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
          *(_QWORD *)(v60 + 62) = v144;
          *(_DWORD *)(v60 + 70) = v145;
          CitpBitmapUpdateForTimeRange(
            (struct _CIT_BITMAP *)(v60 + 160),
            *((_DWORD *)a1 + 34),
            a2,
            *((_DWORD *)a1 + 218),
            DWORD2(xmmword_1C0255544));
        }
        if ( (xmmword_1C0255544 & 1) != 0 && a2 - *((_DWORD *)a1 + 218) > DWORD1(xmmword_1C0255544) )
          CitpInteractionSummariesFlush(a1, 0);
      }
      v5 = v124;
      *((_DWORD *)v116 + 20) = a2;
    }
    v6 = v91;
  }
  if ( v5 )
  {
    v6 = 1;
    *((_WORD *)v5 + 4) = *((_WORD *)a1 + 71);
    *((_WORD *)v5 + 6) = *((_WORD *)a1 + 72);
    *((_WORD *)v5 + 5) = *((_WORD *)a1 + 73);
    *((_WORD *)v5 + 7) = *((_WORD *)a1 + 74);
    *((_WORD *)v5 + 8) = *((_WORD *)a1 + 75);
    *((_WORD *)v5 + 9) = *((_WORD *)a1 + 76);
    *((_WORD *)v5 + 10) = *((_WORD *)a1 + 77);
    *((_WORD *)v5 + 11) = *((_WORD *)a1 + 78);
    *((_WORD *)v5 + 12) = *((_WORD *)a1 + 79);
    *((_WORD *)v5 + 13) = *((_WORD *)a1 + 80);
    *((_WORD *)v5 + 14) = *((_WORD *)a1 + 82);
    *((_WORD *)v5 + 15) = *((_WORD *)a1 + 83);
    v91 = 1;
  }
  if ( v7 )
  {
    v61 = v7 & -(__int64)((unsigned int)CitpAllowForegroundProcess(a1) != 0);
    v7 = v61;
    if ( v61 )
    {
      v7 = v61 & -(__int64)(CitpProcessEnsureContext((struct _CIT_PROCESS **)v61) != 0LL);
      v6 = v91;
    }
  }
  *((_QWORD *)a1 + 15) = v7;
  *((_DWORD *)a1 + 34) = a2;
  *((_QWORD *)a1 + 23) = v11;
  *((_QWORD *)a1 + 24) = v12;
  CitpInputTimesAddTo(
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 264),
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
  *(_OWORD *)v64 = 0LL;
  *(_QWORD *)(v64 + 16) = 0LL;
  *(_DWORD *)(v64 + 24) = 0;
  *(_WORD *)(v64 + 28) = 0;
  *(_QWORD *)((char *)a1 + 170) = 0LL;
  *(_DWORD *)((char *)a1 + 178) = 0;
  if ( v7 )
  {
    v65 = *(_QWORD *)(v7 + 928);
    if ( dword_1C024A250 && (unsigned __int8)tlgKeywordOn(&dword_1C024A250, 0x800000000800LL, v62, v63) )
    {
      if ( (xmmword_1C0255544 & 1) != 0
        && *((struct _CIT_IMPACT_CONTEXT **)a1 + 106) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 848) )
      {
        *((_DWORD *)a1 + 218) = a2;
        *((_QWORD *)a1 + 108) = MEMORY[0xFFFFF78000000014];
      }
      v146 = 0LL;
      v147 = 0;
      CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v146, (struct tagPROCESSINFO *)v7, v136);
      v66 = v147;
      *(_QWORD *)((char *)a1 + 170) = v146;
      *(_DWORD *)((char *)a1 + 178) = v66;
      if ( HIBYTE(qword_1C0255554) )
      {
        v118 = 0;
        v67 = CitpProcessGetAppSessionId(&v143, (struct tagPROCESSINFO *)v7, &v118);
        v68 = a2 - *(_DWORD *)(v65 + 80);
        v69 = *((_QWORD *)a1 + 104) + 1LL;
        v70 = *v67;
        *((_QWORD *)a1 + 104) = v69;
        v149 = v70;
        if ( (unsigned int)dword_1C024A250 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024A250, 0x800000000800LL, v69, v68) )
          {
            LODWORD(v124) = v118;
            v111 = v147;
            v88 = BYTE2(v147);
            v112 = HIWORD(v146);
            v113 = WORD2(v146);
            LOWORD(v92) = WORD1(v146);
            LOWORD(v91) = v146;
            v138 = &v149;
            v139 = &v149;
            v140 = &v149;
            v137 = v72;
            v87 = 1;
            LODWORD(v116) = v73;
            v89 = 1;
            v90 = 1;
            v141 = 0x2000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v71,
              (unsigned int)&unk_1C0222CF0,
              v72,
              v73,
              (__int64)&v141,
              (__int64)&v90,
              (__int64)&v140,
              (__int64)&v89,
              (__int64)&v139,
              (__int64)&v138,
              (__int64)&v116,
              (__int64)&v91,
              (__int64)&v92,
              (__int64)&v113,
              (__int64)&v112,
              (__int64)&v88,
              (__int64)&v111,
              (__int64)&v87,
              (__int64)&v124,
              (__int64)&v137);
          }
        }
      }
    }
    *(_DWORD *)(v65 + 80) = a2;
  }
  return v6;
}
