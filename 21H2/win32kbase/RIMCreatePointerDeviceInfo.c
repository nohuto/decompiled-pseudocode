/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C0190190
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004DC2C (RimDeviceTypeToRimInputTypeString.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C008F240 (HMValidateSharedHandleNoRip.c)
 *     RIMGetQDCActivePathsData @ 0x1C009FA90 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C009FE04 (RIMFreeQDCActivePathsData.c)
 *     RIMGetDeviceParent @ 0x1C00A13E0 (RIMGetDeviceParent.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMIsInputUsagePresent @ 0x1C018C168 (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C018EA24 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C018F170 (rimSetupPalmTelemetry.c)
 *     RIMAssignTouchType @ 0x1C018FAFC (RIMAssignTouchType.c)
 *     RIMCheckPressureUsageStatus @ 0x1C0190160 (RIMCheckPressureUsageStatus.c)
 *     RIMFreePointerDevice @ 0x1C0191E14 (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C0192130 (RIMGetDeviceButtons.c)
 *     RIMGetDeviceLocationInfo @ 0x1C01928F4 (RIMGetDeviceLocationInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0192AA4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0193764 (RIMGetProductString.c)
 *     RIMGetPropertyCount @ 0x1C0193C60 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C01940B0 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C019441C (RIMIsDeviceExcluded.c)
 *     RIMIsEssentialUsage @ 0x1C0194698 (RIMIsEssentialUsage.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0198300 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0198450 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0198794 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01990C8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C01A0784 (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01B6298 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C01B6C84 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C01B6D80 (RIMRetrieveNormalizationRange.c)
 *     RIMValidatePTPProperties @ 0x1C01B7D4C (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DD4F8 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C020F228 (ApiSetRetrieveCalibrationData.c)
 *     ApiSetValidateDeviceSignature @ 0x1C020FF00 (ApiSetValidateDeviceSignature.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        _WORD *a4,
        __int64 a5,
        const WCHAR *a6,
        const WCHAR *a7)
{
  PVOID v9; // rsi
  __int64 v10; // rax
  __int64 Pool2; // rbx
  int v13; // eax
  PDEVICE_OBJECT *v14; // rdx
  _UNKNOWN **v15; // r8
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  BOOL v24; // r14d
  int v25; // ecx
  __int64 v26; // rcx
  int v27; // edx
  int v28; // r8d
  bool v29; // zf
  struct _HIDP_PREPARSED_DATA *v30; // rdx
  int v31; // esi
  int v32; // ecx
  int v33; // edx
  const wchar_t *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rcx
  struct _HIDP_PREPARSED_DATA *v43; // rsi
  int SpecificValueCaps; // eax
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  _DWORD *v53; // rax
  __int64 v54; // rcx
  PVOID v55; // r15
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // r14
  unsigned int v59; // r13d
  struct _HIDP_PREPARSED_DATA *v60; // r15
  int v61; // edx
  int v62; // r8d
  unsigned int v63; // r10d
  __int64 v64; // r8
  struct _HIDP_VALUE_CAPS *v65; // rdx
  unsigned int v66; // r9d
  __int64 v67; // rcx
  __int64 v68; // xmm0_8
  unsigned int v69; // eax
  __m128i *v70; // r15
  int v71; // r9d
  __int16 v72; // r12
  unsigned __int16 v73; // r12
  __int64 v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rdx
  __m128i v77; // xmm1
  __m128i v78; // xmm0
  __m128i v79; // xmm1
  __int16 v80; // ax
  __m128i v81; // xmm5
  __m128i v82; // xmm2
  __m128i v83; // xmm3
  __m128i v84; // xmm4
  __m128i v85; // xmm5
  __m128i v86; // xmm2
  __m128i v87; // xmm3
  __m128i v88; // xmm4
  char v89; // r13
  unsigned int *v90; // rax
  int v91; // ecx
  unsigned int *v92; // rsi
  _WORD *v93; // r14
  __int64 v94; // xmm0_8
  int v95; // edx
  int v96; // r8d
  int v97; // edx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // eax
  __int64 v102; // xmm0_8
  int v103; // edx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // rdx
  int v108; // edx
  const wchar_t *v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // edx
  struct _DEVICE_OBJECT *v114; // rcx
  int v115; // edx
  int v116; // r8d
  int v117; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v118; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v119; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v120; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v121; // [rsp+58h] [rbp-A8h] BYREF
  const WCHAR *v122[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v123; // [rsp+70h] [rbp-90h] BYREF
  int v124; // [rsp+80h] [rbp-80h] BYREF
  struct _HIDP_PREPARSED_DATA *v125; // [rsp+88h] [rbp-78h]
  const WCHAR *v126; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v127; // [rsp+98h] [rbp-68h] BYREF
  int v128; // [rsp+A0h] [rbp-60h]
  unsigned int v129; // [rsp+A4h] [rbp-5Ch]
  void *v130; // [rsp+A8h] [rbp-58h]
  _WORD *v131; // [rsp+B0h] [rbp-50h]
  struct _DEVICE_OBJECT *v132; // [rsp+B8h] [rbp-48h]
  unsigned int *v133; // [rsp+C0h] [rbp-40h]
  __int128 v134; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v135[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v136; // [rsp+120h] [rbp+20h]
  _OWORD v137[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v138; // [rsp+170h] [rbp+70h]
  _OWORD v139[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v140; // [rsp+1C0h] [rbp+C0h]
  PVOID BackTrace[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  PVOID v142[20]; // [rsp+270h] [rbp+170h] BYREF
  struct _HIDP_VALUE_CAPS v143; // [rsp+310h] [rbp+210h] BYREF
  struct _HIDP_VALUE_CAPS v144[2]; // [rsp+360h] [rbp+260h] BYREF

  v128 = -1;
  v124 = -1;
  v125 = a3;
  v119 = a1;
  v132 = (struct _DEVICE_OBJECT *)a5;
  v121 = a6;
  v122[0] = a7;
  v130 = 0LL;
  v118 = 0;
  v131 = a4;
  memset(v144, 0, sizeof(v144));
  v120 = 0;
  v129 = 0;
  v133 = 0LL;
  v134 = 0LL;
  memset(&v143, 0, sizeof(v143));
  v9 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63707352) == 0x63707352
    && (v10 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1668313938 )
    {
      if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(260LL, 1304LL);
    if ( !Pool2 )
      return 3221225628LL;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
             (__int64)v9,
             Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_11;
      }
      goto LABEL_38;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v9,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_38:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return 3221225628LL;
    }
    Pool2 += 16LL;
  }
  else
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 1288LL);
  }
  if ( !Pool2 )
    return 3221225628LL;
LABEL_11:
  *(_DWORD *)(Pool2 + 768) = 1;
  *(_QWORD *)(Pool2 + 920) = Pool2 + 912;
  *(_QWORD *)(Pool2 + 912) = Pool2 + 912;
  v13 = RIMGetProductString(Pool2, a5, a6);
  v14 = &WPP_GLOBAL_Control;
  v15 = &WPP_RECORDER_INITIALIZED;
  if ( v13 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v14,
        (_DWORD)v15,
        (_DWORD)gRimLog,
        3,
        1,
        14,
        (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
    }
    if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
    {
      v16 = *(unsigned __int8 *)(a2 + 48);
      v127 = L"Failed to retrieve productString";
      v126 = *(const WCHAR **)(a2 + 216);
      *(_QWORD *)&v123 = RimDeviceTypeToRimInputTypeString(a2, v16);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v17,
        byte_1C025D7CA,
        v18,
        v19,
        (const WCHAR **)&v123,
        &v126,
        &v127);
    }
  }
  if ( (int)RIMGetDeviceLocationInfo(a5, a2 + 2120) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  v23 = (unsigned __int16)*a4;
  v123 = *(_OWORD *)(Pool2 + 368);
  if ( (unsigned int)RIMIsDeviceExcluded(v23, &v123) )
    goto LABEL_77;
  v24 = 1;
  v25 = *(_DWORD *)(v119 + 84);
  if ( (v25 & 4) != 0 )
  {
    if ( *a4 == 2 )
    {
      v26 = v119;
      *(_DWORD *)(Pool2 + 24) = 5;
      rimSetupPalmTelemetry(v26);
      if ( (int)RIMInitializeDeadzone() < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v27) = 0;
        }
        if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v27,
            v28,
            (_DWORD)gRimLog,
            3,
            1,
            15,
            (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
        }
        gDeviceArbitrationType = 1;
      }
      goto LABEL_77;
    }
    if ( *a4 == 1 )
    {
      v29 = dword_1C028F6FC == 3;
      *(_DWORD *)(Pool2 + 24) = 6;
      v24 = !v29;
LABEL_41:
      v29 = v24;
      goto LABEL_74;
    }
  }
  if ( (v25 & 0x18) == 0 || (unsigned __int16)(*a4 - 4) > 1u )
  {
    if ( (v25 & 0x20) == 0 )
      goto LABEL_75;
    v29 = (*(_DWORD *)(a2 + 184) & 0x10000) == 0;
LABEL_74:
    if ( !v29 )
    {
LABEL_77:
      v43 = v125;
      v118 = 1;
      if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x56u, &v143, &v118, v125) >= 0 )
      {
        if ( v143.LogicalMin >= v143.LogicalMax || v143.LogicalMin < 0 || v143.LogicalMax < 0xFFFF )
        {
          if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
          {
            v49 = *(unsigned __int8 *)(a2 + 48);
            *(_QWORD *)&v123 = L"Bad ScanTime minimum";
            v122[0] = *(const WCHAR **)(a2 + 216);
            v121 = RimDeviceTypeToRimInputTypeString(a2, v49);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
              v50,
              byte_1C025D7CA,
              v51,
              v52,
              &v121,
              v122,
              (const WCHAR **)&v123);
          }
LABEL_91:
          v31 = -1073741668;
          goto LABEL_76;
        }
        *(_DWORD *)(Pool2 + 360) |= 0x80u;
        *(_DWORD *)(Pool2 + 888) = v143.LogicalMax;
      }
      v118 = 0;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(Pool2 + 776), 0, 0LL, &v118, v43);
      v31 = SpecificValueCaps;
      if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
      {
        if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
        {
          v45 = *(unsigned __int8 *)(a2 + 48);
          *(_QWORD *)&v123 = L"Coordinate usage missing";
          v122[0] = *(const WCHAR **)(a2 + 216);
          v121 = RimDeviceTypeToRimInputTypeString(a2, v45);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
            v46,
            byte_1C025D7CA,
            v47,
            v48,
            &v121,
            v122,
            (const WCHAR **)&v123);
        }
        goto LABEL_76;
      }
      v53 = (_DWORD *)(Pool2 + 32);
      v54 = 6LL;
      do
      {
        *v53 = -1;
        v53 += 4;
        --v54;
      }
      while ( v54 );
      if ( (int)RIMCmAllocPointerDeviceContacts(Pool2, 2020635474LL) >= 0 )
      {
        if ( (*(_DWORD *)(Pool2 + 360) & 2) == 0
          || !*(_WORD *)(*(_QWORD *)(Pool2 + 760) + 8LL)
          || (v120 = 2,
              v31 = rimHidP_GetSpecificValueCaps(
                      HidP_Input,
                      0,
                      *(_WORD *)(*(_QWORD *)(Pool2 + 760) + 8LL),
                      0,
                      v144,
                      &v120,
                      v125),
              v31 >= 0) )
        {
          v55 = gpLeakTrackingAllocator;
          LODWORD(v127) = v118 + v120;
          v56 = 72LL * (unsigned int)v127;
          if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78707352) == 0x78707352 )
          {
            v57 = 0LL;
            if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
            {
              while ( *((_DWORD *)gpLeakTrackingAllocator + v57) != 2020635474 )
              {
                if ( ++v57 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                  goto LABEL_102;
              }
              v89 = 0;
              if ( v56 < 0x1000 || (v56 & 0xFFF) != 0 )
              {
                v89 = 1;
                v56 += 16LL;
              }
              v58 = ExAllocatePool2(260LL, v56);
              if ( !v58 )
              {
                v130 = 0LL;
                goto LABEL_61;
              }
              memset(v142, 0, sizeof(v142));
              RtlCaptureStackBackTrace(0, 0x14u, v142, 0LL);
              if ( v89 && (unsigned __int64)(v58 & 0xFFF) + 16 < 0x1000 )
              {
                v59 = 0;
                if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                       (__int64)v55,
                       (const void *)v58,
                       (struct NSInstrumentation::CBackTrace *)v142) )
                {
                  v58 += 16LL;
LABEL_103:
                  v130 = (void *)v58;
                  if ( !v58 )
                    goto LABEL_61;
LABEL_104:
                  v60 = v125;
                  v31 = rimHidP_GetSpecificValueCaps(
                          HidP_Input,
                          0,
                          *(_WORD *)(Pool2 + 776),
                          0,
                          (struct _HIDP_VALUE_CAPS *)v58,
                          &v118,
                          v125);
                  if ( v31 < 0 )
                    goto LABEL_61;
                  if ( (*(_DWORD *)(Pool2 + 360) & 2) == 0
                    && !(unsigned int)RIMGetPropertyCount(Pool2, *(unsigned __int16 *)(Pool2 + 776), v118, v60) )
                  {
                    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                      || (LOBYTE(v61) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
                    {
                      LOBYTE(v61) = 0;
                    }
                    if ( (_BYTE)v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v62) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                      WPP_RECORDER_AND_TRACE_SF_(
                        WPP_GLOBAL_Control->AttachedDevice,
                        v61,
                        v62,
                        (_DWORD)gRimLog,
                        3,
                        1,
                        16,
                        (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
                    }
                  }
                  v63 = (unsigned int)v127;
                  if ( v120 )
                  {
                    v64 = v118;
                    v65 = v144;
                    v66 = 0;
                    do
                    {
                      if ( (unsigned int)v64 >= v63 )
                        break;
                      v67 = 9 * v64;
                      ++v66;
                      v64 = (unsigned int)(v64 + 1);
                      *(_OWORD *)(v58 + 8 * v67) = *(_OWORD *)&v65->UsagePage;
                      *(_OWORD *)(v58 + 8 * v67 + 16) = *(_OWORD *)&v65->HasNull;
                      *(_OWORD *)(v58 + 8 * v67 + 32) = *(_OWORD *)&v65->UnitsExp;
                      *(_OWORD *)(v58 + 8 * v67 + 48) = *(_OWORD *)&v65->PhysicalMin;
                      v68 = *(_QWORD *)&v65->NotRange.DesignatorIndex;
                      ++v65;
                      *(_QWORD *)(v58 + 8 * v67 + 64) = v68;
                    }
                    while ( v66 < 2 );
                  }
                  LODWORD(v126) = 0;
                  v69 = 0;
                  if ( v63 )
                  {
                    v70 = (__m128i *)(v58 + 16);
                    LOWORD(v71) = 1;
                    while ( 1 )
                    {
                      if ( v69 >= 6 )
                      {
LABEL_149:
                        v60 = v125;
                        goto LABEL_150;
                      }
                      if ( *(_DWORD *)(Pool2 + 24) == 4 && !v70->m128i_i8[0] )
                      {
                        v31 = -1073741668;
                        goto LABEL_149;
                      }
                      v72 = *v131;
                      if ( *v131 == 2 )
                        v72 = v71;
                      v73 = v70[2].m128i_i16[4] | ((v70[-1].m128i_i16[0] | (unsigned __int16)(16 * v72)) << 8);
                      if ( !(unsigned int)RIMIsEssentialUsage(v73) )
                      {
                        v71 = 1;
                        goto LABEL_146;
                      }
                      v74 = (unsigned int)v126;
                      v75 = 60LL * (unsigned int)v126;
                      v76 = 16LL * (unsigned int)v126;
                      *(_WORD *)(v75 + Pool2 + 400) = v70[-1].m128i_i16[0];
                      *(_WORD *)(v75 + Pool2 + 412) = v70[2].m128i_i16[4];
                      *(_DWORD *)(v75 + Pool2 + 404) = v70[-1].m128i_u8[2];
                      *(_WORD *)(v75 + Pool2 + 410) = v70[-1].m128i_i16[5];
                      *(_DWORD *)(v75 + Pool2 + 416) = v70->m128i_u8[0];
                      *(_DWORD *)(v75 + Pool2 + 432) = v70[1].m128i_i32[2];
                      *(_DWORD *)(v75 + Pool2 + 436) = v70[1].m128i_i32[3];
                      *(_DWORD *)(v75 + Pool2 + 440) = v70[2].m128i_i32[0];
                      *(_DWORD *)(v75 + Pool2 + 444) = v70[2].m128i_i32[1];
                      *(_WORD *)(v75 + Pool2 + 456) = v70->m128i_i16[1];
                      *(_DWORD *)(Pool2 + 16 * (v74 + 2)) = v74;
                      *(_WORD *)(v76 + Pool2 + 28) = v70[-1].m128i_i16[0];
                      *(_WORD *)(v76 + Pool2 + 30) = v70[2].m128i_i16[4];
                      v77 = *v70;
                      v135[0] = v70[-1];
                      v78 = v70[1];
                      v135[1] = v77;
                      v79 = v70[2];
                      v135[2] = v78;
                      v136 = v70[3].m128i_i64[0];
                      v135[3] = v79;
                      RIMRetrieveNormalizationRange(v73, v135, Pool2 + v76 + 36);
                      v80 = v70[2].m128i_i16[4];
                      LODWORD(v126) = (_DWORD)v126 + 1;
                      if ( v80 != 48 )
                        goto LABEL_129;
                      if ( v70[-1].m128i_i16[0] == 1 )
                        break;
LABEL_132:
                      RIMCheckPressureUsageStatus(v119, Pool2, v73);
LABEL_146:
                      v69 = (unsigned int)v126;
                      v59 += v71;
                      v70 = (__m128i *)((char *)v70 + 72);
                      if ( v59 >= (unsigned int)v127 )
                        goto LABEL_149;
                    }
                    v81 = v70[2];
                    v128 = v59;
                    v82 = v70[-1];
                    v83 = *v70;
                    v84 = v70[1];
                    v138 = v70[3].m128i_i64[0];
                    v137[0] = v82;
                    v137[1] = v83;
                    v137[2] = v84;
                    v137[3] = v81;
                    *(_DWORD *)(Pool2 + 148) = RIMComputeSpecificHighMetricValue(
                                                 (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v81, 4))
                                                              - _mm_cvtsi128_si32(v81)),
                                                 v137)
                                             + 1;
                    *(_DWORD *)(Pool2 + 124) = v70[1].m128i_i32[2];
                    *(_DWORD *)(Pool2 + 132) = v70[1].m128i_i32[3] + 1;
                    v80 = v70[2].m128i_i16[4];
LABEL_129:
                    if ( v80 == 49 && v70[-1].m128i_i16[0] == 1 )
                    {
                      v85 = v70[2];
                      v124 = v59;
                      v86 = v70[-1];
                      v87 = *v70;
                      v88 = v70[1];
                      v140 = v70[3].m128i_i64[0];
                      v139[0] = v86;
                      v139[1] = v87;
                      v139[2] = v88;
                      v139[3] = v85;
                      *(_DWORD *)(Pool2 + 152) = RIMComputeSpecificHighMetricValue(
                                                   (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v85, 4))
                                                                - _mm_cvtsi128_si32(v85)),
                                                   v139)
                                               + 1;
                      *(_DWORD *)(Pool2 + 128) = v70[1].m128i_i32[2];
                      *(_DWORD *)(Pool2 + 136) = v70[1].m128i_i32[3] + 1;
                    }
                    goto LABEL_132;
                  }
LABEL_150:
                  *(_DWORD *)(Pool2 + 772) = v69;
                  if ( v31 < 0 )
                    goto LABEL_61;
                  if ( v128 == -1 || v124 == -1 )
                  {
                    if ( (unsigned int)dword_1C028D610 <= 5
                      || !tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
                    {
                      goto LABEL_182;
                    }
                    v113 = *(unsigned __int8 *)(a2 + 48);
                    *(_QWORD *)&v123 = L"coordinate usage missing";
                    v122[0] = *(const WCHAR **)(a2 + 216);
                    v109 = RimDeviceTypeToRimInputTypeString(a2, v113);
                  }
                  else
                  {
                    if ( *(_DWORD *)(v58 + 72LL * v128 + 44) != *(_DWORD *)(v58 + 72LL * v128 + 40)
                      && *(_DWORD *)(v58 + 72LL * v124 + 44) != *(_DWORD *)(v58 + 72LL * v124 + 40) )
                    {
                      v90 = RIMGetQDCActivePathsData((unsigned int *)&v134);
                      v91 = *(_DWORD *)(Pool2 + 24);
                      v92 = v90;
                      v133 = v90;
                      if ( v91 != 7 )
                      {
                        if ( v91 == 6 )
                        {
                          v93 = v131;
                        }
                        else
                        {
                          v124 = 0;
                          *(_DWORD *)(a2 + 1336) = 1;
                          RIMReadDigitizerToMonitorMappings(a2, a2 + 1336);
                          rimFindMonitorForDigitizerWithQDCData(a2, v92, &v124);
                          v93 = v131;
                          if ( *v131 == 4 )
                          {
                            v94 = *(_QWORD *)v122[0];
                            DWORD2(v123) = *((_DWORD *)v122[0] + 2);
                            *(_QWORD *)&v123 = v94;
                            if ( (int)ApiSetValidateDeviceSignature(
                                        (_DWORD)v132,
                                        (_DWORD)v121,
                                        (_DWORD)v60,
                                        (_DWORD)v131,
                                        Pool2,
                                        (__int64)&v123,
                                        v124) < 0 )
                            {
                              v31 = -1073741668;
                              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                                || (LOBYTE(v95) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
                              {
                                LOBYTE(v95) = 0;
                              }
                              if ( (_BYTE)v95 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                              {
                                LOBYTE(v96) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                                WPP_RECORDER_AND_TRACE_SF_(
                                  WPP_GLOBAL_Control->AttachedDevice,
                                  v95,
                                  v96,
                                  (_DWORD)gRimLog,
                                  3,
                                  1,
                                  17,
                                  (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
                              }
                              if ( (unsigned int)dword_1C028D610 > 5
                                && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
                              {
                                v97 = *(unsigned __int8 *)(a2 + 48);
                                *(_QWORD *)&v123 = L"Failed to validate device signature";
                                v122[0] = *(const WCHAR **)(a2 + 216);
                                v121 = RimDeviceTypeToRimInputTypeString(a2, v97);
                                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                                  v98,
                                  byte_1C025D7CA,
                                  v99,
                                  v100,
                                  &v121,
                                  v122,
                                  (const WCHAR **)&v123);
                              }
                              v38 = v119;
                              goto LABEL_62;
                            }
                            v101 = *(_DWORD *)(Pool2 + 360);
                            if ( (v101 & 0x100) == 0 )
                              *(_DWORD *)(Pool2 + 360) = v101 & 0xFFFFFF7F;
                          }
                        }
                        goto LABEL_177;
                      }
                      v93 = v131;
                      v102 = *(_QWORD *)v122[0];
                      DWORD2(v123) = *((_DWORD *)v122[0] + 2);
                      *(_QWORD *)&v123 = v102;
                      if ( (int)ApiSetValidateDeviceSignature(
                                  (_DWORD)v132,
                                  (_DWORD)v121,
                                  (_DWORD)v60,
                                  (_DWORD)v131,
                                  Pool2,
                                  (__int64)&v123,
                                  0) >= 0 )
                      {
LABEL_177:
                        if ( *(_DWORD *)(Pool2 + 148) - *(_DWORD *)(Pool2 + 140) <= 1
                          || *(_DWORD *)(Pool2 + 152) - *(_DWORD *)(Pool2 + 144) <= 1 )
                        {
                          v104 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
                          *(_OWORD *)(Pool2 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(&v123, v104);
                        }
                        RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)Pool2);
                        RIMPopulateExtendedPointerDeviceProperties(a2, Pool2);
                        if ( *(_DWORD *)(Pool2 + 24) != 7
                          || (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)Pool2) >= 0 )
                        {
                          v38 = v119;
                          v31 = RIMGetDeviceButtons(v119, Pool2, (_DWORD)v60, (_DWORD)v93, v117);
                          if ( v31 >= 0 )
                          {
                            if ( *(_DWORD *)(Pool2 + 24) != 7 )
                            {
                              v123 = *(_OWORD *)(a2 + 208);
                              ApiSetRetrieveCalibrationData(Pool2, &v123, v106, 0LL);
                            }
                          }
                          else
                          {
                            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                              || (LOBYTE(v105) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
                            {
                              LOBYTE(v105) = 0;
                            }
                            if ( (_BYTE)v105 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                            {
                              LOBYTE(v106) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                              WPP_RECORDER_AND_TRACE_SF_(
                                WPP_GLOBAL_Control->AttachedDevice,
                                v105,
                                v106,
                                (_DWORD)gRimLog,
                                3,
                                1,
                                18,
                                (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
                            }
                          }
                          if ( v93[1] == 13
                            && *v93 == 2
                            && RIMIsInputUsagePresent((__int64)v60, v105, 0x5Bu)
                            && RIMIsInputUsagePresent((__int64)v60, v107, 0x91u) )
                          {
                            *(_DWORD *)(Pool2 + 360) |= 0x10000u;
                          }
                          goto LABEL_62;
                        }
                        goto LABEL_182;
                      }
                      v31 = -1073741668;
                      if ( (unsigned int)dword_1C028D610 <= 5
                        || !tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
                      {
                        goto LABEL_61;
                      }
                      v103 = *(unsigned __int8 *)(a2 + 48);
                      *(_QWORD *)&v123 = L"Failed to validate device signature";
                      v122[0] = *(const WCHAR **)(a2 + 216);
                      v34 = RimDeviceTypeToRimInputTypeString(a2, v103);
                      goto LABEL_60;
                    }
                    if ( (unsigned int)dword_1C028D610 <= 5
                      || !tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
                    {
LABEL_182:
                      v31 = -1073741668;
                      goto LABEL_61;
                    }
                    v108 = *(unsigned __int8 *)(a2 + 48);
                    *(_QWORD *)&v123 = L"coordinate range invalid";
                    v122[0] = *(const WCHAR **)(a2 + 216);
                    v109 = RimDeviceTypeToRimInputTypeString(a2, v108);
                  }
                  v121 = v109;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                    v110,
                    byte_1C025D7CA,
                    v111,
                    v112,
                    &v121,
                    v122,
                    (const WCHAR **)&v123);
                  goto LABEL_182;
                }
              }
              else
              {
                v59 = 0;
                if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                       (__int64)v55,
                       v58,
                       (struct NSInstrumentation::CBackTrace *)v142) )
                {
                  v130 = (void *)v58;
                  goto LABEL_104;
                }
              }
              ExFreePoolWithTag((PVOID)v58, 0);
              v130 = 0LL;
              goto LABEL_61;
            }
          }
LABEL_102:
          v58 = ExAllocatePool2(260LL, v56);
          v59 = 0;
          goto LABEL_103;
        }
        goto LABEL_91;
      }
LABEL_76:
      v38 = v119;
      goto LABEL_62;
    }
LABEL_75:
    v31 = -1073741808;
    goto LABEL_76;
  }
  v30 = v125;
  *(_DWORD *)(Pool2 + 24) = 1;
  v31 = RIMAssignTouchType(Pool2, v30);
  if ( v31 != -1073741668 )
  {
    if ( *a4 == 5 )
    {
      v129 = *(_DWORD *)(Pool2 + 24);
      *(_DWORD *)(Pool2 + 24) = 7;
    }
    v32 = *(_DWORD *)(v119 + 84);
    if ( (v32 & 4) != 0 && (unsigned int)(*(_DWORD *)(Pool2 + 24) - 5) <= 1 )
      v24 = 0;
    if ( (v32 & 8) != 0 && *(_DWORD *)(Pool2 + 24) == 7 )
      v24 = 0;
    if ( (v32 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(Pool2 + 24) - 1) <= 3 || !v24 )
    {
      v31 = RIMGetMaxCountFeatureDetails(a2, v119, Pool2, (_DWORD)v125, (__int64)a4, (__int64)v132, (__int64)v121);
      if ( v31 == -1073741668 )
      {
        if ( (unsigned int)dword_1C028D610 <= 5 || !tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
          goto LABEL_61;
        v33 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v123 = L"Failed to get max count feature details";
        v122[0] = *(const WCHAR **)(a2 + 216);
        v34 = RimDeviceTypeToRimInputTypeString(a2, v33);
LABEL_60:
        v121 = v34;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v35,
          byte_1C025D7CA,
          v36,
          v37,
          &v121,
          v122,
          (const WCHAR **)&v123);
        goto LABEL_61;
      }
      goto LABEL_77;
    }
    goto LABEL_41;
  }
LABEL_61:
  v38 = v119;
LABEL_62:
  RIMFreeQDCActivePathsData((__int64)v133);
  if ( v130 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v130);
  if ( v31 < 0 || *(_DWORD *)(Pool2 + 24) == 7 && (v31 = RIMValidatePTPProperties(v129, Pool2), v31 < 0) )
  {
    if ( *(_QWORD *)(Pool2 + 784) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
    RIMFreePointerDevice(v38, Pool2);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(Pool2 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(v38 + 756) += *(_DWORD *)(Pool2 + 768);
      *(_DWORD *)(Pool2 + 360) |= 0x400u;
      if ( *(_DWORD *)(v38 + 756) > 0xA00u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
    }
    *(_DWORD *)(Pool2 + 792) = 100;
    *(_QWORD *)(Pool2 + 800) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 472) = Pool2;
    *(_QWORD *)(Pool2 + 16) = a2;
    v42 = *(_QWORD **)(v38 + 440);
    if ( *v42 != v38 + 432 )
      __fastfail(3u);
    *(_QWORD *)(Pool2 + 920) = v42;
    *(_QWORD *)(Pool2 + 912) = v38 + 432;
    *v42 = Pool2 + 912;
    v114 = v132;
    *(_QWORD *)(v38 + 440) = Pool2 + 912;
    *(_QWORD *)(Pool2 + 784) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(v114, a2, (int)Pool2 + 912) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v115) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v115) = 0;
      }
      if ( (_BYTE)v115 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v116) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v115,
          v116,
          (_DWORD)gRimLog,
          3,
          1,
          19,
          (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
      }
    }
  }
  return (unsigned int)v31;
}
