/*
 * XREFs of ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x18015C368
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCLatencyInfo@1@I@Z @ 0x18015C8E0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCL.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEBUTouchScenarioInfo@1@_N@Z @ 0x1801608AC (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEBUTouchScenarioInfo@1@_N@Z.c)
 * Callees:
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x180023B54 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180035058 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=(__int64 a1, __int64 a2)
{
  _OWORD *v4; // rsi
  _DWORD *v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  _BYTE *v11; // rcx
  __int64 v12; // rdx
  _WORD *v13; // rcx
  __int64 v14; // rdx
  _WORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _DWORD *v21; // r14
  __int64 v22; // r15
  _BYTE *v23; // rcx
  __int64 v24; // rdx
  _BYTE *v25; // rcx
  __int64 v26; // rdx
  _BYTE *v27; // rcx
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  __int64 v30; // rdx
  _DWORD *v31; // r14
  __int64 v32; // r15
  _WORD *v33; // rcx
  __int64 v34; // rdx
  _WORD *v35; // rcx
  __int64 v36; // rdx
  _WORD *v37; // rcx
  __int64 v38; // rdx
  _WORD *v39; // rcx
  __int64 v40; // rdx
  _DWORD *v41; // rcx

  if ( a1 != a2 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)a1);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  v4 = (_OWORD *)(a2 + 32);
  if ( a1 + 32 != a2 + 32 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 32));
    *(_OWORD *)(a1 + 32) = *v4;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_QWORD *)(a2 + 56) = 7LL;
    *(_WORD *)v4 = 0;
  }
  v5 = (_DWORD *)(a1 + 140);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  v6 = 5LL;
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
  v7 = a2 - a1;
  v8 = 5LL;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_BYTE *)(a1 + 80) = *(_BYTE *)(a2 + 80);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 100);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_BYTE *)(a1 + 128) = *(_BYTE *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  do
  {
    *v5 = *(_DWORD *)((char *)v5 + v7);
    ++v5;
    --v8;
  }
  while ( v8 );
  v9 = (_DWORD *)(a1 + 160);
  v10 = 5LL;
  do
  {
    *v9 = *(_DWORD *)((char *)v9 + v7);
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = (_BYTE *)(a1 + 180);
  v12 = 5LL;
  do
  {
    *v11 = v11[v7];
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = (_WORD *)(a1 + 186);
  v14 = 5LL;
  do
  {
    *v13 = *(_WORD *)((char *)v13 + v7);
    ++v13;
    --v14;
  }
  while ( v14 );
  v15 = (_WORD *)(a1 + 196);
  v16 = 5LL;
  do
  {
    *v15 = *(_WORD *)((char *)v15 + v7);
    ++v15;
    --v16;
  }
  while ( v16 );
  v17 = (_QWORD *)(a1 + 208);
  v18 = 5LL;
  do
  {
    *v17 = *(_QWORD *)((char *)v17 + v7);
    ++v17;
    --v18;
  }
  while ( v18 );
  v19 = (_QWORD *)(a1 + 248);
  v20 = 5LL;
  do
  {
    *v19 = *(_QWORD *)((char *)v19 + v7);
    ++v19;
    --v20;
  }
  while ( v20 );
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)(a1 + 288), (_DWORD *)(a2 + 288));
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)(a1 + 332), (_DWORD *)(a2 + 332));
  v21 = (_DWORD *)(a1 + 376);
  v22 = 5LL;
  do
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v21, (_DWORD *)((char *)v21 + v7));
    v21 += 11;
    --v22;
  }
  while ( v22 );
  v23 = (_BYTE *)(a1 + 597);
  *(_BYTE *)(a1 + 596) = *(_BYTE *)(a2 + 596);
  v24 = 5LL;
  do
  {
    *v23 = v23[v7];
    ++v23;
    --v24;
  }
  while ( v24 );
  v25 = (_BYTE *)(a1 + 603);
  *(_BYTE *)(a1 + 602) = *(_BYTE *)(a2 + 602);
  v26 = 5LL;
  do
  {
    *v25 = v25[v7];
    ++v25;
    --v26;
  }
  while ( v26 );
  v27 = (_BYTE *)(a1 + 616);
  *(_BYTE *)(a1 + 608) = *(_BYTE *)(a2 + 608);
  v28 = 5LL;
  *(_DWORD *)(a1 + 612) = *(_DWORD *)(a2 + 612);
  do
  {
    *v27 = v27[v7];
    ++v27;
    --v28;
  }
  while ( v28 );
  v29 = (_BYTE *)(a1 + 622);
  *(_BYTE *)(a1 + 621) = *(_BYTE *)(a2 + 621);
  v30 = 5LL;
  do
  {
    *v29 = v29[v7];
    ++v29;
    --v30;
  }
  while ( v30 );
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)(a1 + 628), (_DWORD *)(a2 + 628));
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)(a1 + 672), (_DWORD *)(a2 + 672));
  v31 = (_DWORD *)(a1 + 716);
  v32 = 5LL;
  do
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v31, (_DWORD *)((char *)v31 + v7));
    v31 += 11;
    --v32;
  }
  while ( v32 );
  v33 = (_WORD *)(a1 + 944);
  *(_WORD *)(a1 + 936) = *(_WORD *)(a2 + 936);
  v34 = 5LL;
  *(_DWORD *)(a1 + 940) = *(_DWORD *)(a2 + 940);
  do
  {
    *v33 = *(_WORD *)((char *)v33 + v7);
    ++v33;
    --v34;
  }
  while ( v34 );
  v35 = (_WORD *)(a1 + 960);
  *(_WORD *)(a1 + 954) = *(_WORD *)(a2 + 954);
  v36 = 5LL;
  *(_DWORD *)(a1 + 956) = *(_DWORD *)(a2 + 956);
  do
  {
    *v35 = *(_WORD *)((char *)v35 + v7);
    ++v35;
    --v36;
  }
  while ( v36 );
  v37 = (_WORD *)(a1 + 976);
  *(_WORD *)(a1 + 970) = *(_WORD *)(a2 + 970);
  v38 = 5LL;
  *(_DWORD *)(a1 + 972) = *(_DWORD *)(a2 + 972);
  do
  {
    *v37 = *(_WORD *)((char *)v37 + v7);
    ++v37;
    --v38;
  }
  while ( v38 );
  v39 = (_WORD *)(a1 + 992);
  *(_WORD *)(a1 + 986) = *(_WORD *)(a2 + 986);
  v40 = 5LL;
  *(_DWORD *)(a1 + 988) = *(_DWORD *)(a2 + 988);
  do
  {
    *v39 = *(_WORD *)((char *)v39 + v7);
    ++v39;
    --v40;
  }
  while ( v40 );
  v41 = (_DWORD *)(a1 + 1012);
  *(_DWORD *)(a1 + 1004) = *(_DWORD *)(a2 + 1004);
  *(_DWORD *)(a1 + 1008) = *(_DWORD *)(a2 + 1008);
  do
  {
    *v41 = *(_DWORD *)((char *)v41 + v7);
    ++v41;
    --v6;
  }
  while ( v6 );
  return a1;
}
