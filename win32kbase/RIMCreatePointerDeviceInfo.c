/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C01B3FEC
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C01AC4D4 (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMGetDeviceParent @ 0x1C002FF2C (RIMGetDeviceParent.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     RIMIsRunningOnDesktop @ 0x1C007B004 (RIMIsRunningOnDesktop.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00877F0 (RimDeviceTypeToRimInputTypeString.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMIsInputUsagePresent @ 0x1C01AF31C (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01B2114 (rimHidP_GetSpecificValueCaps.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C01B23B0 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C01B2BA4 (rimSetupPalmTelemetry.c)
 *     RIMAssignTouchType @ 0x1C01B3810 (RIMAssignTouchType.c)
 *     RIMCheckPressureUsageStatus @ 0x1C01B3FBC (RIMCheckPressureUsageStatus.c)
 *     RIMFreePointerDevice @ 0x1C01B5B18 (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C01B5D38 (RIMGetDeviceButtons.c)
 *     RIMGetDeviceLocationInfo @ 0x1C01B67F4 (RIMGetDeviceLocationInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01B69A4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C01B7824 (RIMGetProductString.c)
 *     RIMGetPropertyCount @ 0x1C01B7E64 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C01B83A8 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C01B87CC (RIMIsDeviceExcluded.c)
 *     RIMIsEssentialUsage @ 0x1C01B8B10 (RIMIsEssentialUsage.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C01C74DC (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01DE2F0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C01DEF9C (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C01DF08C (RIMRetrieveNormalizationRange.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1C01E1A0C (RIMApiSetValidateDeviceSignature.c)
 *     RIMValidatePTPProperties @ 0x1C01E24C4 (RIMValidatePTPProperties.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C0246200 (ApiSetRetrieveCalibrationData.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int16 *a4,
        struct _DEVICE_OBJECT *a5,
        const WCHAR *a6,
        const WCHAR *a7)
{
  const WCHAR *v7; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v9; // r14
  int v10; // eax
  __int64 Pool2; // rbx
  _QWORD *v12; // rax
  unsigned int v13; // r10d
  __int64 v14; // r11
  int v16; // eax
  PDEVICE_OBJECT *v17; // rdx
  _UNKNOWN **v18; // r8
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r12d
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  PDEVICE_OBJECT v32; // rcx
  int v33; // r14d
  __int64 v34; // rdx
  unsigned int *v35; // r15
  int v36; // r8d
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r14
  __int64 v44; // r8
  int SpecificValueCaps; // eax
  int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _DWORD *v54; // rax
  __int64 v55; // rcx
  char v56; // r13
  NSInstrumentation::CLeakTrackingAllocator *v57; // r12
  int v58; // eax
  unsigned __int64 v59; // r15
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // r15
  _QWORD *v61; // rax
  unsigned int v62; // r10d
  __int64 v63; // r11
  unsigned __int16 *v64; // r12
  _DWORD *v65; // r13
  int v66; // edx
  int v67; // r8d
  __int64 v68; // r8
  _BYTE *v69; // rdx
  unsigned int v70; // esi
  unsigned int v71; // r9d
  __int64 v72; // rcx
  __int64 v73; // xmm0_8
  unsigned int v74; // eax
  __m128i *v75; // r13
  __int64 v76; // r9
  __int16 v77; // r12
  unsigned __int16 v78; // r12
  __int64 v79; // r8
  __int64 v80; // rcx
  __int64 v81; // rdx
  __m128i v82; // xmm1
  __m128i v83; // xmm0
  __m128i v84; // xmm1
  __m128i v85; // xmm5
  __int64 v86; // xmm0_8
  __m128i v87; // xmm2
  __m128i v88; // xmm3
  __m128i v89; // xmm4
  __m128i v90; // xmm5
  __int64 v91; // xmm0_8
  __m128i v92; // xmm2
  __m128i v93; // xmm3
  __m128i v94; // xmm4
  bool v95; // cf
  __int64 v96; // r8
  int v97; // eax
  __int16 *v98; // r12
  const WCHAR *v99; // xmm0_8
  int v100; // edx
  int v101; // r8d
  int v102; // ecx
  __int64 v103; // rdx
  __int64 v104; // r8
  const WCHAR *v105; // xmm0_8
  int v106; // edx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // r12
  __int64 v111; // rdx
  int v112; // edx
  const wchar_t *v113; // rax
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  int v117; // edx
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 **v121; // rcx
  __int64 *v122; // rdx
  struct _DEVICE_OBJECT *v123; // rcx
  int v124; // edx
  int v125; // r8d
  int v126; // [rsp+20h] [rbp-E0h]
  _WORD v127[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v128; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v129; // [rsp+48h] [rbp-B8h]
  const WCHAR *v130; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v131; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v132; // [rsp+60h] [rbp-A0h]
  __int64 v133; // [rsp+68h] [rbp-98h]
  const WCHAR *v134; // [rsp+70h] [rbp-90h] BYREF
  int v135; // [rsp+78h] [rbp-88h]
  unsigned __int64 v136; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *v137; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v138; // [rsp+90h] [rbp-70h] BYREF
  __int64 v139; // [rsp+98h] [rbp-68h]
  unsigned int v140; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v141; // [rsp+A8h] [rbp-58h] BYREF
  int v142; // [rsp+B0h] [rbp-50h]
  int v143; // [rsp+B4h] [rbp-4Ch]
  __int16 *v144; // [rsp+B8h] [rbp-48h]
  _DWORD *v145; // [rsp+C0h] [rbp-40h]
  struct _DEVICE_OBJECT *v146; // [rsp+C8h] [rbp-38h]
  __int128 v147; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v148; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v149; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v150; // [rsp+F0h] [rbp-10h] BYREF
  const WCHAR *v151; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int16 *v152; // [rsp+100h] [rbp+0h]
  const WCHAR *v153; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v154; // [rsp+110h] [rbp+10h]
  __int64 *v155; // [rsp+118h] [rbp+18h]
  const WCHAR *v156; // [rsp+120h] [rbp+20h] BYREF
  __int128 v157; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v158[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v159; // [rsp+180h] [rbp+80h]
  _OWORD v160[4]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v161; // [rsp+1D0h] [rbp+D0h]
  _OWORD v162[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v163; // [rsp+220h] [rbp+120h]
  PVOID BackTrace[20]; // [rsp+230h] [rbp+130h] BYREF
  PVOID v165[20]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _DWORD v166[20]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v167[144]; // [rsp+3C0h] [rbp+2C0h] BYREF

  v7 = a2;
  v142 = -1;
  v143 = -1;
  v133 = a3;
  v134 = a2;
  v139 = a1;
  v146 = a5;
  v137 = a6;
  v130 = a7;
  v127[0] = 0;
  v144 = a4;
  memset(v167, 0, sizeof(v167));
  v128 = 0;
  v129 = 0;
  memset(v166, 0, 0x48uLL);
  v9 = gpLeakTrackingAllocator;
  v140 = 1668313938;
  v150 = 260LL;
  v10 = *(_DWORD *)gpLeakTrackingAllocator;
  v131 = (const WCHAR *)1288;
  if ( !v10 )
  {
    Pool2 = ExAllocatePool2(260LL, 1288LL, 1668313938LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v9 + 14, 1uLL);
    goto LABEL_19;
  }
  if ( v10 != 1 )
  {
    if ( v10 == 2 )
    {
      v138 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668313938, &v138) )
      {
        *(_QWORD *)&v147 = &v150;
        *((_QWORD *)&v147 + 1) = &v140;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v9,
                  (__int64)&v147,
                  &v131);
        goto LABEL_19;
      }
      Pool2 = ExAllocatePool2(v14, 1304LL, v13);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v9 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v9,
                 (const void *)Pool2,
                 v138,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_19;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v9,
                    Pool2,
                    v138,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_20;
        }
        _InterlockedAdd64((volatile signed __int64 *)v9 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 3221225628LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63707352u) )
    return 3221225628LL;
  v12 = (_QWORD *)ExAllocatePool2(v150 & 0xFFFFFFFFFFFFFFFDuLL, 1304LL, v140);
  Pool2 = (__int64)v12;
  if ( !v12
    || (_InterlockedAdd64((volatile signed __int64 *)v9 + 14, 1uLL),
        *v12 = 1668313938LL,
        Pool2 = (__int64)(v12 + 2),
        v12 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v9 + 1),
      0x63707352uLL);
  }
LABEL_19:
  if ( !Pool2 )
    return 3221225628LL;
LABEL_20:
  *(_DWORD *)(Pool2 + 768) = 1;
  v154 = (_DWORD *)(Pool2 + 768);
  v155 = (__int64 *)(Pool2 + 912);
  *(_QWORD *)(Pool2 + 920) = Pool2 + 912;
  *(_QWORD *)(Pool2 + 912) = Pool2 + 912;
  v16 = RIMGetProductString(Pool2, a5, a6);
  v17 = &WPP_GLOBAL_Control;
  v18 = &WPP_RECORDER_INITIALIZED;
  if ( v16 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v17,
        (_DWORD)v18,
        (_DWORD)gRimLog,
        3,
        1,
        14,
        (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
    }
    if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
    {
      v19 = *((unsigned __int8 *)v7 + 48);
      v153 = L"Failed to retrieve productString";
      v156 = (const WCHAR *)*((_QWORD *)v7 + 27);
      v151 = RimDeviceTypeToRimInputTypeString((__int64)v7, v19);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v20,
        byte_1C0296D15,
        v21,
        v22,
        &v151,
        &v156,
        &v153);
    }
  }
  if ( (int)RIMGetDeviceLocationInfo(a5, v7 + 1060) < 0 )
  {
    v132 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 331);
  }
  v23 = (unsigned __int16)*a4;
  v157 = *(_OWORD *)(Pool2 + 368);
  if ( !(unsigned int)RIMIsDeviceExcluded(v23, &v157) )
  {
    v26 = 1;
    v27 = *(unsigned int *)(v139 + 84);
    if ( (v27 & 4) != 0 )
    {
      if ( *a4 == 2 )
      {
        v28 = v139;
        *(_DWORD *)(Pool2 + 24) = 5;
        rimSetupPalmTelemetry(v28);
        if ( (int)RIMInitializeDeadzone() < 0 )
        {
          v32 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v29) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v29) = 0;
          }
          LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v29,
              v30,
              (_DWORD)gRimLog,
              3,
              1,
              15,
              (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
          *(_DWORD *)(SGDGetUserSessionState(v32, v29, v30, v31) + 436) = 1;
        }
        goto LABEL_69;
      }
      if ( *a4 == 1 )
      {
        *(_DWORD *)(Pool2 + 24) = 6;
        v26 = 0;
        if ( !RIMIsRunningOnDesktop(v27, 2LL, v24, v25) )
          goto LABEL_48;
        goto LABEL_47;
      }
    }
    if ( (v27 & 0x18) == 0 || (unsigned __int16)(*a4 - 4) > 1u )
    {
      if ( (v27 & 0x20) != 0 && (*((_DWORD *)v7 + 46) & 0x10000) != 0 )
        goto LABEL_69;
LABEL_48:
      v33 = -1073741808;
LABEL_216:
      if ( *(_QWORD *)(Pool2 + 784) )
      {
        v129 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 890);
      }
      RIMFreePointerDevice(v139);
      return (unsigned int)v33;
    }
    v34 = v133;
    v35 = (unsigned int *)(Pool2 + 24);
    *(_DWORD *)(Pool2 + 24) = 1;
    v33 = RIMAssignTouchType(Pool2, v34);
    if ( v33 == -1073741668 )
      goto LABEL_200;
    v37 = (__int64)v144;
    if ( *v144 == 5 )
    {
      v129 = *v35;
      *v35 = 7;
    }
    v38 = *(_DWORD *)(v139 + 84);
    if ( (v38 & 4) != 0 && *v35 - 5 <= 1 )
      v26 = 0;
    if ( (v38 & 8) != 0 && *v35 == 7 )
      v26 = 0;
    if ( ((v38 & 0x10) == 0 || *v35 - 1 > 3) && v26 )
    {
LABEL_47:
      if ( v26 != 1 )
        goto LABEL_69;
      goto LABEL_48;
    }
    v33 = RIMGetMaxCountFeatureDetails((_DWORD)v7, v139, Pool2, v133, v37, (__int64)v146, (__int64)v137);
    if ( v33 == -1073741668 )
    {
      if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
      {
        v39 = *((unsigned __int8 *)v7 + 48);
        v131 = L"Failed to get max count feature details";
        v130 = (const WCHAR *)*((_QWORD *)v7 + 27);
        v137 = RimDeviceTypeToRimInputTypeString((__int64)v7, v39);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v40,
          byte_1C0296D15,
          v41,
          v42,
          &v137,
          &v130,
          &v131);
      }
      goto LABEL_216;
    }
  }
LABEL_69:
  v43 = v133;
  v127[0] = 1;
  if ( (int)rimHidP_GetSpecificValueCaps(0LL, 13LL, 0LL, 86LL, (__int64)v166, (__int64)v127, v133) >= 0 )
  {
    if ( v166[10] >= v166[11] || v166[10] < 0 || v166[11] < 0xFFFF )
    {
      if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
      {
        v50 = *((unsigned __int8 *)v7 + 48);
        v131 = L"Bad ScanTime minimum";
        v130 = (const WCHAR *)*((_QWORD *)v7 + 27);
        v137 = RimDeviceTypeToRimInputTypeString((__int64)v7, v50);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v51,
          byte_1C0296D15,
          v52,
          v53,
          &v137,
          &v130,
          &v131);
      }
LABEL_82:
      v33 = -1073741668;
      goto LABEL_216;
    }
    *(_DWORD *)(Pool2 + 360) |= 0x80u;
    *(_DWORD *)(Pool2 + 888) = v166[11];
  }
  v127[0] = 0;
  v44 = *(unsigned __int16 *)(Pool2 + 776);
  v152 = (unsigned __int16 *)(Pool2 + 776);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0LL, 0LL, v44, 0LL, 0LL, (__int64)v127, v43);
  v33 = SpecificValueCaps;
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
  {
    if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
    {
      v46 = *((unsigned __int8 *)v7 + 48);
      v131 = L"Coordinate usage missing";
      v130 = (const WCHAR *)*((_QWORD *)v7 + 27);
      v137 = RimDeviceTypeToRimInputTypeString((__int64)v7, v46);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v47,
        byte_1C0296D15,
        v48,
        v49,
        &v137,
        &v130,
        &v131);
    }
    goto LABEL_200;
  }
  v54 = (_DWORD *)(Pool2 + 32);
  v55 = 6LL;
  do
  {
    *v54 = -1;
    v54 += 4;
    --v55;
  }
  while ( v55 );
  if ( (int)RIMCmAllocPointerDeviceContacts(Pool2, 2020635474LL) < 0 )
    goto LABEL_200;
  v145 = (_DWORD *)(Pool2 + 360);
  if ( (*(_DWORD *)(Pool2 + 360) & 2) != 0 )
  {
    if ( *(_WORD *)(*(_QWORD *)(Pool2 + 760) + 8LL) )
    {
      v128 = 2;
      v33 = rimHidP_GetSpecificValueCaps(
              0LL,
              0LL,
              *(unsigned __int16 *)(*(_QWORD *)(Pool2 + 760) + 8LL),
              0LL,
              (__int64)v167,
              (__int64)&v128,
              v133);
      if ( v33 < 0 )
        goto LABEL_82;
    }
  }
  v56 = 0;
  v57 = gpLeakTrackingAllocator;
  v132 = v127[0] + v128;
  v141 = 2020635474;
  v148 = 260LL;
  v58 = *(_DWORD *)gpLeakTrackingAllocator;
  v59 = 72LL * v132;
  v149 = v59;
  if ( !v58 )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       72LL
                                                                                     * (v127[0] + (unsigned int)v128),
                                                                                       2020635474LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v57 + 14, 1uLL);
LABEL_109:
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_200;
LABEL_112:
    v64 = v152;
    v33 = rimHidP_GetSpecificValueCaps(
            0LL,
            0LL,
            *v152,
            0LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            (__int64)v127,
            v133);
    if ( v33 < 0 )
      goto LABEL_198;
    v65 = v145;
    if ( (*v145 & 2) == 0 && !(unsigned int)RIMGetPropertyCount(Pool2, *v64, v127[0], v133) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v66) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v66) = 0;
      }
      if ( (_BYTE)v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v67) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v66,
          v67,
          (_DWORD)gRimLog,
          3,
          1,
          16,
          (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
      }
    }
    if ( v128 )
    {
      v68 = v127[0];
      v69 = v167;
      v70 = v132;
      v71 = 0;
      do
      {
        if ( (unsigned int)v68 >= v70 )
          break;
        v72 = 9 * v68;
        ++v71;
        v68 = (unsigned int)(v68 + 1);
        *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8 * v72) = *(_OWORD *)v69;
        *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8 * v72 + 16) = *((_OWORD *)v69 + 1);
        *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8 * v72 + 32) = *((_OWORD *)v69 + 2);
        *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8 * v72 + 48) = *((_OWORD *)v69 + 3);
        v73 = *((_QWORD *)v69 + 8);
        v69 += 72;
        *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8 * v72 + 64) = v73;
      }
      while ( v71 < 2 );
      v7 = v134;
    }
    v74 = 0;
    LODWORD(v138) = 0;
    LODWORD(v136) = 0;
    if ( v132 )
    {
      v75 = (__m128i *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16);
      do
      {
        v76 = 4LL;
        if ( v74 >= 6 )
          goto LABEL_146;
        if ( *(_DWORD *)(Pool2 + 24) == 4 && !v75->m128i_i8[0] )
        {
          v33 = -1073741668;
LABEL_146:
          v65 = v145;
          goto LABEL_149;
        }
        v77 = *v144;
        if ( *v144 == 2 )
          v77 = 1;
        v78 = v75[2].m128i_i16[4] | ((v75[-1].m128i_i16[0] | (unsigned __int16)(16 * v77)) << 8);
        if ( (unsigned int)RIMIsEssentialUsage(v78) )
        {
          v79 = (unsigned int)v136;
          v80 = 60LL * (unsigned int)v136;
          v81 = 16LL * (unsigned int)v136;
          *(_WORD *)(v80 + Pool2 + 400) = v75[-1].m128i_i16[0];
          *(_WORD *)(v80 + Pool2 + 412) = v75[2].m128i_i16[4];
          *(_DWORD *)(v80 + Pool2 + 404) = v75[-1].m128i_u8[2];
          *(_WORD *)(v80 + Pool2 + 410) = v75[-1].m128i_i16[5];
          *(_DWORD *)(v80 + Pool2 + 416) = v75->m128i_u8[0];
          *(_DWORD *)(v80 + Pool2 + 432) = v75[1].m128i_i32[2];
          *(_DWORD *)(v80 + Pool2 + 436) = v75[1].m128i_i32[3];
          *(_DWORD *)(v80 + Pool2 + 440) = v75[2].m128i_i32[0];
          *(_DWORD *)(v80 + Pool2 + 444) = v75[2].m128i_i32[1];
          *(_WORD *)(v80 + Pool2 + 456) = v75->m128i_i16[1];
          *(_DWORD *)(Pool2 + 16 * (v79 + 2)) = v79;
          *(_WORD *)(v81 + Pool2 + 28) = v75[-1].m128i_i16[0];
          *(_WORD *)(v81 + Pool2 + 30) = v75[2].m128i_i16[4];
          v82 = *v75;
          v158[0] = v75[-1];
          v83 = v75[1];
          v158[1] = v82;
          v84 = v75[2];
          v158[2] = v83;
          v159 = v75[3].m128i_i64[0];
          v158[3] = v84;
          RIMRetrieveNormalizationRange(v78, v158, Pool2 + v81 + 36);
          LODWORD(v136) = v136 + 1;
          if ( v75[2].m128i_i16[4] == 48 && v75[-1].m128i_i16[0] == 1 )
          {
            v85 = v75[2];
            v86 = v75[3].m128i_i64[0];
            v87 = v75[-1];
            v142 = v138;
            v88 = *v75;
            v89 = v75[1];
            v161 = v86;
            v160[0] = v87;
            v160[1] = v88;
            v160[2] = v89;
            v160[3] = v85;
            *(_DWORD *)(Pool2 + 148) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v85, 4))
                                                      - _mm_cvtsi128_si32(v85)),
                                         v160)
                                     + 1;
            *(_DWORD *)(Pool2 + 124) = v75[1].m128i_i32[2];
            *(_DWORD *)(Pool2 + 132) = v75[1].m128i_i32[3] + 1;
          }
          if ( v75[2].m128i_i16[4] == 49 && v75[-1].m128i_i16[0] == 1 )
          {
            v90 = v75[2];
            v91 = v75[3].m128i_i64[0];
            v92 = v75[-1];
            v143 = v138;
            v93 = *v75;
            v94 = v75[1];
            v163 = v91;
            v162[0] = v92;
            v162[1] = v93;
            v162[2] = v94;
            v162[3] = v90;
            *(_DWORD *)(Pool2 + 152) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v90, 4))
                                                      - _mm_cvtsi128_si32(v90)),
                                         v162)
                                     + 1;
            *(_DWORD *)(Pool2 + 128) = v75[1].m128i_i32[2];
            *(_DWORD *)(Pool2 + 136) = v75[1].m128i_i32[3] + 1;
          }
          RIMCheckPressureUsageStatus(v139, Pool2, v78);
        }
        v75 = (__m128i *)((char *)v75 + 72);
        v95 = (int)v138 + 1 < v132;
        LODWORD(v138) = v138 + 1;
        v74 = v136;
      }
      while ( v95 );
      v65 = v145;
    }
    v76 = 4LL;
