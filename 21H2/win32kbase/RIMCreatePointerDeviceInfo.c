/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C015C02C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0056F3C (RIMAllocateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C004157C (RIMIsRunningOnDesktop.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     RIMGetDeviceParent @ 0x1C006CE50 (RIMGetDeviceParent.c)
 *     RIMFreeQDCActivePathsData @ 0x1C006DCC4 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C006E0F0 (RIMGetQDCActivePathsData.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00AC634 (RimDeviceTypeToRimInputTypeString.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00B3EE8 (HMValidateSharedHandleNoRip.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C015AEE0 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C015B66C (rimSetupPalmTelemetry.c)
 *     RIMAssignTouchType @ 0x1C015BBC8 (RIMAssignTouchType.c)
 *     RIMCheckPressureUsageStatus @ 0x1C015BFFC (RIMCheckPressureUsageStatus.c)
 *     RIMFreePointerDevice @ 0x1C015D6F4 (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C015D9D0 (RIMGetDeviceButtons.c)
 *     RIMGetDeviceLocationInfo @ 0x1C015DD18 (RIMGetDeviceLocationInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015DE78 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C015E6A4 (RIMGetProductString.c)
 *     RIMGetPropertyCount @ 0x1C015E8F4 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C015EBE0 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C015EDAC (RIMIsDeviceExcluded.c)
 *     RIMIsEssentialUsage @ 0x1C015EEFC (RIMIsEssentialUsage.c)
 *     RIMIsInputUsagePresent @ 0x1C0161C34 (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163618 (rimHidP_GetSpecificValueCaps.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0164840 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C016494C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164C1C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165650 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C016BE68 (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C017FFE0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C01814D0 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C01815CC (RIMRetrieveNormalizationRange.c)
 *     RIMValidatePTPProperties @ 0x1C0181DB4 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A52C4 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C01D043C (ApiSetRetrieveCalibrationData.c)
 *     ApiSetValidateDeviceSignature @ 0x1C01D1358 (ApiSetValidateDeviceSignature.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        unsigned __int16 *a4,
        __int64 a5,
        const WCHAR *a6,
        __int64 a7)
{
  const WCHAR *v7; // r15
  _DWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v14; // r14
  int v15; // eax
  void *v16; // rdx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // r14d
  int v24; // edx
  int SpecificValueCaps; // eax
  int v26; // esi
  int v27; // edx
  const wchar_t *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ecx
  int v33; // edx
  __int64 v34; // r14
  _QWORD *v35; // rcx
  int v36; // edx
  const wchar_t *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  _DWORD *v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  _BYTE *v45; // rdx
  __int64 v46; // r8
  unsigned int v47; // eax
  unsigned int i; // r9d
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // xmm0_8
  __int64 v52; // r9
  __m128i *v53; // r14
  __int16 v54; // r15
  unsigned __int16 v55; // r15
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rdx
  __m128i v59; // xmm1
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __int16 v62; // ax
  __m128i v63; // xmm5
  __int64 v64; // xmm0_8
  __m128i v65; // xmm2
  __m128i v66; // xmm3
  __m128i v67; // xmm4
  __m128i v68; // xmm5
  __int64 v69; // xmm0_8
  __m128i v70; // xmm2
  __m128i v71; // xmm3
  __m128i v72; // xmm4
  bool v73; // cf
  unsigned int *v74; // rax
  int v75; // ecx
  unsigned int *v76; // rsi
  __int64 v77; // xmm0_8
  int v78; // edx
  int v79; // edx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // eax
  __int64 v84; // rax
  int v85; // edx
  __int64 v86; // xmm0_8
  int v87; // edx
  __int64 v88; // rdx
  int v89; // edx
  int v90; // edx
  struct _DEVICE_OBJECT *v91; // rcx
  int v92; // edx
  int v93; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v94; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v95; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v96[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v97; // [rsp+54h] [rbp-ACh]
  const WCHAR *v98; // [rsp+58h] [rbp-A8h] BYREF
  const WCHAR *v99[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v100; // [rsp+70h] [rbp-90h] BYREF
  int v101; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *v102; // [rsp+88h] [rbp-78h] BYREF
  const WCHAR *v103; // [rsp+90h] [rbp-70h] BYREF
  int v104; // [rsp+98h] [rbp-68h]
  __m128i *v105; // [rsp+A0h] [rbp-60h]
  struct _DEVICE_OBJECT *v106; // [rsp+A8h] [rbp-58h]
  __int128 v107; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v108; // [rsp+C0h] [rbp-40h]
  __int128 v109; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v110[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v111; // [rsp+120h] [rbp+20h]
  _OWORD v112[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v113; // [rsp+170h] [rbp+70h]
  _OWORD v114[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v115; // [rsp+1C0h] [rbp+C0h]
  _DWORD v116[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v117[144]; // [rsp+220h] [rbp+120h] BYREF

  v7 = a3;
  v104 = -1;
  v101 = -1;
  v106 = (struct _DEVICE_OBJECT *)a5;
  v98 = a3;
  v95 = a1;
  *(_QWORD *)&v100 = a7;
  v99[0] = a6;
  v105 = 0LL;
  v94 = 0;
  memset(v117, 0, sizeof(v117));
  v96[0] = 0;
  v97 = 0;
  v108 = 0LL;
  v109 = 0LL;
  memset(v116, 0, 0x48uLL);
  v11 = Win32AllocPoolZInit(0x4C8uLL, 1668313938LL);
  v12 = (__int64)v11;
  if ( !v11 )
    return 3221225628LL;
  v14 = (__int64)v106;
  v11[180] = 1;
  *((_QWORD *)v11 + 109) = v11 + 216;
  *((_QWORD *)v11 + 108) = v11 + 216;
  v15 = RIMGetProductString(v11, v14, a6);
  v16 = &WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v16, 1, 14, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
    if ( (unsigned int)dword_1C024A170 > 5 && tlgKeywordOn((__int64)&dword_1C024A170, 0x400000000000LL) )
    {
      v17 = *(unsigned __int8 *)(a2 + 48);
      *(_QWORD *)&v107 = L"Failed to retrieve productString";
      v102 = *(const WCHAR **)(a2 + 216);
      v103 = RimDeviceTypeToRimInputTypeString(a2, v17);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v18,
        byte_1C021B8A6,
        v19,
        v20,
        &v103,
        &v102,
        (const WCHAR **)&v107);
    }
  }
  if ( (int)RIMGetDeviceLocationInfo(v14, a2 + 2112) < 0 )
  {
    LODWORD(v102) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 332);
  }
  v21 = *a4;
  v107 = *(_OWORD *)(v12 + 320);
  if ( (unsigned int)RIMIsDeviceExcluded(v21, &v107) )
    goto LABEL_20;
  v22 = *(_DWORD *)(a1 + 84);
  v23 = 1;
  if ( (v22 & 4) != 0 )
  {
    if ( *a4 == 2 )
    {
      *(_DWORD *)(v12 + 24) = 5;
      rimSetupPalmTelemetry(a1);
      if ( (int)RIMInitializeDeadzone() < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, 15, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
        }
        gDeviceArbitrationType = 1;
      }
      goto LABEL_20;
    }
    if ( *a4 == 1 )
    {
      *(_DWORD *)(v12 + 24) = 6;
      if ( RIMIsRunningOnDesktop() )
        goto LABEL_20;
      goto LABEL_66;
    }
  }
  if ( (v22 & 0x18) == 0 || (unsigned __int16)(*a4 - 4) > 1u )
  {
    if ( (v22 & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
      goto LABEL_66;
    v23 = 0;
    goto LABEL_65;
  }
  *(_DWORD *)(v12 + 24) = 1;
  v26 = RIMAssignTouchType(v12, (__int64)v7);
  if ( v26 != -1073741668 )
  {
    if ( *a4 == 5 )
    {
      v97 = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = 7;
    }
    v32 = *(_DWORD *)(v95 + 84);
    if ( (v32 & 4) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
      v23 = 0;
    if ( (v32 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
      v23 = 0;
    if ( (v32 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
      v23 = 0;
    if ( !v23 )
    {
      v26 = RIMGetMaxCountFeatureDetails(a2, v95, v12, (_DWORD)v7, (__int64)a4, (__int64)v106, (__int64)v99[0]);
      if ( v26 == -1073741668 )
      {
        if ( (unsigned int)dword_1C024A170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024A170, 0x400000000000LL) )
          goto LABEL_50;
        v33 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v100 = L"Failed to get max count feature details";
        v99[0] = *(const WCHAR **)(a2 + 216);
        v28 = RimDeviceTypeToRimInputTypeString(a2, v33);
        goto LABEL_49;
      }
LABEL_20:
      v94 = 1;
      if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v116, (__int64)&v94, (__int64)v7) >= 0 )
      {
        if ( v116[10] >= v116[11] || v116[10] < 0 || v116[11] < 0xFFFF )
        {
          if ( (unsigned int)dword_1C024A170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024A170, 0x400000000000LL) )
            goto LABEL_73;
          v36 = *(unsigned __int8 *)(a2 + 48);
          *(_QWORD *)&v100 = L"Bad ScanTime minimum";
          v99[0] = *(const WCHAR **)(a2 + 216);
          v37 = RimDeviceTypeToRimInputTypeString(a2, v36);
          goto LABEL_72;
        }
        *(_DWORD *)(v12 + 312) |= 0x80u;
        *(_DWORD *)(v12 + 840) = v116[11];
      }
      v94 = 0;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                            0,
                            0,
                            *(unsigned __int16 *)(v12 + 728),
                            0,
                            0LL,
                            (__int64)&v94,
                            (__int64)v7);
      v26 = SpecificValueCaps;
      if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
      {
        if ( (unsigned int)dword_1C024A170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024A170, 0x400000000000LL) )
          goto LABEL_50;
        v27 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v100 = L"Coordinate usage missing";
        v99[0] = *(const WCHAR **)(a2 + 216);
        v28 = RimDeviceTypeToRimInputTypeString(a2, v27);
        goto LABEL_49;
      }
      v41 = 6LL;
      v42 = (_DWORD *)(v12 + 32);
      do
      {
        *v42 = -1;
        v42 += 4;
        --v41;
      }
      while ( v41 );
      if ( (int)RIMCmAllocPointerDeviceContacts(v12, 2020635474LL) < 0 )
        goto LABEL_50;
      if ( (*(_DWORD *)(v12 + 312) & 2) != 0 )
      {
        if ( *(_WORD *)(*(_QWORD *)(v12 + 712) + 8LL) )
        {
          v96[0] = 2;
          v26 = rimHidP_GetSpecificValueCaps(
                  0,
                  0,
                  *(unsigned __int16 *)(*(_QWORD *)(v12 + 712) + 8LL),
                  0,
                  (__int64)v117,
                  (__int64)v96,
                  (__int64)v7);
          if ( v26 < 0 )
            goto LABEL_73;
        }
      }
      v43 = v94 + (unsigned int)v96[0];
      LODWORD(v107) = v94 + v96[0];
      v44 = Win32AllocPool(72 * v43, 0x78707352u);
      v105 = (__m128i *)v44;
      if ( !v44 )
        goto LABEL_50;
      v26 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 728), 0, v44, (__int64)&v94, (__int64)v7);
      if ( v26 < 0 )
        goto LABEL_50;
      if ( (*(_DWORD *)(v12 + 312) & 2) == 0
        && !(unsigned int)RIMGetPropertyCount(v12, *(unsigned __int16 *)(v12 + 728), v94, v7)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v45) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v45, 1, 16, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
      }
      v47 = 0;
      if ( v96[0] )
      {
        v46 = v94;
        v45 = v117;
        for ( i = 0; i < 2; ++i )
        {
          if ( (unsigned int)v46 >= (unsigned int)v43 )
            break;
          v49 = (__int64)v105;
          v50 = 9 * v46;
          *(__m128i *)((char *)v105 + 8 * v50) = *(__m128i *)v45;
          *(_OWORD *)(v49 + 8 * v50 + 16) = *((_OWORD *)v45 + 1);
          *(_OWORD *)(v49 + 8 * v50 + 32) = *((_OWORD *)v45 + 2);
          *(_OWORD *)(v49 + 8 * v50 + 48) = *((_OWORD *)v45 + 3);
          v51 = *((_QWORD *)v45 + 8);
          v45 += 72;
          *(_QWORD *)(v49 + 8 * v50 + 64) = v51;
          v46 = (unsigned int)(v46 + 1);
        }
        v47 = 0;
      }
      LODWORD(v102) = 0;
      LODWORD(v103) = 0;
      if ( (_DWORD)v43 )
      {
        v52 = 1LL;
        v53 = v105 + 1;
        while ( v47 < 6 )
        {
          if ( *(_DWORD *)(v12 + 24) == 4 && !v53->m128i_i8[0] )
          {
            v26 = -1073741668;
            break;
          }
          v54 = *a4;
          if ( *a4 == 2 )
            v54 = v52;
          v55 = v53[2].m128i_i16[4] | ((v53[-1].m128i_i16[0] | (unsigned __int16)(16 * v54)) << 8);
          if ( (unsigned int)RIMIsEssentialUsage(v55, v45, v46, v52) )
          {
            v56 = (unsigned int)v103;
            v57 = 60LL * (unsigned int)v103;
            v58 = 16LL * (unsigned int)v103;
            *(_WORD *)(v57 + v12 + 352) = v53[-1].m128i_i16[0];
            *(_WORD *)(v57 + v12 + 364) = v53[2].m128i_i16[4];
            *(_DWORD *)(v57 + v12 + 356) = v53[-1].m128i_u8[2];
            *(_WORD *)(v57 + v12 + 362) = v53[-1].m128i_i16[5];
            *(_DWORD *)(v57 + v12 + 368) = v53->m128i_u8[0];
            *(_DWORD *)(v57 + v12 + 384) = v53[1].m128i_i32[2];
            *(_DWORD *)(v57 + v12 + 388) = v53[1].m128i_i32[3];
            *(_DWORD *)(v57 + v12 + 392) = v53[2].m128i_i32[0];
            *(_DWORD *)(v57 + v12 + 396) = v53[2].m128i_i32[1];
            *(_WORD *)(v57 + v12 + 408) = v53->m128i_i16[1];
            *(_DWORD *)(v12 + 16 * (v56 + 2)) = v56;
            *(_WORD *)(v58 + v12 + 28) = v53[-1].m128i_i16[0];
            *(_WORD *)(v58 + v12 + 30) = v53[2].m128i_i16[4];
            v59 = *v53;
            v110[0] = v53[-1];
            v60 = v53[1];
            v110[1] = v59;
            v61 = v53[2];
            v110[2] = v60;
            v111 = v53[3].m128i_i64[0];
            v110[3] = v61;
            RIMRetrieveNormalizationRange(v55, v110, v12 + v58 + 36);
            v62 = v53[2].m128i_i16[4];
            LODWORD(v103) = (_DWORD)v103 + 1;
            if ( v62 == 48 && v53[-1].m128i_i16[0] == 1 )
            {
              v63 = v53[2];
              v64 = v53[3].m128i_i64[0];
              v65 = v53[-1];
              v104 = (int)v102;
              v66 = *v53;
              v67 = v53[1];
              v113 = v64;
              v112[0] = v65;
              v112[1] = v66;
              v112[2] = v67;
              v112[3] = v63;
              *(_DWORD *)(v12 + 148) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v63, 4))
                                                      - _mm_cvtsi128_si32(v63)),
                                         v112)
                                     + 1;
              *(_DWORD *)(v12 + 124) = v53[1].m128i_i32[2];
              *(_DWORD *)(v12 + 132) = v53[1].m128i_i32[3] + 1;
              v62 = v53[2].m128i_i16[4];
            }
            if ( v62 == 49 && v53[-1].m128i_i16[0] == 1 )
            {
              v68 = v53[2];
              v69 = v53[3].m128i_i64[0];
              v70 = v53[-1];
              v101 = (int)v102;
              v71 = *v53;
              v72 = v53[1];
              v115 = v69;
              v114[0] = v70;
              v114[1] = v71;
              v114[2] = v72;
              v114[3] = v68;
              *(_DWORD *)(v12 + 152) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v68, 4))
                                                      - _mm_cvtsi128_si32(v68)),
                                         v114)
                                     + 1;
              *(_DWORD *)(v12 + 128) = v53[1].m128i_i32[2];
              *(_DWORD *)(v12 + 136) = v53[1].m128i_i32[3] + 1;
            }
            RIMCheckPressureUsageStatus(v95, v12, v55);
          }
          else
          {
            v52 = 1LL;
          }
          v53 = (__m128i *)((char *)v53 + 72);
          v73 = (int)v52 + (int)v102 < (unsigned int)v107;
          LODWORD(v102) = v52 + (_DWORD)v102;
          v47 = (unsigned int)v103;
          if ( !v73 )
            break;
        }
        v7 = v98;
      }
      *(_DWORD *)(v12 + 724) = v47;
      if ( v26 < 0 )
        goto LABEL_50;
      if ( v104 == -1 || v101 == -1 )
      {
        if ( (unsigned int)dword_1C024A170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024A170, 0x400000000000LL) )
          goto LABEL_73;
        v90 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v100 = L"coordinate usage missing";
        v99[0] = *(const WCHAR **)(a2 + 216);
        v37 = RimDeviceTypeToRimInputTypeString(a2, v90);
        goto LABEL_72;
      }
      if ( v105[2].m128i_i32[18 * v104 + 3] != v105[2].m128i_i32[18 * v104 + 2]
        && v105[2].m128i_i32[18 * v101 + 3] != v105[2].m128i_i32[18 * v101 + 2] )
      {
        v74 = RIMGetQDCActivePathsData((unsigned int *)&v109);
        v75 = *(_DWORD *)(v12 + 24);
        v76 = v74;
        v108 = v74;
        if ( v75 != 7 )
        {
          if ( v75 != 6 )
          {
            v101 = 0;
            *(_DWORD *)(a2 + 1344) = 1;
            RIMReadDigitizerToMonitorMappings(a2, a2 + 1344);
            rimFindMonitorForDigitizerWithQDCData(a2, v76, &v101);
            if ( *a4 == 4 )
            {
              v77 = *(_QWORD *)v100;
              DWORD2(v100) = *(_DWORD *)(v100 + 8);
              *(_QWORD *)&v100 = v77;
              if ( (int)ApiSetValidateDeviceSignature(
                          (_DWORD)v106,
                          v99[0],
                          (_DWORD)v7,
                          (_DWORD)a4,
                          v12,
                          (__int64)&v100,
                          v101) < 0 )
              {
                v26 = -1073741668;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v78) = 3;
                  WPP_RECORDER_SF_(
                    (_DWORD)gRimLog,
                    v78,
                    1,
                    17,
                    (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
                }
                if ( (unsigned int)dword_1C024A170 > 5 && tlgKeywordOn((__int64)&dword_1C024A170, 0x400000000000LL) )
                {
                  v79 = *(unsigned __int8 *)(a2 + 48);
                  *(_QWORD *)&v100 = L"Failed to validate device signature";
                  v99[0] = *(const WCHAR **)(a2 + 216);
                  v98 = RimDeviceTypeToRimInputTypeString(a2, v79);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                    v80,
                    byte_1C021B8A6,
                    v81,
                    v82,
                    &v98,
                    v99,
                    (const WCHAR **)&v100);
                }
                v34 = v95;
                goto LABEL_51;
              }
              v83 = *(_DWORD *)(v12 + 312);
              if ( (v83 & 0x100) == 0 )
                *(_DWORD *)(v12 + 312) = v83 & 0xFFFFFF7F;
            }
          }
          goto LABEL_128;
        }
        v86 = *(_QWORD *)v100;
        DWORD2(v100) = *(_DWORD *)(v100 + 8);
        *(_QWORD *)&v100 = v86;
        if ( (int)ApiSetValidateDeviceSignature((_DWORD)v106, v99[0], (_DWORD)v7, (_DWORD)a4, v12, (__int64)&v100, 0) >= 0 )
        {
LABEL_128:
          if ( *(_DWORD *)(v12 + 148) - *(_DWORD *)(v12 + 140) <= 1
            || *(_DWORD *)(v12 + 152) - *(_DWORD *)(v12 + 144) <= 1 )
          {
            v84 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1352));
            *(_OWORD *)(v12 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(&v100, v84);
          }
          RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v12);
          RIMPopulateExtendedPointerDeviceProperties(a2, v12);
          if ( *(_DWORD *)(v12 + 24) != 7
            || (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v12) >= 0 )
          {
            v34 = v95;
            v26 = RIMGetDeviceButtons(v95, v12, (_DWORD)v7, (_DWORD)a4, v93);
            if ( v26 >= 0 )
            {
              if ( *(_DWORD *)(v12 + 24) != 7 )
              {
                v100 = *(_OWORD *)(a2 + 208);
                ApiSetRetrieveCalibrationData(v12, &v100);
              }
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v85) = 3;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v85, 1, 18, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
            }
            if ( a4[1] == 13
              && *a4 == 2
              && (unsigned int)RIMIsInputUsagePresent(v7, 2LL, 91LL)
              && (unsigned int)RIMIsInputUsagePresent(v7, v88, 145LL) )
            {
              *(_DWORD *)(v12 + 312) |= 0x10000u;
            }
            goto LABEL_51;
          }
          goto LABEL_73;
        }
        v26 = -1073741668;
        if ( (unsigned int)dword_1C024A170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024A170, 0x400000000000LL) )
          goto LABEL_50;
        v87 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v100 = L"Failed to validate device signature";
        v99[0] = *(const WCHAR **)(a2 + 216);
        v28 = RimDeviceTypeToRimInputTypeString(a2, v87);
