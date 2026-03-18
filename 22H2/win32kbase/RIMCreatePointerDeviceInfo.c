/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C0187070
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C017F574 (RIMAllocateHidDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     RIMIsRunningOnDesktop @ 0x1C004FEC0 (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMGetDeviceParent @ 0x1C006CE24 (RIMGetDeviceParent.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0078D74 (RimDeviceTypeToRimInputTypeString.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     RIMIsInputUsagePresent @ 0x1C018240C (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01852B0 (rimHidP_GetSpecificValueCaps.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C018554C (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C0185D88 (rimSetupPalmTelemetry.c)
 *     RIMAssignTouchType @ 0x1C0186894 (RIMAssignTouchType.c)
 *     RIMCheckPressureUsageStatus @ 0x1C0187040 (RIMCheckPressureUsageStatus.c)
 *     RIMFreePointerDevice @ 0x1C0188858 (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C0188A98 (RIMGetDeviceButtons.c)
 *     RIMGetDeviceLocationInfo @ 0x1C0188F30 (RIMGetDeviceLocationInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01890E0 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0189C90 (RIMGetProductString.c)
 *     RIMGetPropertyCount @ 0x1C018A2D0 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C018A6C4 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C018AAE8 (RIMIsDeviceExcluded.c)
 *     RIMIsEssentialUsage @ 0x1C018AE2C (RIMIsEssentialUsage.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C01997AC (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01B00D0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C01B0D6C (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C01B0E5C (RIMRetrieveNormalizationRange.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1C01B37DC (RIMApiSetValidateDeviceSignature.c)
 *     RIMValidatePTPProperties @ 0x1C01B4284 (RIMValidatePTPProperties.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C0208158 (ApiSetRetrieveCalibrationData.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const WCHAR *a4,
        struct _DEVICE_OBJECT *a5,
        const WCHAR *a6,
        __int64 a7)
{
  const WCHAR *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbx
  int v14; // eax
  PDEVICE_OBJECT *v15; // rdx
  _UNKNOWN **v16; // r8
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // r8
  PDEVICE_OBJECT v28; // rcx
  __int64 v29; // r9
  int v30; // esi
  int v31; // r8d
  int v32; // ecx
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int SpecificValueCaps; // eax
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // r14
  __int64 v49; // rax
  char *v50; // r13
  int v51; // edx
  int v52; // r8d
  __int64 v53; // r8
  _BYTE *v54; // rdx
  unsigned int v55; // r9d
  __int64 v56; // rcx
  __int64 v57; // xmm0_8
  unsigned int v58; // eax
  __m128i *v59; // r14
  int v60; // r9d
  __int16 v61; // r15
  unsigned __int16 v62; // r15
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rdx
  __m128i v66; // xmm1
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __m128i v69; // xmm5
  __int64 v70; // xmm0_8
  __m128i v71; // xmm2
  __m128i v72; // xmm3
  __m128i v73; // xmm4
  __m128i v74; // xmm5
  __int64 v75; // xmm0_8
  __m128i v76; // xmm2
  __m128i v77; // xmm3
  __m128i v78; // xmm4
  bool v79; // cf
  int v80; // eax
  __int64 v81; // xmm0_8
  int v82; // edx
  int v83; // r8d
  int v84; // eax
  __int64 v85; // r12
  int v86; // ecx
  int v87; // r8d
  int v88; // edx
  int v89; // r8d
  __int64 v90; // xmm0_8
  int v91; // edx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  int v96; // edx
  const wchar_t *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // edx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rcx
  struct _DEVICE_OBJECT *v106; // rcx
  int v107; // edx
  int v108; // r8d
  int v109; // [rsp+20h] [rbp-E0h]
  _WORD v110[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v111; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v112; // [rsp+48h] [rbp-B8h]
  const WCHAR *v113; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v114; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v115; // [rsp+60h] [rbp-A0h] BYREF
  const WCHAR *v116; // [rsp+70h] [rbp-90h] BYREF
  const WCHAR *v117; // [rsp+78h] [rbp-88h] BYREF
  __int64 v118; // [rsp+80h] [rbp-80h]
  int v119; // [rsp+88h] [rbp-78h]
  int v120; // [rsp+8Ch] [rbp-74h]
  __int64 v121; // [rsp+90h] [rbp-70h]
  struct _DEVICE_OBJECT *v122; // [rsp+98h] [rbp-68h]
  __int128 v123; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v124[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v125; // [rsp+F0h] [rbp-10h]
  _OWORD v126[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v127; // [rsp+140h] [rbp+40h]
  _OWORD v128[4]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v129; // [rsp+190h] [rbp+90h]
  _DWORD v130[20]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v131[144]; // [rsp+1F0h] [rbp+F0h] BYREF

  v119 = -1;
  v120 = -1;
  v121 = a3;
  v10 = a4;
  v118 = a1;
  v122 = a5;
  v113 = a6;
  *(_QWORD *)&v115 = a7;
  v110[0] = 0;
  v114 = a4;
  memset(v131, 0, sizeof(v131));
  v111 = 0;
  v112 = 0;
  memset(v130, 0, 0x48uLL);
  v11 = Win32AllocPoolZInit(0x508uLL, 0x63707352u);
  v12 = v11;
  if ( !v11 )
    return 3221225628LL;
  *(_DWORD *)(v11 + 768) = 1;
  *(_QWORD *)(v11 + 920) = v11 + 912;
  *(_QWORD *)(v11 + 912) = v11 + 912;
  v14 = RIMGetProductString(v11, a5, a6);
  v15 = &WPP_GLOBAL_Control;
  v16 = &WPP_RECORDER_INITIALIZED;
  if ( v14 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v15,
        (_DWORD)v16,
        (_DWORD)gRimLog,
        3,
        1,
        14,
        (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
    }
    if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
    {
      v17 = *(unsigned __int8 *)(a2 + 48);
      *(_QWORD *)&v123 = L"Failed to retrieve productString";
      v116 = *(const WCHAR **)(a2 + 216);
      v117 = RimDeviceTypeToRimInputTypeString(a2, v17);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v18,
        byte_1C025860F,
        v19,
        v20,
        &v117,
        &v116,
        (const WCHAR **)&v123);
    }
  }
  if ( (int)RIMGetDeviceLocationInfo(a5, a2 + 2120) < 0 )
  {
    LODWORD(v116) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 330);
  }
  v21 = *v10;
  v123 = *(_OWORD *)(v12 + 368);
  if ( !(unsigned int)RIMIsDeviceExcluded(v21, &v123) )
  {
    v24 = *(unsigned int *)(a1 + 84);
    v25 = 1;
    if ( (v24 & 4) != 0 )
    {
      if ( *v10 == 2 )
      {
        *(_DWORD *)(v12 + 24) = 5;
        rimSetupPalmTelemetry(a1);
        if ( (int)RIMInitializeDeadzone() < 0 )
        {
          v28 = WPP_GLOBAL_Control;
          v29 = 1LL;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v26) = 0;
          }
          LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v26,
              v27,
              (_DWORD)gRimLog,
              3,
              1,
              15,
              (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
          *(_DWORD *)(SGDGetUserSessionState(v28, v26, v27, v29) + 436) = 1;
        }
        goto LABEL_53;
      }
      if ( *v10 == 1 )
      {
        *(_DWORD *)(v12 + 24) = 6;
        v25 = 0;
        if ( !RIMIsRunningOnDesktop(v24, 2LL, v22, v23) )
          goto LABEL_50;
        goto LABEL_49;
      }
    }
    if ( (v24 & 0x18) == 0 || (unsigned __int16)(*v10 - 4) > 1u )
    {
      if ( (v24 & 0x20) != 0 && (*(_DWORD *)(a2 + 184) & 0x10000) != 0 )
        goto LABEL_53;
LABEL_50:
      v30 = -1073741808;
LABEL_173:
      if ( *(_QWORD *)(v12 + 784) )
      {
        v112 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 874);
      }
      RIMFreePointerDevice(v118);
      return (unsigned int)v30;
    }
    *(_DWORD *)(v12 + 24) = 1;
    v30 = RIMAssignTouchType(v12, a3);
    if ( v30 == -1073741668 )
      goto LABEL_157;
    if ( *v10 == 5 )
    {
      v112 = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = 7;
    }
    v32 = *(_DWORD *)(v118 + 84);
    if ( (v32 & 4) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
      v25 = 0;
    if ( (v32 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
      v25 = 0;
    if ( ((v32 & 0x10) == 0 || (unsigned int)(*(_DWORD *)(v12 + 24) - 1) > 3) && v25 )
    {
LABEL_49:
      if ( v25 != 1 )
        goto LABEL_53;
      goto LABEL_50;
    }
    v30 = RIMGetMaxCountFeatureDetails(a2, v118, v12, a3, (__int64)v10, (__int64)v122, (__int64)v113);
    if ( v30 == -1073741668 )
    {
      if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
      {
        v33 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v115 = L"Failed to get max count feature details";
        v114 = *(const WCHAR **)(a2 + 216);
        v113 = RimDeviceTypeToRimInputTypeString(a2, v33);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v34,
          byte_1C025860F,
          v35,
          v36,
          &v113,
          &v114,
          (const WCHAR **)&v115);
      }
      goto LABEL_173;
    }
  }
LABEL_53:
  v110[0] = 1;
  if ( (int)rimHidP_GetSpecificValueCaps(0LL, 13LL, 0LL, 86LL, (__int64)v130, (__int64)v110, a3) >= 0 )
  {
    if ( v130[10] >= v130[11] || v130[10] < 0 || v130[11] < 0xFFFF )
    {
      if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
      {
        v42 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v115 = L"Bad ScanTime minimum";
        v114 = *(const WCHAR **)(a2 + 216);
        v113 = RimDeviceTypeToRimInputTypeString(a2, v42);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v43,
          byte_1C025860F,
          v44,
          v45,
          &v113,
          &v114,
          (const WCHAR **)&v115);
      }
LABEL_67:
      v30 = -1073741668;
      goto LABEL_173;
    }
    *(_DWORD *)(v12 + 360) |= 0x80u;
    *(_DWORD *)(v12 + 888) = v130[11];
  }
  v110[0] = 0;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                        0LL,
                        0LL,
                        *(unsigned __int16 *)(v12 + 776),
                        0LL,
                        0LL,
                        (__int64)v110,
                        a3);
  v30 = SpecificValueCaps;
  if ( !SpecificValueCaps || SpecificValueCaps == -1072627705 )
  {
    v46 = 6LL;
    v47 = (_DWORD *)(v12 + 32);
    do
    {
      *v47 = -1;
      v47 += 4;
      --v46;
    }
    while ( v46 );
    if ( (int)RIMCmAllocPointerDeviceContacts(v12, 2020635474LL) < 0 )
      goto LABEL_157;
    if ( (*(_DWORD *)(v12 + 360) & 2) == 0
      || !*(_WORD *)(*(_QWORD *)(v12 + 760) + 8LL)
      || (v111 = 2,
          v30 = rimHidP_GetSpecificValueCaps(
                  0LL,
                  0LL,
                  *(unsigned __int16 *)(*(_QWORD *)(v12 + 760) + 8LL),
                  0LL,
                  (__int64)v131,
                  (__int64)&v111,
                  a3),
          v30 >= 0) )
    {
      v48 = v110[0] + (unsigned int)v111;
      LODWORD(v123) = v110[0] + v111;
      v49 = Win32AllocPoolZInit(72 * v48, 0x78707352u);
      v50 = (char *)v49;
      if ( !v49 )
        goto LABEL_157;
      v30 = rimHidP_GetSpecificValueCaps(0LL, 0LL, *(unsigned __int16 *)(v12 + 776), 0LL, v49, (__int64)v110, v121);
      if ( v30 < 0 )
        goto LABEL_156;
      if ( (*(_DWORD *)(v12 + 360) & 2) == 0
        && !(unsigned int)RIMGetPropertyCount(v12, *(unsigned __int16 *)(v12 + 776), v110[0], v121) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v51) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v51) = 0;
        }
        if ( (_BYTE)v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v51,
            v52,
            (_DWORD)gRimLog,
            3,
            1,
            16,
            (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
        }
      }
      if ( v111 )
      {
        v53 = v110[0];
        v54 = v131;
        v55 = 0;
        do
        {
          if ( (unsigned int)v53 >= (unsigned int)v48 )
            break;
          v56 = 9 * v53;
          ++v55;
          v53 = (unsigned int)(v53 + 1);
          *(_OWORD *)&v50[8 * v56] = *(_OWORD *)v54;
          *(_OWORD *)&v50[8 * v56 + 16] = *((_OWORD *)v54 + 1);
          *(_OWORD *)&v50[8 * v56 + 32] = *((_OWORD *)v54 + 2);
          *(_OWORD *)&v50[8 * v56 + 48] = *((_OWORD *)v54 + 3);
          v57 = *((_QWORD *)v54 + 8);
          v54 += 72;
          *(_QWORD *)&v50[8 * v56 + 64] = v57;
        }
        while ( v55 < 2 );
      }
      LODWORD(v116) = 0;
      v58 = 0;
      LODWORD(v117) = 0;
      if ( (_DWORD)v48 )
      {
        v59 = (__m128i *)(v50 + 16);
        LOWORD(v60) = 1;
        while ( v58 < 6 )
        {
          if ( *(_DWORD *)(v12 + 24) == 4 && !v59->m128i_i8[0] )
          {
            v30 = -1073741668;
            break;
          }
          v61 = *v10;
          if ( v61 == 2 )
            v61 = v60;
          v62 = v59[2].m128i_i16[4] | ((v59[-1].m128i_i16[0] | (unsigned __int16)(16 * v61)) << 8);
          if ( (unsigned int)RIMIsEssentialUsage(v62) )
          {
            v63 = (unsigned int)v117;
            v64 = 60LL * (unsigned int)v117;
            v65 = 16LL * (unsigned int)v117;
            *(_WORD *)(v64 + v12 + 400) = v59[-1].m128i_i16[0];
            *(_WORD *)(v64 + v12 + 412) = v59[2].m128i_i16[4];
            *(_DWORD *)(v64 + v12 + 404) = v59[-1].m128i_u8[2];
            *(_WORD *)(v64 + v12 + 410) = v59[-1].m128i_i16[5];
            *(_DWORD *)(v64 + v12 + 416) = v59->m128i_u8[0];
            *(_DWORD *)(v64 + v12 + 432) = v59[1].m128i_i32[2];
            *(_DWORD *)(v64 + v12 + 436) = v59[1].m128i_i32[3];
            *(_DWORD *)(v64 + v12 + 440) = v59[2].m128i_i32[0];
            *(_DWORD *)(v64 + v12 + 444) = v59[2].m128i_i32[1];
            *(_WORD *)(v64 + v12 + 456) = v59->m128i_i16[1];
            *(_DWORD *)(v12 + 16 * (v63 + 2)) = v63;
            *(_WORD *)(v65 + v12 + 28) = v59[-1].m128i_i16[0];
            *(_WORD *)(v65 + v12 + 30) = v59[2].m128i_i16[4];
            v66 = *v59;
            v124[0] = v59[-1];
            v67 = v59[1];
            v124[1] = v66;
            v68 = v59[2];
            v124[2] = v67;
            v125 = v59[3].m128i_i64[0];
            v124[3] = v68;
            RIMRetrieveNormalizationRange(v62, v124, v12 + v65 + 36);
            LODWORD(v117) = (_DWORD)v117 + 1;
            if ( v59[2].m128i_i16[4] == 48 && v59[-1].m128i_i16[0] == 1 )
            {
              v69 = v59[2];
              v70 = v59[3].m128i_i64[0];
              v71 = v59[-1];
              v119 = (int)v116;
              v72 = *v59;
              v73 = v59[1];
              v127 = v70;
              v126[0] = v71;
              v126[1] = v72;
              v126[2] = v73;
              v126[3] = v69;
              *(_DWORD *)(v12 + 148) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v69, 4))
                                                      - _mm_cvtsi128_si32(v69)),
                                         v126)
                                     + 1;
              *(_DWORD *)(v12 + 124) = v59[1].m128i_i32[2];
              *(_DWORD *)(v12 + 132) = v59[1].m128i_i32[3] + 1;
            }
            if ( v59[2].m128i_i16[4] == 49 && v59[-1].m128i_i16[0] == 1 )
            {
              v74 = v59[2];
              v75 = v59[3].m128i_i64[0];
              v76 = v59[-1];
              v120 = (int)v116;
              v77 = *v59;
              v78 = v59[1];
              v129 = v75;
              v128[0] = v76;
              v128[1] = v77;
              v128[2] = v78;
              v128[3] = v74;
              *(_DWORD *)(v12 + 152) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v74, 4))
                                                      - _mm_cvtsi128_si32(v74)),
                                         v128)
                                     + 1;
              *(_DWORD *)(v12 + 128) = v59[1].m128i_i32[2];
              *(_DWORD *)(v12 + 136) = v59[1].m128i_i32[3] + 1;
            }
            RIMCheckPressureUsageStatus(v118, v12, v62);
          }
          else
          {
            v60 = 1;
          }
          v59 = (__m128i *)((char *)v59 + 72);
          v10 = v114;
          v79 = v60 + (int)v116 < (unsigned int)v123;
          LODWORD(v116) = v60 + (_DWORD)v116;
          v58 = (unsigned int)v117;
          if ( !v79 )
            break;
        }
      }
      *(_DWORD *)(v12 + 772) = v58;
      if ( v30 < 0 )
      {
LABEL_156:
        Win32FreePool(v50);
        goto LABEL_157;
      }
      if ( v119 == -1 || v120 == -1 )
      {
        if ( (unsigned int)dword_1C02882F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
          goto LABEL_152;
        v101 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v115 = L"coordinate usage missing";
        v114 = *(const WCHAR **)(a2 + 216);
        v97 = RimDeviceTypeToRimInputTypeString(a2, v101);
      }
      else
      {
        if ( *(_DWORD *)&v50[72 * v119 + 44] != *(_DWORD *)&v50[72 * v119 + 40]
          && *(_DWORD *)&v50[72 * v120 + 44] != *(_DWORD *)&v50[72 * v120 + 40] )
        {
          v80 = *(_DWORD *)(v12 + 24);
          if ( v80 == 7 )
          {
            v90 = *(_QWORD *)v115;
            DWORD2(v115) = *(_DWORD *)(v115 + 8);
            v109 = v12;
            *(_QWORD *)&v115 = v90;
            if ( (int)RIMApiSetValidateDeviceSignature(v122, v113, v121, v10) < 0 )
            {
              v30 = -1073741668;
              if ( (unsigned int)dword_1C02882F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
                goto LABEL_156;
              goto LABEL_140;
            }
          }
          else if ( v80 != 6 && *v10 == 4 )
          {
            v81 = *(_QWORD *)v115;
            DWORD2(v115) = *(_DWORD *)(v115 + 8);
            v109 = v12;
            *(_QWORD *)&v115 = v81;
            if ( (int)RIMApiSetValidateDeviceSignature(v122, v113, v121, v10) < 0 )
            {
              v30 = -1073741668;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v82) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v82) = 0;
              }
              if ( (_BYTE)v82 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v83) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v82,
                  v83,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  17,
                  (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
              }
              if ( (unsigned int)dword_1C02882F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
                goto LABEL_156;
LABEL_140:
              v91 = *(unsigned __int8 *)(a2 + 48);
              *(_QWORD *)&v115 = L"Failed to validate device signature";
              v114 = *(const WCHAR **)(a2 + 216);
              v113 = RimDeviceTypeToRimInputTypeString(a2, v91);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                v92,
                byte_1C025860F,
                v93,
                v94,
                &v113,
                &v114,
                (const WCHAR **)&v115);
              goto LABEL_156;
            }
            v84 = *(_DWORD *)(v12 + 360);
            if ( (v84 & 0x100) == 0 )
              *(_DWORD *)(v12 + 360) = v84 & 0xFFFFFF7F;
          }
          RIMPopulateExtendedPointerDeviceProperties(a2, v12);
          v85 = v121;
          v86 = v118;
          v87 = v121;
          *(_DWORD *)(a2 + 80) |= 1u;
          v30 = RIMGetDeviceButtons(v86, v12, v87, (_DWORD)v10, v109);
          if ( v30 >= 0 )
          {
            if ( *(_DWORD *)(v12 + 24) != 7 )
            {
              v115 = *(_OWORD *)(a2 + 208);
              ApiSetRetrieveCalibrationData(v12, &v115);
            }
          }
          else
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v88) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v88) = 0;
            }
            if ( (_BYTE)v88 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v89) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v88,
                v89,
                (_DWORD)gRimLog,
                3,
                1,
                18,
                (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
            }
          }
          if ( v10[1] == 13
            && *v10 == 2
            && RIMIsInputUsagePresent(v85, 2LL, 0x5Bu)
            && RIMIsInputUsagePresent(v85, v95, 0x91u) )
          {
            *(_DWORD *)(v12 + 360) |= 0x10000u;
          }
          goto LABEL_156;
        }
        if ( (unsigned int)dword_1C02882F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
        {
LABEL_152:
          v30 = -1073741668;
          goto LABEL_156;
        }
        v96 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v115 = L"coordinate range invalid";
        v114 = *(const WCHAR **)(a2 + 216);
        v97 = RimDeviceTypeToRimInputTypeString(a2, v96);
      }
      v113 = v97;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v98,
        byte_1C025860F,
        v99,
        v100,
        &v113,
        &v114,
        (const WCHAR **)&v115);
      goto LABEL_152;
    }
    goto LABEL_67;
  }
  if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
  {
    v38 = *(unsigned __int8 *)(a2 + 48);
    *(_QWORD *)&v115 = L"Coordinate usage missing";
    v114 = *(const WCHAR **)(a2 + 216);
    v113 = RimDeviceTypeToRimInputTypeString(a2, v38);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v39,
      byte_1C025860F,
      v40,
      v41,
      &v113,
      &v114,
      (const WCHAR **)&v115);
  }