LABEL_149:
    *(_DWORD *)(Pool2 + 772) = v74;
    if ( v33 < 0 )
      goto LABEL_198;
    if ( v142 == -1 || (v96 = v143, v143 == -1) )
    {
      if ( (unsigned int)dword_1C02C92F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
        goto LABEL_194;
      v117 = *((unsigned __int8 *)v7 + 48);
      v134 = L"coordinate usage missing";
      v131 = (const WCHAR *)*((_QWORD *)v7 + 27);
      v113 = RimDeviceTypeToRimInputTypeString((__int64)v7, v117);
    }
    else
    {
      if ( *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72LL * v142 + 44) != *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72LL * v142 + 40)
        && *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72LL * v143 + 44) != *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72LL * v143 + 40) )
      {
        v97 = *(_DWORD *)(Pool2 + 24);
        v98 = v144;
        if ( v97 == 7 )
        {
          v105 = *(const WCHAR **)v130;
          v135 = *((_DWORD *)v130 + 2);
          v126 = Pool2;
          v134 = v105;
          if ( (int)RIMApiSetValidateDeviceSignature(v146, v137, v133, v144) < 0 )
          {
            v33 = -1073741668;
            if ( (unsigned int)dword_1C02C92F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
              goto LABEL_198;
            goto LABEL_182;
          }
        }
        else if ( v97 != 6 && *v144 == 4 )
        {
          v99 = *(const WCHAR **)v130;
          v135 = *((_DWORD *)v130 + 2);
          v126 = Pool2;
          v134 = v99;
          if ( (int)RIMApiSetValidateDeviceSignature(v146, v137, v133, v144) < 0 )
          {
            v33 = -1073741668;
            LOBYTE(v100) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
            if ( (_BYTE)v100 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v96) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v100,
                v96,
                (_DWORD)gRimLog,
                3,
                1,
                17,
                (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
            }
            if ( (unsigned int)dword_1C02C92F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
              goto LABEL_198;
LABEL_182:
            v106 = *((unsigned __int8 *)v7 + 48);
            v134 = L"Failed to validate device signature";
            v131 = (const WCHAR *)*((_QWORD *)v7 + 27);
            v130 = RimDeviceTypeToRimInputTypeString((__int64)v7, v106);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
              v107,
              byte_1C0296D15,
              v108,
              v109,
              &v130,
              &v131,
              &v134);
LABEL_198:
            NSInstrumentation::CLeakTrackingAllocator::Free(
              gpLeakTrackingAllocator,
              (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            goto LABEL_200;
          }
          if ( (*v65 & 0x100) == 0 )
            *v65 &= ~0x80u;
        }
        RIMPopulateExtendedPointerDeviceProperties(v7, Pool2, v96, v76);
        Feature_RIMUserCritOpt__private_ReportDeviceUsage();
        v101 = v133;
        v102 = v139;
        *((_DWORD *)v7 + 20) |= 1u;
        v33 = RIMGetDeviceButtons(v102, Pool2, v101, (_DWORD)v98, v126);
        if ( v33 >= 0 )
        {
          if ( *(_DWORD *)(Pool2 + 24) != 7 )
          {
            v147 = *((_OWORD *)v7 + 13);
            ApiSetRetrieveCalibrationData(Pool2, &v147, v104, 0LL);
          }
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v103) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v103) = 0;
          }
          if ( (_BYTE)v103 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v104) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v103,
              v104,
              (_DWORD)gRimLog,
              3,
              1,
              18,
              (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
          }
        }
        if ( v98[1] == 13 && *v98 == 2 )
        {
          v110 = v133;
          if ( RIMIsInputUsagePresent(v133, v103, 0x5Bu) && RIMIsInputUsagePresent(v110, v111, 0x91u) )
            *v65 |= 0x10000u;
        }
        goto LABEL_198;
      }
      if ( (unsigned int)dword_1C02C92F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
      {
LABEL_194:
        v33 = -1073741668;
        goto LABEL_198;
      }
      v112 = *((unsigned __int8 *)v7 + 48);
      v134 = L"coordinate range invalid";
      v131 = (const WCHAR *)*((_QWORD *)v7 + 27);
      v113 = RimDeviceTypeToRimInputTypeString((__int64)v7, v112);
    }
    v130 = v113;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v114,
      byte_1C0296D15,
      v115,
      v116,
      &v130,
      &v131,
      &v134);
    goto LABEL_194;
  }
  if ( v58 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78707352u)
      || v59 + 16 < v59 )
    {
      goto LABEL_200;
    }
    v61 = (_QWORD *)ExAllocatePool2(v148 & 0xFFFFFFFFFFFFFFFDuLL, v59 + 16, v141);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v61;
    if ( !v61
      || (_InterlockedAdd64((volatile signed __int64 *)v57 + 14, 1uLL),
          *v61 = 2020635474LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v61 + 2),
          v61 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v57 + 1),
        0x78707352uLL);
    }
    goto LABEL_109;
  }
  if ( v58 != 2 )
    goto LABEL_200;
  v136 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2020635474, &v136) )
  {
    *(_QWORD *)&v147 = &v148;
    *((_QWORD *)&v147 + 1) = &v141;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                       (__int64)v57,
                                                                                       (__int64)&v147,
                                                                                       &v149);
    goto LABEL_109;
  }
  if ( v59 < 0x1000 || (v59 & 0xFFF) != 0 )
  {
    v59 += 16LL;
    v56 = 1;
    v149 = v59;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v63, v59, v62);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
    _InterlockedAdd64((volatile signed __int64 *)v57 + 16, 1uLL);
    NSInstrumentation::CBackTrace::CBackTrace(v165);
    if ( v56
      && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v57,
             (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
             v136,
             (struct NSInstrumentation::CBackTrace *)v165) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_109;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v57,
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                v136,
                (struct NSInstrumentation::CBackTrace *)v165) )
    {
      goto LABEL_112;
    }
    _InterlockedAdd64((volatile signed __int64 *)v57 + 17, 1uLL);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  }