LABEL_49:
        v98 = v28;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v29,
          byte_1C021B8A6,
          v30,
          v31,
          &v98,
          v99,
          (const WCHAR **)&v100);
        goto LABEL_50;
      }
      if ( (unsigned int)dword_1C024A170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024A170, 0x400000000000LL) )
      {
LABEL_73:
        v26 = -1073741668;
        goto LABEL_50;
      }
      v89 = *(unsigned __int8 *)(a2 + 48);
      *(_QWORD *)&v100 = L"coordinate range invalid";
      v99[0] = *(const WCHAR **)(a2 + 216);
      v37 = RimDeviceTypeToRimInputTypeString(a2, v89);
LABEL_72:
      v98 = v37;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v38,
        byte_1C021B8A6,
        v39,
        v40,
        &v98,
        v99,
        (const WCHAR **)&v100);
      goto LABEL_73;
    }
LABEL_65:
    if ( v23 != 1 )
      goto LABEL_20;
LABEL_66:
    v26 = -1073741808;
  }
LABEL_50:
  v34 = v95;
LABEL_51:
  RIMFreeQDCActivePathsData((__int64)v108);
  if ( v105 )
    Win32FreePool((__int64)v105);
  if ( v26 < 0 )
    goto LABEL_162;
  if ( *(_DWORD *)(v12 + 24) == 7 )
    v26 = RIMValidatePTPProperties(v97, v12);
  if ( v26 < 0 )
  {
LABEL_162:
    if ( *(_QWORD *)(v12 + 736) )
    {
      v97 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 917);
    }
    RIMFreePointerDevice(v34, v12);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(v34 + 532) += *(_DWORD *)(v12 + 720);
      *(_DWORD *)(v12 + 312) |= 0x400u;
      if ( *(_DWORD *)(v34 + 532) > 0xA00u )
      {
        v97 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 898);
      }
    }
    *(_DWORD *)(v12 + 744) = 100;
    *(_QWORD *)(v12 + 752) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 480) = v12;
    *(_QWORD *)(v12 + 16) = a2;
    v35 = *(_QWORD **)(v34 + 440);
    if ( *v35 != v34 + 432 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 872) = v35;
    *(_QWORD *)(v12 + 864) = v34 + 432;
    *v35 = v12 + 864;
    v91 = v106;
    *(_QWORD *)(v34 + 440) = v12 + 864;
    *(_QWORD *)(v12 + 736) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(v91, a2, v12 + 864)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v92) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v92, 1, 19, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
  }
  return (unsigned int)v26;
}