LABEL_157:
  if ( v30 < 0 )
    goto LABEL_173;
  if ( *(_DWORD *)(v12 + 24) == 7 )
  {
    v30 = RIMValidatePTPProperties(v112, v12);
    if ( v30 < 0 )
      goto LABEL_173;
  }
  *(_DWORD *)(a2 + 200) |= 0x80u;
  if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
  {
    v102 = v118;
    *(_DWORD *)(v118 + 720) += *(_DWORD *)(v12 + 768);
    *(_DWORD *)(v12 + 360) |= 0x400u;
    if ( *(_DWORD *)(v102 + 720) > 0xA00u )
    {
      v112 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 855);
    }
  }
  *(_DWORD *)(v12 + 792) = 100;
  v103 = v118;
  *(_QWORD *)(v12 + 800) = 100 * gliQpcFreq.QuadPart / 1000;
  v104 = v103 + 432;
  *(_QWORD *)(a2 + 472) = v12;
  *(_QWORD *)(v12 + 16) = a2;
  v105 = *(_QWORD **)(v104 + 8);
  if ( *v105 != v104 )
    __fastfail(3u);
  *(_QWORD *)(v12 + 920) = v105;
  *(_QWORD *)(v12 + 912) = v104;
  *v105 = v12 + 912;
  v106 = v122;
  *(_QWORD *)(v104 + 8) = v12 + 912;
  *(_QWORD *)(v12 + 784) = -1LL;
  if ( !(unsigned int)RIMGetDeviceParent(v106, a2, v31) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v107) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v107) = 0;
    }
    if ( (_BYTE)v107 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v108) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v107,
        v108,
        (_DWORD)gRimLog,
        3,
        1,
        19,
        (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
    }
  }
  return (unsigned int)v30;
}