LABEL_200:
  if ( v33 < 0 )
    goto LABEL_216;
  if ( *(_DWORD *)(Pool2 + 24) == 7 )
  {
    v33 = RIMValidatePTPProperties(v129, Pool2);
    if ( v33 < 0 )
      goto LABEL_216;
  }
  *((_DWORD *)v7 + 50) |= 0x80u;
  if ( (unsigned int)(*(_DWORD *)(Pool2 + 24) - 1) <= 3 )
  {
    v118 = v139;
    *(_DWORD *)(v139 + 720) += *v154;
    *(_DWORD *)(Pool2 + 360) |= 0x400u;
    if ( *(_DWORD *)(v118 + 720) > 0xA00u )
    {
      v129 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 871);
    }
  }
  *(_DWORD *)(Pool2 + 792) = 100;
  v119 = v139;
  *(_QWORD *)(Pool2 + 800) = 100 * gliQpcFreq.QuadPart / 1000;
  v120 = v119 + 432;
  *((_QWORD *)v7 + 59) = Pool2;
  *(_QWORD *)(Pool2 + 16) = v7;
  v121 = *(__int64 ***)(v120 + 8);
  if ( *v121 != (__int64 *)v120 )
    __fastfail(3u);
  v122 = v155;
  v155[1] = (__int64)v121;
  *v122 = v120;
  *v121 = v122;
  v123 = v146;
  *(_QWORD *)(v120 + 8) = v122;
  *(_QWORD *)(Pool2 + 784) = -1LL;
  if ( !(unsigned int)RIMGetDeviceParent(v123, (__int64)v7, v36) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v124) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v124) = 0;
    }
    if ( (_BYTE)v124 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v125) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v124,
        v125,
        (_DWORD)gRimLog,
        3,
        1,
        19,
        (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
    }
  }
  return (unsigned int)v33;
}
