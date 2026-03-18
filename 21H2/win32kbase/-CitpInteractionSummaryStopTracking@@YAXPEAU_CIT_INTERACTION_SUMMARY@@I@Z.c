/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C004BC54
 * Callers:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C004BAB4 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C004BBEC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z @ 0x1C004C220 (-OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U2@U5@U4@U4@U4@U4@U4@U5@U5@U4@U5@U5@U5@U5@U4@U4@U3@U4@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@433AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@66666AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@77777777777777777747666667767777665655@Z @ 0x1C004C264 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U-$_tlgWrapperByVal@$07@@U.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C009D498 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U4@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U3@U6@U2@U2@U2@U2@U2@U6@U6@U2@U6@U6@U6@U6@U2@U2@U5@U2@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@55AEBU?$_tlgWrapperByRef@$0BA@@@6AEBU?$_tlgWrapperByVal@$07@@444444AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@88888888888888888858444448848888447477@Z @ 0x1C023E574 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@U3@U-.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2)
{
  struct _CIT_INTERACTION_SUMMARY *v2; // r11
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY **v5; // rax
  _DWORD *v6; // r13
  _DWORD *v7; // rsi
  struct _CIT_AUDIO_STATS **v8; // rbx
  __int64 v9; // rdi
  struct _CIT_IMPACT_CONTEXT *v10; // rbx
  int v11; // r12d
  int v12; // r15d
  __int64 v13; // r14
  __int64 v14; // r9
  __int128 v15; // xmm1
  PVOID v16; // rax
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  int v21; // eax
  int v22; // eax
  __int16 v23; // cx
  __int16 v24; // cx
  int v25; // ecx
  __int64 v26; // r10
  const WCHAR *v27; // rdi
  const WCHAR *v28; // rsi
  const WCHAR *v29; // rax
  __int128 v30; // xmm1
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // r11
  int v34; // eax
  int v35; // eax
  __int16 v36; // cx
  __int16 v37; // cx
  __int64 v38; // rcx
  __int16 v39; // [rsp+1F2h] [rbp-7Eh] BYREF
  __int16 v40; // [rsp+1F4h] [rbp-7Ch] BYREF
  __int16 v41; // [rsp+1F6h] [rbp-7Ah] BYREF
  __int16 v42; // [rsp+1F8h] [rbp-78h] BYREF
  __int16 v43; // [rsp+1FAh] [rbp-76h] BYREF
  __int16 v44; // [rsp+1FCh] [rbp-74h] BYREF
  __int16 v45; // [rsp+1FEh] [rbp-72h] BYREF
  __int16 v46; // [rsp+200h] [rbp-70h] BYREF
  __int16 v47; // [rsp+202h] [rbp-6Eh] BYREF
  __int16 v48; // [rsp+204h] [rbp-6Ch] BYREF
  __int16 v49; // [rsp+206h] [rbp-6Ah] BYREF
  __int16 v50; // [rsp+208h] [rbp-68h] BYREF
  __int16 v51; // [rsp+20Ah] [rbp-66h] BYREF
  __int16 v52; // [rsp+20Ch] [rbp-64h] BYREF
  __int16 v53; // [rsp+20Eh] [rbp-62h] BYREF
  __int16 v54; // [rsp+210h] [rbp-60h] BYREF
  __int16 v55; // [rsp+212h] [rbp-5Eh] BYREF
  __int16 v56; // [rsp+214h] [rbp-5Ch] BYREF
  __int16 v57; // [rsp+216h] [rbp-5Ah] BYREF
  __int16 v58; // [rsp+218h] [rbp-58h] BYREF
  __int16 v59; // [rsp+21Ah] [rbp-56h] BYREF
  __int16 v60; // [rsp+21Ch] [rbp-54h] BYREF
  __int16 v61; // [rsp+21Eh] [rbp-52h] BYREF
  __int16 v62; // [rsp+220h] [rbp-50h] BYREF
  __int16 v63; // [rsp+222h] [rbp-4Eh] BYREF
  __int16 v64; // [rsp+224h] [rbp-4Ch] BYREF
  int v65; // [rsp+228h] [rbp-48h] BYREF
  int v66; // [rsp+22Ch] [rbp-44h] BYREF
  int v67; // [rsp+230h] [rbp-40h] BYREF
  int v68; // [rsp+234h] [rbp-3Ch] BYREF
  __int64 v69; // [rsp+238h] [rbp-38h] BYREF
  int v70; // [rsp+240h] [rbp-30h] BYREF
  __int64 v71; // [rsp+244h] [rbp-2Ch] BYREF
  int v72; // [rsp+24Ch] [rbp-24h] BYREF
  int v73; // [rsp+250h] [rbp-20h] BYREF
  int v74; // [rsp+254h] [rbp-1Ch] BYREF
  int v75; // [rsp+258h] [rbp-18h] BYREF
  int v76; // [rsp+25Ch] [rbp-14h] BYREF
  int v77; // [rsp+260h] [rbp-10h] BYREF
  const WCHAR *v78; // [rsp+268h] [rbp-8h]
  const WCHAR *v79; // [rsp+270h] [rbp+0h]
  int v80; // [rsp+278h] [rbp+8h]
  int v81; // [rsp+27Ch] [rbp+Ch]
  __int64 v82; // [rsp+280h] [rbp+10h] BYREF
  __int64 v83; // [rsp+288h] [rbp+18h] BYREF
  __int64 v84; // [rsp+290h] [rbp+20h] BYREF
  __int64 v85; // [rsp+298h] [rbp+28h] BYREF
  __int64 v86; // [rsp+2A0h] [rbp+30h] BYREF
  __int64 v87; // [rsp+2A8h] [rbp+38h] BYREF
  _QWORD v88[2]; // [rsp+2B0h] [rbp+40h] BYREF
  __int128 v89; // [rsp+2C0h] [rbp+50h] BYREF
  __int128 v90; // [rsp+2D0h] [rbp+60h]
  __int64 v91; // [rsp+2E0h] [rbp+70h]
  char v92; // [rsp+330h] [rbp+C0h] BYREF
  char v93; // [rsp+340h] [rbp+D0h] BYREF
  char v94; // [rsp+348h] [rbp+D8h] BYREF

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
  v8 = (struct _CIT_AUDIO_STATS **)v88;
  *(_QWORD *)v2 = v2;
  v9 = 2LL;
  v88[0] = (char *)v2 + 116;
  v88[1] = (char *)v2 + 124;
  do
  {
    if ( *((_BYTE *)*v8 + 3) )
      CitpAudioStatSnapDelta(*v8);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( ((xmmword_1C029A214 & 0x10) == 0
     || *((_WORD *)v2 + 57) != 4
     || *((_WORD *)v2 + 54)
     && *((_WORD *)v2 + 55)
     && ((*((_BYTE *)v2 + 100) & 1) != 0 || (v16 = **(PVOID **)(*((_QWORD *)v2 + 3) + 8LL)) == 0LL || v16 != g_pepDwm))
    && ((xmmword_1C029A214 & 0x20) == 0
     || (*((_WORD *)v2 + 57) & 0xFFF3) != 0
     || (*((_WORD *)v2 + 57) & 8) == 0
     || *((_WORD *)v2 + 53) >= 3u
     || *((_WORD *)v2 + 54) && *((_WORD *)v2 + 55)) )
  {
    v10 = xmmword_1C029A230;
    v11 = a2 - *((_DWORD *)v2 + 23);
    v12 = a2 - *((_DWORD *)xmmword_1C029A230 + 218);
    v13 = *((_QWORD *)xmmword_1C029A230 + 105) + 1LL;
    v14 = *((_QWORD *)xmmword_1C029A230 + 108);
    *((_QWORD *)xmmword_1C029A230 + 105) = v13;
    if ( (*((_BYTE *)v2 + 100) & 1) != 0 )
    {
      v26 = *((_QWORD *)v2 + 3);
      v27 = &word_1C0251294;
      v79 = &word_1C0251294;
      v28 = &word_1C0251294;
      v78 = &word_1C0251294;
      if ( *(_QWORD *)(v26 + 40) )
      {
        v29 = *(const WCHAR **)(v26 + 48);
        if ( *(_DWORD *)(v26 + 72) == 1 )
        {
          v79 = *(const WCHAR **)(v26 + 40);
          if ( v29 )
            v78 = v29;
        }
        else
        {
          v27 = *(const WCHAR **)(v26 + 40);
          if ( v29 )
            v28 = *(const WCHAR **)(v26 + 48);
        }
      }
      v30 = *((_OWORD *)v2 + 3);
      v89 = *((_OWORD *)v2 + 2);
      v90 = v30;
      if ( !(unsigned int)OnlyCompositionMetrics(v2, &v89, 0LL, v14)
        && (unsigned int)dword_1C028D6F0 > 5
        && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x800000000800LL) )
      {
        v83 = *(_QWORD *)(v33 + 16);
        v34 = *(_DWORD *)(v33 + 124) & 0xFFFFFF;
        v91 = 0x2000000LL;
        v80 = v34;
        v35 = *v6 & 0xFFFFFF;
        v82 = v13;
        v36 = *(_WORD *)(v33 + 60);
        v66 = v35;
        v39 = *(_WORD *)(v33 + 106);
        v40 = *(_WORD *)(v33 + 112);
        v41 = *(_WORD *)(v33 + 110);
        v42 = *(_WORD *)(v33 + 108);
        v67 = *(_DWORD *)(v33 + 96);
        v43 = *(_WORD *)(v33 + 56);
        v44 = *(_WORD *)(v33 + 104);
        v68 = *((_DWORD *)v10 + 219);
        v69 = xmmword_1C029A214;
        v65 = DWORD2(xmmword_1C029A214);
        v70 = *(&xmmword_1C029A204 + 1);
        v45 = *(_WORD *)(v33 + 72);
        v92 = *(_BYTE *)(v33 + 74);
        v46 = *(_WORD *)(v33 + 70);
        v47 = *(_WORD *)(v33 + 68);
        v48 = *(_WORD *)(v33 + 66);
        v49 = *(_WORD *)(v33 + 64);
        v50 = *(_WORD *)(v33 + 44);
        LOWORD(v35) = v36 + *(_WORD *)(v33 + 58);
        v51 = v36;
        v37 = *(_WORD *)(v33 + 52);
        v52 = v35;
        v53 = *(_WORD *)(v33 + 54);
        LOWORD(v35) = v37 + *(_WORD *)(v33 + 50);
        v54 = v37;
        v38 = *(unsigned __int16 *)(v33 + 48);
        v55 = v35;
        LOWORD(v35) = *(_WORD *)(v33 + 46);
        v81 = v11;
        v57 = v38 + v35;
        v58 = *(_WORD *)(v33 + 42);
        v59 = *(_WORD *)(v33 + 40);
        v60 = *(_WORD *)(v33 + 38);
        v61 = *(_WORD *)(v33 + 36);
        v62 = *(_WORD *)(v33 + 34);
        v63 = *(_WORD *)(v33 + 32);
        *(_QWORD *)&v89 = *(_QWORD *)(v33 + 160);
        v56 = v38;
        WORD4(v89) = *(_WORD *)(v33 + 168);
        v64 = *(_WORD *)(v33 + 140);
        LODWORD(v71) = *(_DWORD *)(v33 + 152);
        HIDWORD(v71) = *(_DWORD *)(v33 + 144);
        v72 = *(unsigned __int16 *)(v33 + 102);
        v73 = *(_DWORD *)(v33 + 132);
        v74 = *(_DWORD *)(v33 + 136);
        v85 = v33 + 76;
        v86 = v33 + 76;
        v76 = *(_DWORD *)(v32 + 64);
        v77 = *(_DWORD *)(v32 + 68);
        v75 = v12;
        v84 = v31;
        v93 = 1;
        v94 = 1;
        v87 = (__int64)v28;
        v88[0] = v27;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v38,
          &unk_1C0265342);
      }
    }
    else
    {
      v15 = *((_OWORD *)v2 + 3);
      v89 = *((_OWORD *)v2 + 2);
      v90 = v15;
      if ( !(unsigned int)OnlyCompositionMetrics(v2, &v89, 0LL, v14)
        && (unsigned int)dword_1C028D6F0 > 5
        && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x800000000800LL) )
      {
        v86 = *(_QWORD *)(v20 + 16);
        v21 = *v7 & 0xFFFFFF;
        v88[0] = 0x2000000LL;
        v76 = v21;
        v22 = *v6 & 0xFFFFFF;
        v87 = v13;
        v23 = *(_WORD *)(v20 + 60);
        v75 = v22;
        v64 = *(_WORD *)(v20 + 106);
        v63 = *(_WORD *)(v20 + 112);
        v62 = *(_WORD *)(v20 + 110);
        v61 = *(_WORD *)(v20 + 108);
        v74 = *(_DWORD *)(v20 + 96);
        v60 = *(_WORD *)(v20 + 56);
        v59 = *(_WORD *)(v20 + 104);
        v73 = *((_DWORD *)v10 + 219);
        v72 = xmmword_1C029A214;
        v71 = *(_QWORD *)((char *)&xmmword_1C029A214 + 4);
        v70 = *(&xmmword_1C029A204 + 1);
        v58 = *(_WORD *)(v20 + 72);
        v92 = *(_BYTE *)(v20 + 74);
        v57 = *(_WORD *)(v20 + 70);
        v56 = *(_WORD *)(v20 + 68);
        v55 = *(_WORD *)(v20 + 66);
        v54 = *(_WORD *)(v20 + 64);
        v53 = *(_WORD *)(v20 + 44);
        LOWORD(v22) = v23 + *(_WORD *)(v20 + 58);
        v52 = v23;
        v24 = *(_WORD *)(v20 + 52);
        v51 = v22;
        v50 = *(_WORD *)(v20 + 54);
        LOWORD(v22) = v24 + *(_WORD *)(v20 + 50);
        v49 = v24;
        v25 = *(unsigned __int16 *)(v20 + 48);
        v48 = v22;
        LOWORD(v22) = *(_WORD *)(v20 + 46);
        v77 = v11;
        v46 = v25 + v22;
        v45 = *(_WORD *)(v20 + 42);
        v44 = *(_WORD *)(v20 + 40);
        v43 = *(_WORD *)(v20 + 38);
        v42 = *(_WORD *)(v20 + 36);
        v41 = *(_WORD *)(v20 + 34);
        v40 = *(_WORD *)(v20 + 32);
        *(_QWORD *)&v89 = *(_QWORD *)(v20 + 160);
        v47 = v25;
        WORD4(v89) = *(_WORD *)(v20 + 168);
        v39 = *(_WORD *)(v20 + 140);
        HIDWORD(v69) = *(_DWORD *)(v20 + 152);
        v65 = *(_DWORD *)(v20 + 144);
        LODWORD(v69) = *(unsigned __int16 *)(v20 + 102);
        v68 = *(_DWORD *)(v20 + 132);
        v67 = *(_DWORD *)(v20 + 136);
        v66 = v12;
        v85 = v18;
        v84 = v19;
        v83 = v19;
        v93 = 1;
        v94 = 1;
        v82 = v19;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v25,
          (unsigned int)&unk_1C026591B,
          v17,
          v18,
          (__int64)&v82,
          (__int64)&v94,
          (__int64)&v93,
          (__int64)&v83,
          (__int64)&v84,
          (__int64)&v85,
          (__int64)&v66,
          (__int64)&v67,
          (__int64)&v68,
          (__int64)&v69,
          (__int64)&v65,
          (__int64)&v69 + 4,
          (__int64)&v39,
          (__int64)&v89,
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
          (__int64)&v57,
          (__int64)&v92,
          (__int64)&v58,
          (__int64)&v70,
          (__int64)&v71,
          (__int64)&v71 + 4,
          (__int64)&v72,
          (__int64)&v73,
          (__int64)&v59,
          (__int64)&v60,
          (__int64)&v74,
          (__int64)&v61,
          (__int64)&v62,
          (__int64)&v63,
          (__int64)&v64,
          (__int64)&v75,
          (__int64)&v76,
          (__int64)&v86,
          (__int64)&v77,
          (__int64)&v87,
          (__int64)v88);
      }
    }
  }
}
