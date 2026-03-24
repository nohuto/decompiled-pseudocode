/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C008E3D8
 * Callers:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C008E288 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C008E2EC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z @ 0x1C008E9C4 (-OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U2@U5@U4@U4@U4@U4@U4@U5@U5@U4@U5@U5@U5@U5@U4@U4@U3@U4@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@433AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@66666AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@7777777777777777747666667767777665655@Z @ 0x1C008EA10 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U-$_tlgWrapperByVal@$07@@U.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C00C03C4 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U4@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U3@U6@U2@U2@U2@U2@U2@U6@U6@U2@U6@U6@U6@U6@U2@U2@U5@U2@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@55AEBU?$_tlgWrapperByRef@$0BA@@@6AEBU?$_tlgWrapperByVal@$07@@444444AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@8888888888888888858444448848888447477@Z @ 0x1C01FC8B0 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@U3@U-.c)
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
  PVOID v10; // rax
  struct _CIT_IMPACT_CONTEXT *v11; // rbx
  int v12; // r15d
  int v13; // r14d
  __int64 v14; // r12
  __int64 v15; // r9
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  __int16 v18; // ax
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  int v23; // eax
  int v24; // eax
  __int16 v25; // cx
  __int16 v26; // cx
  __int16 v27; // cx
  int v28; // ecx
  __int64 v29; // r10
  const WCHAR *v30; // rdi
  const WCHAR *v31; // rsi
  const WCHAR *v32; // rax
  __int128 v33; // xmm0
  __int64 v34; // xmm1_8
  __int16 v35; // ax
  __int64 v36; // r9
  __int64 v37; // r10
  __int64 v38; // r11
  int v39; // eax
  int v40; // eax
  __int16 v41; // cx
  __int16 v42; // cx
  __int16 v43; // cx
  __int64 v44; // rcx
  __int16 v45; // [rsp+1F2h] [rbp-7Eh] BYREF
  __int16 v46; // [rsp+1F4h] [rbp-7Ch] BYREF
  __int16 v47; // [rsp+1F6h] [rbp-7Ah] BYREF
  __int16 v48; // [rsp+1F8h] [rbp-78h] BYREF
  __int16 v49; // [rsp+1FAh] [rbp-76h] BYREF
  __int16 v50; // [rsp+1FCh] [rbp-74h] BYREF
  __int16 v51; // [rsp+1FEh] [rbp-72h] BYREF
  __int16 v52; // [rsp+200h] [rbp-70h] BYREF
  __int16 v53; // [rsp+202h] [rbp-6Eh] BYREF
  __int16 v54; // [rsp+204h] [rbp-6Ch] BYREF
  __int16 v55; // [rsp+206h] [rbp-6Ah] BYREF
  __int16 v56; // [rsp+208h] [rbp-68h] BYREF
  __int16 v57; // [rsp+20Ah] [rbp-66h] BYREF
  __int16 v58; // [rsp+20Ch] [rbp-64h] BYREF
  __int16 v59; // [rsp+20Eh] [rbp-62h] BYREF
  __int16 v60; // [rsp+210h] [rbp-60h] BYREF
  __int16 v61; // [rsp+212h] [rbp-5Eh] BYREF
  __int16 v62; // [rsp+214h] [rbp-5Ch] BYREF
  __int16 v63; // [rsp+216h] [rbp-5Ah] BYREF
  __int16 v64; // [rsp+218h] [rbp-58h] BYREF
  __int16 v65; // [rsp+21Ah] [rbp-56h] BYREF
  __int16 v66; // [rsp+21Ch] [rbp-54h] BYREF
  __int16 v67; // [rsp+21Eh] [rbp-52h] BYREF
  __int16 v68; // [rsp+220h] [rbp-50h] BYREF
  __int16 v69; // [rsp+222h] [rbp-4Eh] BYREF
  int v70; // [rsp+224h] [rbp-4Ch] BYREF
  int v71; // [rsp+228h] [rbp-48h] BYREF
  int v72; // [rsp+22Ch] [rbp-44h] BYREF
  int v73; // [rsp+230h] [rbp-40h] BYREF
  int v74; // [rsp+234h] [rbp-3Ch] BYREF
  int v75; // [rsp+238h] [rbp-38h] BYREF
  int v76; // [rsp+23Ch] [rbp-34h] BYREF
  int v77; // [rsp+240h] [rbp-30h] BYREF
  __int64 v78; // [rsp+244h] [rbp-2Ch] BYREF
  int v79; // [rsp+24Ch] [rbp-24h] BYREF
  int v80; // [rsp+250h] [rbp-20h] BYREF
  int v81; // [rsp+254h] [rbp-1Ch] BYREF
  int v82; // [rsp+258h] [rbp-18h] BYREF
  int v83; // [rsp+25Ch] [rbp-14h] BYREF
  const WCHAR *v84; // [rsp+260h] [rbp-10h]
  const WCHAR *v85; // [rsp+268h] [rbp-8h]
  __int128 v86; // [rsp+270h] [rbp+0h] BYREF
  __int64 v87; // [rsp+280h] [rbp+10h]
  int v88; // [rsp+288h] [rbp+18h]
  __int16 v89; // [rsp+28Ch] [rbp+1Ch]
  int v90; // [rsp+290h] [rbp+20h]
  int v91; // [rsp+294h] [rbp+24h]
  __int64 v92; // [rsp+298h] [rbp+28h] BYREF
  __int64 v93; // [rsp+2A0h] [rbp+30h] BYREF
  __int64 v94; // [rsp+2A8h] [rbp+38h] BYREF
  __int64 v95; // [rsp+2B0h] [rbp+40h] BYREF
  __int64 v96; // [rsp+2B8h] [rbp+48h] BYREF
  __int64 v97; // [rsp+2C0h] [rbp+50h] BYREF
  _QWORD v98[9]; // [rsp+2C8h] [rbp+58h] BYREF
  char v99; // [rsp+320h] [rbp+B0h] BYREF
  char v100; // [rsp+330h] [rbp+C0h] BYREF
  char v101; // [rsp+338h] [rbp+C8h] BYREF

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
  v8 = (struct _CIT_AUDIO_STATS **)v98;
  *(_QWORD *)v2 = v2;
  v9 = 2LL;
  v98[0] = (char *)v2 + 116;
  v98[1] = (char *)v2 + 124;
  do
  {
    if ( *((_BYTE *)*v8 + 3) )
      CitpAudioStatSnapDelta(*v8);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( ((xmmword_1C0255544 & 0x10) == 0
     || *((_WORD *)v2 + 57) != 4
     || *((_WORD *)v2 + 54)
     && *((_WORD *)v2 + 55)
     && ((*((_BYTE *)v2 + 100) & 1) != 0 || (v10 = **(PVOID **)(*((_QWORD *)v2 + 3) + 8LL)) == 0LL || v10 != g_pepDwm))
    && ((xmmword_1C0255544 & 0x20) == 0
     || (*((_WORD *)v2 + 57) & 0xFFF3) != 0
     || (*((_WORD *)v2 + 57) & 8) == 0
     || *((_WORD *)v2 + 53) >= 3u
     || *((_WORD *)v2 + 54) && *((_WORD *)v2 + 55)) )
  {
    v11 = xmmword_1C0255560;
    v12 = a2 - *((_DWORD *)v2 + 23);
    v13 = a2 - *((_DWORD *)xmmword_1C0255560 + 218);
    v14 = *((_QWORD *)xmmword_1C0255560 + 105) + 1LL;
    v15 = *((_QWORD *)xmmword_1C0255560 + 108);
    *((_QWORD *)xmmword_1C0255560 + 105) = v14;
    if ( (*((_BYTE *)v2 + 100) & 1) != 0 )
    {
      v29 = *((_QWORD *)v2 + 3);
      v30 = &word_1C0210C64;
      v85 = &word_1C0210C64;
      v31 = &word_1C0210C64;
      v84 = &word_1C0210C64;
      if ( *(_QWORD *)(v29 + 40) )
      {
        v32 = *(const WCHAR **)(v29 + 48);
        if ( *(_DWORD *)(v29 + 72) == 1 )
        {
          v85 = *(const WCHAR **)(v29 + 40);
          if ( v32 )
            v84 = v32;
        }
        else
        {
          v30 = *(const WCHAR **)(v29 + 40);
          if ( v32 )
            v31 = *(const WCHAR **)(v29 + 48);
        }
      }
      v33 = *((_OWORD *)v2 + 2);
      v88 = *((_DWORD *)v2 + 14);
      v34 = *((_QWORD *)v2 + 6);
      v35 = *((_WORD *)v2 + 30);
      v86 = v33;
      v89 = v35;
      v87 = v34;
      if ( !(unsigned int)OnlyCompositionMetrics(v2, &v86, 0LL, v15)
        && (unsigned int)dword_1C024A250 > 5
        && tlgKeywordOn((__int64)&dword_1C024A250, 0x800000000800LL) )
      {
        v97 = *(_QWORD *)(v38 + 16);
        v39 = *(_DWORD *)(v38 + 124) & 0xFFFFFF;
        v98[2] = 0x2000000LL;
        v91 = v39;
        v40 = *v6 & 0xFFFFFF;
        v92 = v14;
        v41 = *(_WORD *)(v38 + 52);
        v72 = v40;
        v45 = *(_WORD *)(v38 + 106);
        v46 = *(_WORD *)(v38 + 112);
        v47 = *(_WORD *)(v38 + 110);
        v48 = *(_WORD *)(v38 + 108);
        v73 = *(_DWORD *)(v38 + 96);
        v49 = *(_WORD *)(v38 + 54);
        v50 = *(_WORD *)(v38 + 104);
        v74 = *((_DWORD *)v11 + 219);
        v75 = xmmword_1C0255544;
        v76 = DWORD2(xmmword_1C0255544);
        v71 = DWORD1(xmmword_1C0255544);
        v77 = DWORD1(xmmword_1C0255534);
        v51 = *(_WORD *)(v38 + 70);
        v99 = *(_BYTE *)(v38 + 72);
        v52 = *(_WORD *)(v38 + 68);
        v53 = *(_WORD *)(v38 + 66);
        v54 = *(_WORD *)(v38 + 64);
        v55 = *(_WORD *)(v38 + 62);
        v56 = *(_WORD *)(v38 + 44);
        v57 = *(_WORD *)(v38 + 58);
        v58 = *(_WORD *)(v38 + 56);
        LOWORD(v40) = v41 + *(_WORD *)(v38 + 50);
        v59 = v41;
        v42 = *(_WORD *)(v38 + 48);
        v60 = v40;
        LOWORD(v40) = v42 + *(_WORD *)(v38 + 46);
        v61 = v42;
        v43 = *(_WORD *)(v38 + 42);
        v62 = v40;
        LOWORD(v40) = v43 + *(_WORD *)(v38 + 40);
        v63 = v43;
        v44 = *(unsigned __int16 *)(v38 + 38);
        v64 = v40;
        v66 = *(_WORD *)(v38 + 36);
        LOWORD(v40) = *(_WORD *)(v38 + 34);
        v90 = v12;
        v67 = v44 + v40;
        v68 = *(_WORD *)(v38 + 32);
        *(_QWORD *)&v86 = *(_QWORD *)(v38 + 160);
        LOWORD(v40) = *(_WORD *)(v38 + 168);
        v65 = v44;
        WORD4(v86) = v40;
        v69 = *(_WORD *)(v38 + 140);
        LODWORD(v78) = *(_DWORD *)(v38 + 152);
        HIDWORD(v78) = *(_DWORD *)(v38 + 144);
        v79 = *(unsigned __int16 *)(v38 + 102);
        v80 = *(_DWORD *)(v38 + 132);
        v81 = *(_DWORD *)(v38 + 136);
        v94 = v38 + 76;
        v95 = v38 + 76;
        v83 = *(_DWORD *)(v37 + 64);
        v70 = *(_DWORD *)(v37 + 68);
        v82 = v13;
        v93 = v36;
        v100 = 1;
        v101 = 1;
        v96 = (__int64)v31;
        v98[0] = v30;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v44,
          &unk_1C0222727);
      }
    }
    else
    {
      v16 = *((_OWORD *)v2 + 2);
      v88 = *((_DWORD *)v2 + 14);
      v17 = *((_QWORD *)v2 + 6);
      v18 = *((_WORD *)v2 + 30);
      v86 = v16;
      v89 = v18;
      v87 = v17;
      if ( !(unsigned int)OnlyCompositionMetrics(v2, &v86, 0LL, v15)
        && (unsigned int)dword_1C024A250 > 5
        && tlgKeywordOn((__int64)&dword_1C024A250, 0x800000000800LL) )
      {
        v95 = *(_QWORD *)(v22 + 16);
        v23 = *v7 & 0xFFFFFF;
        v98[0] = 0x2000000LL;
        v83 = v23;
        v24 = *v6 & 0xFFFFFF;
        v96 = v14;
        v25 = *(_WORD *)(v22 + 52);
        v82 = v24;
        v69 = *(_WORD *)(v22 + 106);
        v68 = *(_WORD *)(v22 + 112);
        v67 = *(_WORD *)(v22 + 110);
        v66 = *(_WORD *)(v22 + 108);
        v81 = *(_DWORD *)(v22 + 96);
        v65 = *(_WORD *)(v22 + 54);
        v64 = *(_WORD *)(v22 + 104);
        v80 = *((_DWORD *)v11 + 219);
        v79 = xmmword_1C0255544;
        v78 = *(_QWORD *)((char *)&xmmword_1C0255544 + 4);
        v77 = DWORD1(xmmword_1C0255534);
        v63 = *(_WORD *)(v22 + 70);
        v99 = *(_BYTE *)(v22 + 72);
        v62 = *(_WORD *)(v22 + 68);
        v61 = *(_WORD *)(v22 + 66);
        v60 = *(_WORD *)(v22 + 64);
        v59 = *(_WORD *)(v22 + 62);
        v58 = *(_WORD *)(v22 + 44);
        v57 = *(_WORD *)(v22 + 58);
        v56 = *(_WORD *)(v22 + 56);
        LOWORD(v24) = v25 + *(_WORD *)(v22 + 50);
        v55 = v25;
        v26 = *(_WORD *)(v22 + 48);
        v54 = v24;
        LOWORD(v24) = v26 + *(_WORD *)(v22 + 46);
        v53 = v26;
        v27 = *(_WORD *)(v22 + 42);
        v52 = v24;
        LOWORD(v24) = v27 + *(_WORD *)(v22 + 40);
        v51 = v27;
        v28 = *(unsigned __int16 *)(v22 + 38);
        v50 = v24;
        v48 = *(_WORD *)(v22 + 36);
        LOWORD(v24) = *(_WORD *)(v22 + 34);
        v70 = v12;
        v47 = v28 + v24;
        v46 = *(_WORD *)(v22 + 32);
        *(_QWORD *)&v86 = *(_QWORD *)(v22 + 160);
        LOWORD(v24) = *(_WORD *)(v22 + 168);
        v49 = v28;
        WORD4(v86) = v24;
        v45 = *(_WORD *)(v22 + 140);
        v71 = *(_DWORD *)(v22 + 152);
        v76 = *(_DWORD *)(v22 + 144);
        v75 = *(unsigned __int16 *)(v22 + 102);
        v74 = *(_DWORD *)(v22 + 132);
        v73 = *(_DWORD *)(v22 + 136);
        v72 = v13;
        v94 = v20;
        v93 = v21;
        v97 = v21;
        v100 = 1;
        v101 = 1;
        v92 = v21;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v28,
          (unsigned int)&unk_1C02221C4,
          v19,
          v20,
          (__int64)&v92,
          (__int64)&v101,
          (__int64)&v100,
          (__int64)&v97,
          (__int64)&v93,
          (__int64)&v94,
          (__int64)&v72,
          (__int64)&v73,
          (__int64)&v74,
          (__int64)&v75,
          (__int64)&v76,
          (__int64)&v71,
          (__int64)&v45,
          (__int64)&v86,
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
          (__int64)&v58,
          (__int64)&v59,
          (__int64)&v60,
          (__int64)&v61,
          (__int64)&v62,
          (__int64)&v99,
          (__int64)&v63,
          (__int64)&v77,
          (__int64)&v78,
          (__int64)&v78 + 4,
          (__int64)&v79,
          (__int64)&v80,
          (__int64)&v64,
          (__int64)&v65,
          (__int64)&v81,
          (__int64)&v66,
          (__int64)&v67,
          (__int64)&v68,
          (__int64)&v69,
          (__int64)&v82,
          (__int64)&v83,
          (__int64)&v95,
          (__int64)&v70,
          (__int64)&v96,
          (__int64)v98);
      }
    }
  }
}
