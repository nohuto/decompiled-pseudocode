/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0087D08
 * Callers:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C00871BC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0087CA0 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z @ 0x1C008830C (-OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U2@U5@U4@U4@U4@U4@U4@U5@U5@U4@U5@U5@U5@U5@U4@U4@U3@U4@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@433AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@66666AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@77777777777777777747666667767777665655@Z @ 0x1C0088350 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U-$_tlgWrapperByVal@$07@@U.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C00C825C (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U4@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U3@U6@U2@U2@U2@U2@U2@U6@U6@U2@U6@U6@U6@U6@U2@U2@U5@U2@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@55AEBU?$_tlgWrapperByRef@$0BA@@@6AEBU?$_tlgWrapperByVal@$07@@444444AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@88888888888888888858444448848888447477@Z @ 0x1C02721F0 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@U3@U-.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2)
{
  struct _CIT_INTERACTION_SUMMARY *v2; // r11
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY **v5; // rax
  _DWORD *v6; // rsi
  _DWORD *v7; // r13
  struct _CIT_AUDIO_STATS **v8; // rbx
  __int64 v9; // rdi
  struct _CIT_IMPACT_CONTEXT *v10; // rbx
  int v11; // r12d
  int v12; // r15d
  __int64 v13; // r14
  __int64 v14; // r9
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  __int16 v17; // ax
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r11
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r10
  const WCHAR *v26; // rdi
  const WCHAR *v27; // r13
  const WCHAR *v28; // rsi
  const WCHAR *v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // xmm1_8
  __int16 v32; // ax
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // r11
  int v36; // eax
  int v37; // eax
  __int16 v38; // [rsp+1F2h] [rbp-7Eh] BYREF
  __int16 v39; // [rsp+1F4h] [rbp-7Ch] BYREF
  __int16 v40; // [rsp+1F6h] [rbp-7Ah] BYREF
  __int16 v41; // [rsp+1F8h] [rbp-78h] BYREF
  __int16 v42; // [rsp+1FAh] [rbp-76h] BYREF
  __int16 v43; // [rsp+1FCh] [rbp-74h] BYREF
  __int16 v44; // [rsp+1FEh] [rbp-72h] BYREF
  __int16 v45; // [rsp+200h] [rbp-70h] BYREF
  __int16 v46; // [rsp+202h] [rbp-6Eh] BYREF
  __int16 v47; // [rsp+204h] [rbp-6Ch] BYREF
  __int16 v48; // [rsp+206h] [rbp-6Ah] BYREF
  __int16 v49; // [rsp+208h] [rbp-68h] BYREF
  __int16 v50; // [rsp+20Ah] [rbp-66h] BYREF
  __int16 v51; // [rsp+20Ch] [rbp-64h] BYREF
  __int16 v52; // [rsp+20Eh] [rbp-62h] BYREF
  __int16 v53; // [rsp+210h] [rbp-60h] BYREF
  __int16 v54; // [rsp+212h] [rbp-5Eh] BYREF
  __int16 v55; // [rsp+214h] [rbp-5Ch] BYREF
  __int16 v56; // [rsp+216h] [rbp-5Ah] BYREF
  __int16 v57; // [rsp+218h] [rbp-58h] BYREF
  __int16 v58; // [rsp+21Ah] [rbp-56h] BYREF
  __int16 v59; // [rsp+21Ch] [rbp-54h] BYREF
  __int16 v60; // [rsp+21Eh] [rbp-52h] BYREF
  __int16 v61; // [rsp+220h] [rbp-50h] BYREF
  __int16 v62; // [rsp+222h] [rbp-4Eh] BYREF
  __int16 v63; // [rsp+224h] [rbp-4Ch] BYREF
  unsigned int v64; // [rsp+228h] [rbp-48h] BYREF
  int v65; // [rsp+22Ch] [rbp-44h] BYREF
  int v66; // [rsp+230h] [rbp-40h] BYREF
  int v67; // [rsp+234h] [rbp-3Ch] BYREF
  int v68; // [rsp+238h] [rbp-38h] BYREF
  int v69; // [rsp+23Ch] [rbp-34h] BYREF
  int v70; // [rsp+240h] [rbp-30h] BYREF
  int v71; // [rsp+244h] [rbp-2Ch] BYREF
  unsigned int v72; // [rsp+248h] [rbp-28h] BYREF
  int v73; // [rsp+24Ch] [rbp-24h] BYREF
  int v74; // [rsp+250h] [rbp-20h] BYREF
  int v75; // [rsp+254h] [rbp-1Ch] BYREF
  int v76; // [rsp+258h] [rbp-18h] BYREF
  int v77; // [rsp+25Ch] [rbp-14h] BYREF
  int v78; // [rsp+260h] [rbp-10h] BYREF
  const WCHAR *v79; // [rsp+268h] [rbp-8h]
  __int128 v80; // [rsp+270h] [rbp+0h] BYREF
  __int64 v81; // [rsp+280h] [rbp+10h]
  int v82; // [rsp+288h] [rbp+18h]
  __int16 v83; // [rsp+28Ch] [rbp+1Ch]
  int v84; // [rsp+290h] [rbp+20h]
  int v85; // [rsp+294h] [rbp+24h]
  __int64 v86; // [rsp+298h] [rbp+28h] BYREF
  __int64 v87; // [rsp+2A0h] [rbp+30h] BYREF
  __int64 v88; // [rsp+2A8h] [rbp+38h] BYREF
  const WCHAR *v89; // [rsp+2B0h] [rbp+40h] BYREF
  __int64 v90; // [rsp+2B8h] [rbp+48h] BYREF
  __int64 v91; // [rsp+2C0h] [rbp+50h] BYREF
  _QWORD v92[11]; // [rsp+2C8h] [rbp+58h] BYREF
  char v93; // [rsp+330h] [rbp+C0h] BYREF
  char v94; // [rsp+340h] [rbp+D0h] BYREF
  char v95; // [rsp+348h] [rbp+D8h] BYREF

  v2 = a1;
  v4 = *(_QWORD *)a1;
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 8) != v2
    || (v5 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)v2 + 1), *v5 != v2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _CIT_INTERACTION_SUMMARY *)v4;
  v6 = (_DWORD *)((char *)v2 + 116);
  *(_QWORD *)(v4 + 8) = v5;
  v7 = (_DWORD *)((char *)v2 + 124);
  *((_QWORD *)v2 + 1) = v2;
  v8 = (struct _CIT_AUDIO_STATS **)v92;
  *(_QWORD *)v2 = v2;
  v9 = 2LL;
  v92[0] = (char *)v2 + 116;
  v92[1] = (char *)v2 + 124;
  do
  {
    if ( *((_BYTE *)*v8 + 3) )
      CitpAudioStatSnapDelta(*v8);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( ((*(&xmmword_1C02D4D84 + 8) & 0x10) == 0
     || *((_WORD *)v2 + 57) != 4
     || *((_WORD *)v2 + 54)
     && *((_WORD *)v2 + 55)
     && ((*((_BYTE *)v2 + 100) & 1) != 0
      || (v24 = **(_QWORD **)(*((_QWORD *)v2 + 3) + 8LL)) == 0
      || v24 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels))
    && ((*(&xmmword_1C02D4D84 + 8) & 0x20) == 0
     || (*((_WORD *)v2 + 57) & 0xFFF3) != 0
     || (*((_WORD *)v2 + 57) & 8) == 0
     || *((_WORD *)v2 + 53) >= 3u
     || *((_WORD *)v2 + 54) && *((_WORD *)v2 + 55)) )
  {
    v10 = xmmword_1C02D4DA0;
    v11 = a2 - *((_DWORD *)v2 + 23);
    v12 = a2 - *((_DWORD *)xmmword_1C02D4DA0 + 72);
    v13 = *((_QWORD *)xmmword_1C02D4DA0 + 32) + 1LL;
    v14 = *((_QWORD *)xmmword_1C02D4DA0 + 35);
    *((_QWORD *)xmmword_1C02D4DA0 + 32) = v13;
    if ( (*((_BYTE *)v2 + 100) & 1) != 0 )
    {
      v25 = *((_QWORD *)v2 + 3);
      v26 = &word_1C02856D8;
      v79 = &word_1C02856D8;
      v27 = &word_1C02856D8;
      v28 = &word_1C02856D8;
      if ( *(_QWORD *)(v25 + 40) )
      {
        v29 = *(const WCHAR **)(v25 + 48);
        if ( *(_DWORD *)(v25 + 72) == 1 )
        {
          v79 = *(const WCHAR **)(v25 + 40);
          if ( v29 )
            v27 = v29;
        }
        else
        {
          v26 = *(const WCHAR **)(v25 + 40);
          if ( v29 )
            v28 = *(const WCHAR **)(v25 + 48);
        }
      }
      v30 = *((_OWORD *)v2 + 2);
      v82 = *((_DWORD *)v2 + 14);
      v31 = *((_QWORD *)v2 + 6);
      v32 = *((_WORD *)v2 + 30);
      v80 = v30;
      v83 = v32;
      v81 = v31;
      if ( !(unsigned int)OnlyCompositionMetrics(v2, &v80, 0LL, v14)
        && (unsigned int)dword_1C02C93D8 > 5
        && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x800000000800LL) )
      {
        v86 = *(_QWORD *)(v35 + 16);
        v36 = *(_DWORD *)(v35 + 124) & 0xFFFFFF;
        v92[2] = 0x2000000LL;
        v84 = v36;
        v37 = *(_DWORD *)(v35 + 116) & 0xFFFFFF;
        v92[3] = v13;
        v65 = v37;
        v38 = *(_WORD *)(v35 + 106);
        v39 = *(_WORD *)(v35 + 112);
        v40 = *(_WORD *)(v35 + 110);
        v41 = *(_WORD *)(v35 + 108);
        v66 = *(_DWORD *)(v35 + 96);
        v42 = *(_WORD *)(v35 + 56);
        v43 = *(_WORD *)(v35 + 104);
        v67 = *((_DWORD *)v10 + 73);
        v68 = *(&xmmword_1C02D4D84 + 2);
        v64 = qword_1C02D4D94;
        v69 = *(&xmmword_1C02D4D84 + 3);
        v70 = *(&xmmword_1C02D4D84 + 1);
        v44 = *(_WORD *)(v35 + 70);
        v93 = *(_BYTE *)(v35 + 72);
        v45 = *(_WORD *)(v35 + 68);
        v46 = *(_WORD *)(v35 + 66);
        v47 = *(_WORD *)(v35 + 64);
        v48 = *(_WORD *)(v35 + 62);
        v49 = *(_WORD *)(v35 + 44);
        v50 = *(_WORD *)(v35 + 60);
        v51 = *(_WORD *)(v35 + 58) + v50;
        v52 = *(_WORD *)(v35 + 54);
        v53 = *(_WORD *)(v35 + 52);
        v54 = *(_WORD *)(v35 + 50) + v53;
        v55 = *(_WORD *)(v35 + 48);
        v56 = *(_WORD *)(v35 + 46) + v55;
        v57 = *(_WORD *)(v35 + 42);
        v58 = *(_WORD *)(v35 + 40);
        v59 = *(_WORD *)(v35 + 38);
        v60 = *(_WORD *)(v35 + 36);
        v61 = *(_WORD *)(v35 + 34);
        v62 = *(_WORD *)(v35 + 32);
        *(_QWORD *)&v80 = *(_QWORD *)(v35 + 160);
        WORD4(v80) = *(_WORD *)(v35 + 168);
        LOWORD(v37) = *(_WORD *)(v35 + 140);
        v85 = v11;
        v63 = v37;
        v71 = *(_DWORD *)(v35 + 152);
        v72 = *(_DWORD *)(v35 + 144);
        v73 = *(unsigned __int16 *)(v35 + 102);
        v74 = *(_DWORD *)(v35 + 132);
        v75 = *(_DWORD *)(v35 + 136);
        v87 = v35 + 76;
        v88 = v35 + 76;
        v77 = *(_DWORD *)(v34 + 64);
        v78 = *(_DWORD *)(v34 + 68);
        v76 = v12;
        v91 = v33;
        v94 = 1;
        v95 = 1;
        v89 = v28;
        v90 = (__int64)v27;
        v92[0] = v26;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          0xFFFFFFLL,
          &unk_1C029EE32);
      }
    }
    else
    {
      v15 = *((_OWORD *)v2 + 2);
      v82 = *((_DWORD *)v2 + 14);
      v16 = *((_QWORD *)v2 + 6);
      v17 = *((_WORD *)v2 + 30);
      v80 = v15;
      v83 = v17;
      v81 = v16;
      if ( !(unsigned int)OnlyCompositionMetrics(v2, &v80, 0LL, v14)
        && (unsigned int)dword_1C02C93D8 > 5
        && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x800000000800LL) )
      {
        v89 = *(const WCHAR **)(v21 + 16);
        v22 = *v7 & 0xFFFFFF;
        v92[0] = 0x2000000LL;
        v77 = v22;
        v23 = *v6 & 0xFFFFFF;
        v90 = v13;
        v76 = v23;
        v63 = *(_WORD *)(v21 + 106);
        v62 = *(_WORD *)(v21 + 112);
        v61 = *(_WORD *)(v21 + 110);
        v60 = *(_WORD *)(v21 + 108);
        v75 = *(_DWORD *)(v21 + 96);
        v59 = *(_WORD *)(v21 + 56);
        v58 = *(_WORD *)(v21 + 104);
        v74 = *((_DWORD *)v10 + 73);
        v73 = *(&xmmword_1C02D4D84 + 2);
        v72 = qword_1C02D4D94;
        v71 = *(&xmmword_1C02D4D84 + 3);
        v70 = *(&xmmword_1C02D4D84 + 1);
        v57 = *(_WORD *)(v21 + 70);
        v93 = *(_BYTE *)(v21 + 72);
        v56 = *(_WORD *)(v21 + 68);
        v55 = *(_WORD *)(v21 + 66);
        v54 = *(_WORD *)(v21 + 64);
        v53 = *(_WORD *)(v21 + 62);
        v52 = *(_WORD *)(v21 + 44);
        v51 = *(_WORD *)(v21 + 60);
        v50 = *(_WORD *)(v21 + 58) + v51;
        v49 = *(_WORD *)(v21 + 54);
        v48 = *(_WORD *)(v21 + 52);
        v47 = *(_WORD *)(v21 + 50) + v48;
        v46 = *(_WORD *)(v21 + 48);
        v45 = *(_WORD *)(v21 + 46) + v46;
        v44 = *(_WORD *)(v21 + 42);
        v43 = *(_WORD *)(v21 + 40);
        v42 = *(_WORD *)(v21 + 38);
        v41 = *(_WORD *)(v21 + 36);
        v40 = *(_WORD *)(v21 + 34);
        v39 = *(_WORD *)(v21 + 32);
        *(_QWORD *)&v80 = *(_QWORD *)(v21 + 160);
        WORD4(v80) = *(_WORD *)(v21 + 168);
        LOWORD(v23) = *(_WORD *)(v21 + 140);
        v78 = v11;
        v38 = v23;
        v69 = *(_DWORD *)(v21 + 152);
        v64 = *(_DWORD *)(v21 + 144);
        v68 = *(unsigned __int16 *)(v21 + 102);
        v67 = *(_DWORD *)(v21 + 132);
        v66 = *(_DWORD *)(v21 + 136);
        v65 = v12;
        v88 = v19;
        v87 = v20;
        v91 = v20;
        v94 = 1;
        v95 = 1;
        v86 = v20;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          0xFFFFFF,
          (unsigned int)&unk_1C029F336,
          v18,
          v19,
          (__int64)&v86,
          (__int64)&v95,
          (__int64)&v94,
          (__int64)&v91,
          (__int64)&v87,
          (__int64)&v88,
          (__int64)&v65,
          (__int64)&v66,
          (__int64)&v67,
          (__int64)&v68,
          (__int64)&v64,
          (__int64)&v69,
          (__int64)&v38,
          (__int64)&v80,
          (__int64)&v39,
          (__int64)&v40,
          (__int64)&v41,
          (__int64)&v42,
          (__int64)&v43,
          (__int64)&v44,
          (__int64)&v45,
          (__int64)&v46,
          (__int64)&v47,
          (__int64)&v48,
          (__int64)&v49,
          (__int64)&v50,
          (__int64)&v51,
          (__int64)&v52,
          (__int64)&v53,
          (__int64)&v54,
          (__int64)&v55,
          (__int64)&v56,
          (__int64)&v93,
          (__int64)&v57,
          (__int64)&v70,
          (__int64)&v71,
          (__int64)&v72,
          (__int64)&v73,
          (__int64)&v74,
          (__int64)&v58,
          (__int64)&v59,
          (__int64)&v75,
          (__int64)&v60,
          (__int64)&v61,
          (__int64)&v62,
          (__int64)&v63,
          (__int64)&v76,
          (__int64)&v77,
          (__int64)&v89,
          (__int64)&v78,
          (__int64)&v90,
          (__int64)v92);
      }
    }
  }
}
