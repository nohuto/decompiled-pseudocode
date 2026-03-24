/*
 * XREFs of ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01FD7E4
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0049BD4 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01FD3F4 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00463BC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0089DB8 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C008DC0C (-Citp100NSToMS@@YAI_K@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C01FCEA8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$01@@U2@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$07@@45554@Z @ 0x1C01FCF98 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperB_ea_1C01FCF98.c)
 *     ?CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01FD2E4 (-CitDPMemoizationInitialize@@YAXPEAU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 *     ?CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z @ 0x1C01FD6FC (-CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z.c)
 *     ?CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z @ 0x1C01FDEA8 (-CitpDPProcessDuration@@YAIPEBU_CIT_DP_MEMOIZATION_CONTEXT@@PEBU_CIT_DP_CALC_CONTEXT@@II@Z.c)
 */

void __fastcall CitpDPDataLog(struct _CIT_IMPACT_CONTEXT *a1)
{
  char *v1; // rbx
  int v3; // edi
  double v4; // xmm7_8
  unsigned int v5; // r9d
  const struct _CIT_DP_MEMOIZATION_CONTEXT *v6; // r14
  __int128 v7; // xmm1
  int v8; // edx
  __int64 v9; // r15
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  char *v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r12d
  unsigned int v25; // ebx
  _DWORD *i; // rsi
  unsigned int v27; // r15d
  unsigned int v28; // r13d
  float v29; // xmm6_4
  unsigned int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // r8
  float v33; // xmm0_4
  unsigned int v34; // r8d
  __int64 v35; // r9
  __int64 v36; // r8
  float v37; // xmm0_4
  float v38; // xmm0_4
  unsigned int v39; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  char *v49; // rbx
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // rax
  char v56; // [rsp+98h] [rbp-80h] BYREF
  char v57; // [rsp+99h] [rbp-7Fh] BYREF
  char v58; // [rsp+9Ah] [rbp-7Eh] BYREF
  char v59; // [rsp+9Bh] [rbp-7Dh] BYREF
  char v60; // [rsp+9Ch] [rbp-7Ch] BYREF
  char v61; // [rsp+9Dh] [rbp-7Bh] BYREF
  __int16 v62; // [rsp+9Eh] [rbp-7Ah] BYREF
  __int16 v63; // [rsp+A0h] [rbp-78h] BYREF
  int v64; // [rsp+A2h] [rbp-76h] BYREF
  float v65; // [rsp+A8h] [rbp-70h] BYREF
  float v66; // [rsp+ACh] [rbp-6Ch] BYREF
  float v67; // [rsp+B0h] [rbp-68h] BYREF
  float v68; // [rsp+B4h] [rbp-64h] BYREF
  float v69; // [rsp+B8h] [rbp-60h] BYREF
  float v70; // [rsp+BCh] [rbp-5Ch] BYREF
  float v71; // [rsp+C0h] [rbp-58h] BYREF
  unsigned int v72; // [rsp+C4h] [rbp-54h] BYREF
  unsigned int v73; // [rsp+C8h] [rbp-50h] BYREF
  float v74; // [rsp+CCh] [rbp-4Ch] BYREF
  unsigned int v75; // [rsp+D0h] [rbp-48h] BYREF
  unsigned int v76; // [rsp+D4h] [rbp-44h] BYREF
  unsigned int v77; // [rsp+D8h] [rbp-40h] BYREF
  unsigned int v78; // [rsp+DCh] [rbp-3Ch] BYREF
  unsigned int v79; // [rsp+E0h] [rbp-38h] BYREF
  unsigned int v80; // [rsp+E4h] [rbp-34h] BYREF
  float v81; // [rsp+E8h] [rbp-30h] BYREF
  float v82; // [rsp+ECh] [rbp-2Ch] BYREF
  unsigned int v83; // [rsp+F0h] [rbp-28h] BYREF
  __int64 v84; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v85; // [rsp+100h] [rbp-18h] BYREF
  __int64 v86; // [rsp+108h] [rbp-10h]
  __int64 v87; // [rsp+110h] [rbp-8h] BYREF
  _BYTE v88[80]; // [rsp+118h] [rbp+0h] BYREF
  __int128 v89; // [rsp+168h] [rbp+50h] BYREF
  __int128 v90; // [rsp+178h] [rbp+60h]
  __int128 v91; // [rsp+188h] [rbp+70h] BYREF
  __int128 v92; // [rsp+198h] [rbp+80h]
  __int128 v93; // [rsp+1A8h] [rbp+90h]
  __int128 v94; // [rsp+1B8h] [rbp+A0h]
  __int128 v95; // [rsp+1C8h] [rbp+B0h]
  __int128 v96; // [rsp+1D8h] [rbp+C0h]

  v1 = (char *)a1 + 592;
  v3 = 0x546000u / BYTE3(qword_1C0255554);
  v4 = 8.0 / (double)BYTE2(qword_1C0255554);
  memset(v88, 0, sizeof(v88));
  CitpDPCalcInit((struct _CIT_DP_CALC_CONTEXT *)v88, v4, (double)(((unsigned int)qword_1C0255554 >> 2) & 0xF) * 0.025);
  v6 = (const struct _CIT_DP_MEMOIZATION_CONTEXT *)(v1 + 88);
  if ( *((double *)v1 + 11) != v4 || *((_DWORD *)v1 + 24) != v3 )
    CitDPMemoizationInitialize(
      (struct _CIT_DP_MEMOIZATION_CONTEXT *)(v1 + 88),
      (const struct _CIT_DP_CALC_CONTEXT *)v88,
      v3,
      v5);
  CitpStatIncrement((unsigned __int16 *)v1 + 2, 1);
  v7 = *((_OWORD *)v1 + 1);
  v9 = (unsigned int)(v8 + 127);
  v89 = *(_OWORD *)v1;
  v10 = *((_OWORD *)v1 + 2);
  v90 = v7;
  v11 = *((_OWORD *)v1 + 3);
  v91 = v10;
  v12 = *((_OWORD *)v1 + 4);
  v92 = v11;
  v13 = *((_OWORD *)v1 + 5);
  v93 = v12;
  v14 = *((_OWORD *)v1 + 6);
  v94 = v13;
  v15 = *(_OWORD *)&v1[v9];
  v95 = v14;
  v16 = (char *)&v89 + v9;
  *((_OWORD *)v16 - 1) = *((_OWORD *)v1 + 7);
  v17 = *(_OWORD *)&v1[v9 + 16];
  *(_OWORD *)v16 = v15;
  v18 = *(_OWORD *)&v1[v9 + 32];
  *((_OWORD *)v16 + 1) = v17;
  v19 = *(_OWORD *)&v1[v9 + 48];
  *((_OWORD *)v16 + 2) = v18;
  v20 = *(_OWORD *)&v1[v9 + 64];
  *((_OWORD *)v16 + 3) = v19;
  v21 = *(_OWORD *)&v1[v9 + 80];
  v22 = *(_QWORD *)&v1[v9 + 96];
  *((_OWORD *)v16 + 4) = v20;
  *((_OWORD *)v16 + 5) = v21;
  *((_QWORD *)v16 + 12) = v22;
  v23 = MEMORY[0xFFFFF78000000014];
  v24 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 206);
  *((_DWORD *)a1 + 206) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_QWORD *)v1 + 4) = v23;
  *(_OWORD *)(v1 + 40) = 0LL;
  v86 = v23;
  *(_OWORD *)(v1 + 56) = 0LL;
  *((_QWORD *)v1 + 9) = 0LL;
  *((_DWORD *)v1 + 20) = 0;
  if ( CitpDPDataSave(a1) >= 0 )
  {
    v25 = 0;
    for ( i = (_DWORD *)&v91 + 2; ; ++i )
    {
      v27 = *i / 0x3E8u;
      *(float *)&v28 = COERCE_FLOAT(CitpDPProcessDuration(v6, (const struct _CIT_DP_CALC_CONTEXT *)v88, v25, v27));
      if ( (qword_1C0255554 & 1) != 0 )
      {
        if ( (unsigned int)dword_1C024A250 > 5 )
        {
          v29 = (float)v3;
          if ( tlgKeywordOn((__int64)&dword_1C024A250, 0x800000000800LL) )
          {
            v66 = (float)v3;
            v32 = v30 >> 2;
            v33 = v4;
            v84 = 0x2000000LL;
            v75 = v24 / 0x3E8;
            v65 = v33;
            v71 = (float)v3;
            v68 = v33;
            LOWORD(v32) = v32 & 0xF;
            v76 = HIDWORD(xmmword_1C0255544) / 0x3E8;
            v62 = v32;
            v67 = *(float *)&v28;
            v56 = v25;
            v57 = 4;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              274877907LL,
              byte_1C022269E,
              v32,
              v31,
              (__int64)&v57,
              (__int64)&v56,
              (__int64)&v67,
              (__int64)&v68,
              (__int64)&v71,
              (__int64)&v62,
              (__int64)&v76,
              (__int64)&v75,
              (__int64)&v84);
          }
LABEL_13:
          if ( (unsigned int)dword_1C024A250 > 5 && tlgKeywordOn((__int64)&dword_1C024A250, 0x400000000800LL) )
          {
            v38 = v4;
            v70 = v29;
            v69 = v38;
            v39 = Citp100NSToMS(v86 - v91);
            v78 = v27;
            v87 = 0x2000000LL;
            v64 = DWORD1(v89);
            LOWORD(v65) = WORD4(v89);
            v77 = v39 / 0x3E8;
            v83 = v28;
            v79 = v24 / 0x3E8;
            LOWORD(v66) = ((unsigned int)qword_1C0255554 >> 2) & 0xF;
            v81 = v70;
            v82 = v69;
            v80 = HIDWORD(xmmword_1C0255544) / 0x3E8;
            v60 = v25;
            v61 = 4;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>>(
              v39,
              byte_1C0222C1B,
              v40,
              v41,
              (__int64)&v61,
              (__int64)&v60,
              (__int64)&v83,
              (__int64)&v82,
              (__int64)&v81,
              (__int64)&v66,
              (__int64)&v80,
              (__int64)&v79,
              (__int64)&v87,
              (__int64)&v78,
              (__int64)&v65,
              (__int64)&v64 + 2,
              (__int64)&v64,
              (__int64)&v77);
          }
        }
      }
      else if ( (unsigned int)dword_1C024A250 > 5 )
      {
        v29 = (float)v3;
        if ( tlgKeywordOn((__int64)&dword_1C024A250, 0x400000000800LL) )
        {
          v67 = (float)v3;
          v36 = v34 >> 2;
          v37 = v4;
          v85 = 0x2000000LL;
          v72 = v24 / 0x3E8;
          v68 = v37;
          v74 = (float)v3;
          v69 = v37;
          LOWORD(v36) = v36 & 0xF;
          v73 = HIDWORD(xmmword_1C0255544) / 0x3E8;
          v63 = v36;
          v70 = *(float *)&v28;
          v58 = v25;
          v59 = 4;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            274877907LL,
            byte_1C0222616,
            v36,
            v35,
            (__int64)&v59,
            (__int64)&v58,
            (__int64)&v70,
            (__int64)&v69,
            (__int64)&v74,
            (__int64)&v63,
            (__int64)&v73,
            (__int64)&v72,
            (__int64)&v85);
        }
        goto LABEL_13;
      }
      if ( ++v25 >= 0xB )
        return;
    }
  }
  v42 = v90;
  *(_OWORD *)v1 = v89;
  v43 = v91;
  *((_OWORD *)v1 + 1) = v42;
  v44 = v92;
  *((_OWORD *)v1 + 2) = v43;
  v45 = v93;
  *((_OWORD *)v1 + 3) = v44;
  v46 = v94;
  *((_OWORD *)v1 + 4) = v45;
  v47 = v95;
  *((_OWORD *)v1 + 5) = v46;
  v48 = v96;
  *((_OWORD *)v1 + 6) = v47;
  v49 = &v1[v9];
  *((_OWORD *)v49 - 1) = v48;
  v50 = *(__int128 *)((char *)&v89 + v9 + 16);
  *(_OWORD *)v49 = *(__int128 *)((char *)&v89 + v9);
  v51 = *(__int128 *)((char *)&v89 + v9 + 32);
  *((_OWORD *)v49 + 1) = v50;
  v52 = *(__int128 *)((char *)&v89 + v9 + 48);
  *((_OWORD *)v49 + 2) = v51;
  v53 = *(__int128 *)((char *)&v89 + v9 + 64);
  *((_OWORD *)v49 + 3) = v52;
  v54 = *(__int128 *)((char *)&v89 + v9 + 80);
  v55 = *(_QWORD *)((char *)&v89 + v9 + 96);
  *((_OWORD *)v49 + 4) = v53;
  *((_OWORD *)v49 + 5) = v54;
  *((_QWORD *)v49 + 12) = v55;
}
