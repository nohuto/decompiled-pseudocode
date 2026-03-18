/*
 * XREFs of ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00A42A4
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C004CD04 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A2C48 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C023F0CC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0017404 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C00A4900 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U3@U3@U3@U2@U2@U2@U3@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U3@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@5554445554444444444444555444444444444443544@Z @ 0x1C00A4B74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U3@U3@U3@U2@.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C00A4FEC (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A5474 (-CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@U1@U1@U2@U2@U?$_tlgWrapperByVal@$07@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@AEBU_tlgWrapperBinary@@3344AEBU?$_tlgWrapperByVal@$07@@6@Z @ 0x1C023EDD8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@U1@U1@U2@U2@U-.c)
 */

void __fastcall CitpPostUpdateUseInfoLog(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  int v2; // esi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned __int16 v29; // cx
  __int16 v30; // ax
  unsigned __int16 v31; // cx
  __int16 v32; // ax
  unsigned __int16 v33; // cx
  __int16 v34; // ax
  int v35; // ecx
  unsigned __int64 v36; // rax
  unsigned int v37; // eax
  unsigned __int64 v38; // rdi
  unsigned int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // r8d
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  __int16 v51; // [rsp+198h] [rbp-80h] BYREF
  __int16 v52; // [rsp+19Ah] [rbp-7Eh] BYREF
  __int16 v53; // [rsp+19Ch] [rbp-7Ch] BYREF
  __int16 v54; // [rsp+19Eh] [rbp-7Ah] BYREF
  __int16 v55; // [rsp+1A0h] [rbp-78h] BYREF
  __int16 v56; // [rsp+1A2h] [rbp-76h] BYREF
  __int16 v57; // [rsp+1A4h] [rbp-74h] BYREF
  __int16 v58; // [rsp+1A6h] [rbp-72h] BYREF
  __int16 v59; // [rsp+1A8h] [rbp-70h] BYREF
  __int16 v60; // [rsp+1AAh] [rbp-6Eh] BYREF
  __int16 v61; // [rsp+1ACh] [rbp-6Ch] BYREF
  int v62; // [rsp+1B0h] [rbp-68h] BYREF
  int v63; // [rsp+1B4h] [rbp-64h] BYREF
  int v64; // [rsp+1B8h] [rbp-60h] BYREF
  int v65; // [rsp+1BCh] [rbp-5Ch] BYREF
  unsigned int v66; // [rsp+1C0h] [rbp-58h] BYREF
  unsigned int v67; // [rsp+1C4h] [rbp-54h] BYREF
  unsigned int v68; // [rsp+1C8h] [rbp-50h] BYREF
  unsigned int v69; // [rsp+1CCh] [rbp-4Ch] BYREF
  unsigned int v70; // [rsp+1D0h] [rbp-48h] BYREF
  unsigned int v71; // [rsp+1D4h] [rbp-44h] BYREF
  unsigned int v72; // [rsp+1D8h] [rbp-40h] BYREF
  unsigned int v73; // [rsp+1DCh] [rbp-3Ch] BYREF
  unsigned int v74; // [rsp+1E0h] [rbp-38h] BYREF
  unsigned int v75; // [rsp+1E4h] [rbp-34h] BYREF
  unsigned int v76; // [rsp+1E8h] [rbp-30h] BYREF
  unsigned int v77; // [rsp+1ECh] [rbp-2Ch] BYREF
  int v78; // [rsp+1F0h] [rbp-28h] BYREF
  int v79; // [rsp+1F4h] [rbp-24h] BYREF
  int v80; // [rsp+1F8h] [rbp-20h] BYREF
  int v81; // [rsp+1FCh] [rbp-1Ch] BYREF
  int v82; // [rsp+200h] [rbp-18h] BYREF
  int v83; // [rsp+204h] [rbp-14h] BYREF
  int v84; // [rsp+208h] [rbp-10h] BYREF
  int v85; // [rsp+20Ch] [rbp-Ch] BYREF
  int v86; // [rsp+210h] [rbp-8h] BYREF
  int v87; // [rsp+214h] [rbp-4h] BYREF
  int v88; // [rsp+218h] [rbp+0h] BYREF
  int v89; // [rsp+21Ch] [rbp+4h] BYREF
  int v90; // [rsp+220h] [rbp+8h] BYREF
  int v91; // [rsp+224h] [rbp+Ch] BYREF
  int v92; // [rsp+228h] [rbp+10h] BYREF
  int v93; // [rsp+22Ch] [rbp+14h] BYREF
  int v94; // [rsp+230h] [rbp+18h] BYREF
  int v95; // [rsp+234h] [rbp+1Ch] BYREF
  double v96; // [rsp+238h] [rbp+20h] BYREF
  __int64 v97; // [rsp+240h] [rbp+28h] BYREF
  const wchar_t *v98; // [rsp+248h] [rbp+30h] BYREF
  __int16 v99; // [rsp+250h] [rbp+38h]
  _OWORD Data[8]; // [rsp+258h] [rbp+40h] BYREF

  v2 = a2;
  v65 = a2;
  CitUpdateInputTypeCoverage(a1);
  if ( *((_WORD *)a1 + 172) )
  {
    CitpStatIncrement((unsigned __int16 *)a1 + 173, 1);
    memset(Data, 0, 0x78uLL);
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)Data);
    if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x800000000800LL) )
    {
      v4 = *((_DWORD *)a1 + 133);
      v87 = DWORD2(Data[6]);
      v92 = DWORD1(Data[6]);
      v53 = Data[6];
      v96 = *((double *)&Data[5] + 1);
      v95 = *((_DWORD *)a1 + 54);
      v94 = v2;
      if ( HIDWORD(Data[4]) <= v4 )
        v5 = 0;
      else
        v5 = HIDWORD(Data[4]) - v4;
      v6 = *((_DWORD *)a1 + 132);
      v66 = v5;
      if ( DWORD2(Data[4]) <= v6 )
        v7 = 0;
      else
        v7 = DWORD2(Data[4]) - v6;
      v8 = *((_DWORD *)a1 + 131);
      v67 = v7;
      if ( DWORD1(Data[4]) <= v8 )
        v9 = 0;
      else
        v9 = DWORD1(Data[4]) - v8;
      v10 = *((_DWORD *)a1 + 129);
      v68 = v9;
      if ( HIDWORD(Data[3]) > v10 )
        v11 = HIDWORD(Data[3]) - v10;
      else
        v11 = 0;
      v12 = *((_DWORD *)a1 + 127);
      v69 = v11;
      if ( DWORD1(Data[3]) > v12 )
        v13 = DWORD1(Data[3]) - v12;
      else
        v13 = 0;
      v14 = *((_DWORD *)a1 + 126);
      v70 = v13;
      if ( LODWORD(Data[3]) > v14 )
        v15 = LODWORD(Data[3]) - v14;
      else
        v15 = 0;
      v16 = *((_DWORD *)a1 + 125);
      v71 = v15;
      if ( HIDWORD(Data[2]) <= v16 )
        v17 = 0;
      else
        v17 = HIDWORD(Data[2]) - v16;
      v18 = *((_DWORD *)a1 + 124);
      v72 = v17;
      if ( DWORD2(Data[2]) <= v18 )
        v19 = 0;
      else
        v19 = DWORD2(Data[2]) - v18;
      v20 = *((_DWORD *)a1 + 123);
      v73 = v19;
      if ( DWORD1(Data[2]) <= v20 )
      {
        LODWORD(v22) = 0;
        v21 = 0;
      }
      else
      {
        v21 = DWORD1(Data[2]) - v20;
        LODWORD(v22) = 0;
      }
      v23 = *((_DWORD *)a1 + 119);
      v74 = v21;
      if ( DWORD1(Data[1]) <= v23 )
        v24 = 0;
      else
        v24 = DWORD1(Data[1]) - v23;
      v25 = *((_DWORD *)a1 + 118);
      v75 = v24;
      if ( LODWORD(Data[1]) <= v25 )
        v26 = 0;
      else
        v26 = LODWORD(Data[1]) - v25;
      v27 = *((_DWORD *)a1 + 117);
      v76 = v26;
      if ( HIDWORD(Data[0]) <= v27 )
        v28 = 0;
      else
        v28 = HIDWORD(Data[0]) - v27;
      v29 = *((_WORD *)a1 + 232);
      v77 = v28;
      if ( WORD4(Data[0]) <= v29 )
        v30 = 0;
      else
        v30 = WORD4(Data[0]) - v29;
      v31 = *((_WORD *)a1 + 231);
      v52 = v30;
      if ( WORD3(Data[0]) > v31 )
        v32 = WORD3(Data[0]) - v31;
      else
        v32 = 0;
      v33 = *((_WORD *)a1 + 230);
      v51 = v32;
      if ( WORD2(Data[0]) > v33 )
        v34 = WORD2(Data[0]) - v33;
      else
        v34 = 0;
      v35 = Data[5];
      v54 = v34;
      v36 = *((_QWORD *)a1 + 67);
      if ( *(_QWORD *)&Data[5] > v36 )
      {
        v35 = LODWORD(Data[5]) - v36;
        v22 = (*(_QWORD *)&Data[5] - v36) / 0x989680;
        if ( v22 > 0xFFFFFFFF )
          LODWORD(v22) = -1;
      }
      v79 = HIDWORD(Data[4]);
      v80 = DWORD2(Data[4]);
      v81 = DWORD1(Data[4]);
      v82 = Data[4];
      v83 = HIDWORD(Data[3]);
      v84 = DWORD2(Data[3]);
      v85 = DWORD1(Data[3]);
      v90 = Data[2];
      v55 = HIWORD(Data[1]);
      v56 = WORD6(Data[1]);
      v57 = WORD4(Data[1]);
      v58 = WORD5(Data[0]);
      v64 = Data[0];
      v78 = v22;
      v86 = Data[3];
      v93 = HIDWORD(Data[2]);
      v88 = DWORD2(Data[2]);
      v89 = DWORD1(Data[2]);
      v91 = DWORD1(Data[1]);
      v63 = Data[1];
      v62 = HIDWORD(Data[0]);
      v59 = WORD4(Data[0]);
      v60 = WORD3(Data[0]);
      v61 = WORD2(Data[0]);
      v97 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v35,
        (unsigned int)&unk_1C0264F46,
        WORD2(Data[0]),
        WORD3(Data[0]),
        (__int64)&v97,
        (__int64)&v64,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v62,
        (__int64)&v63,
        (__int64)&v91,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v90,
        (__int64)&v89,
        (__int64)&v88,
        (__int64)&v93,
        (__int64)&v86,
        (__int64)&v85,
        (__int64)&v84,
        (__int64)&v83,
        (__int64)&v82,
        (__int64)&v81,
        (__int64)&v80,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v54,
        (__int64)&v51,
        (__int64)&v52,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v95,
        (__int64)&v94,
        (__int64)&v96,
        (__int64)&v53,
        (__int64)&v92,
        (__int64)&v87);
      v2 = v65;
    }
    v37 = *((_DWORD *)a1 + 118);
    v38 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v39 = v38 - *((_DWORD *)a1 + 207);
    LODWORD(Data[7]) = v39;
    if ( LODWORD(Data[1]) <= v37 )
      v40 = 0;
    else
      v40 = LODWORD(Data[1]) - v37;
    v41 = v40 + HIDWORD(Data[6]);
    HIDWORD(Data[6]) += v40;
    if ( v2 == 2 || v39 >= HIDWORD(xmmword_1C029A204) )
    {
      if ( v41 >= HIDWORD(xmmword_1C029A204) / 0x3E8 )
        HIDWORD(Data[6]) = HIDWORD(xmmword_1C029A204) / 0x3E8 - 1;
      if ( (unsigned int)dword_1C028D888 > 5 && tlgKeywordOn((__int64)&dword_1C028D888, 0x400000000000LL) )
      {
        v98 = L"Value";
        v97 = *(_QWORD *)&DOUBLE_N1_0;
        v99 = 10;
        v96 = DOUBLE_N1_0;
        LOBYTE(v51) = 4;
        LOBYTE(v52) = 0;
        v65 = v50;
        v64 = v49;
        LOBYTE(v53) = 0;
        v62 = 1;
        v63 = 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v48,
          (unsigned int)&unk_1C0264EB6,
          v49,
          v50,
          (__int64)&v63,
          (__int64)&v62,
          (__int64)&v53,
          (__int64)&v98,
          (__int64)&v64,
          (__int64)&v65,
          (__int64)&v52,
          (__int64)&v51,
          (__int64)&v96,
          (__int64)&v97);
      }
      *(_QWORD *)((char *)&Data[6] + 12) = 0LL;
      *((_DWORD *)a1 + 207) = v38;
    }
    CitpPostUpdateUseInfoSave(a1, Data);
    v42 = Data[1];
    *(_OWORD *)((char *)a1 + 456) = Data[0];
    v43 = Data[2];
    *(_OWORD *)((char *)a1 + 472) = v42;
    v44 = Data[3];
    *(_OWORD *)((char *)a1 + 488) = v43;
    v45 = Data[4];
    *(_OWORD *)((char *)a1 + 504) = v44;
    v46 = Data[5];
    *(_OWORD *)((char *)a1 + 520) = v45;
    v47 = Data[6];
    *(_OWORD *)((char *)a1 + 536) = v46;
    *(_QWORD *)&v46 = *(_QWORD *)&Data[7];
    *(_OWORD *)((char *)a1 + 552) = v47;
    *((_QWORD *)a1 + 71) = v46;
  }
}
