/*
 * XREFs of RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0
 * Callers:
 *     RIMVirtAllocateHidDesc @ 0x1C01B0738 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x1C0013468 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00136C8 (RIMFreeQDCActivePathsData.c)
 *     RIMGetDeviceParent @ 0x1C002FF2C (RIMGetDeviceParent.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     RIMIsRunningOnDesktop @ 0x1C007B004 (RIMIsRunningOnDesktop.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00877F0 (RimDeviceTypeToRimInputTypeString.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C01B23B0 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C01B2BA4 (rimSetupPalmTelemetry.c)
 *     RIMFreePointerDevice @ 0x1C01B5B18 (RIMFreePointerDevice.c)
 *     RIMInitializeDeadzone @ 0x1C01B83A8 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C01B87CC (RIMIsDeviceExcluded.c)
 *     RIMVirtAssignTouchType @ 0x1C01BA330 (RIMVirtAssignTouchType.c)
 *     RIMVirtGetDeviceButtons @ 0x1C01BB56C (RIMVirtGetDeviceButtons.c)
 *     RIMVirtGetProductString @ 0x1C01BBCA4 (RIMVirtGetProductString.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C01BD5A0 (RIMGetMonitorPhysicalSize.c)
 *     RIMSetDeviceOutputConfig @ 0x1C01BDB78 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01BE49C (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01DE2F0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMValidatePTPProperties @ 0x1C01E24C4 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020CD14 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C0246200 (ApiSetRetrieveCalibrationData.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0247060 (HMValidateSharedHandleNoRip.c)
 */

__int64 RIMVirtCreatePointerDeviceInfo(__int64 a1, __int64 a2, ...)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rsi
  __int64 v3; // r15
  int v4; // eax
  __int16 *v6; // r13
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  unsigned int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // rsi
  __int64 v12; // rdx
  int ProductString; // eax
  PDEVICE_OBJECT *v14; // rdx
  _UNKNOWN **v15; // r8
  int DeviceButtons; // r14d
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int16 v21; // cx
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // r13d
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  PDEVICE_OBJECT v33; // rcx
  _DWORD *v34; // r12
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __m128i v37; // xmm2
  int v38; // eax
  int v39; // eax
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  int v43; // ecx
  _DWORD *v44; // r12
  __int64 v45; // rcx
  _DWORD *v46; // rax
  __int64 v47; // r14
  __int64 v48; // r13
  _DWORD *v49; // r11
  _WORD *v50; // r10
  __int16 v51; // ax
  int v52; // eax
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int16 v55; // cx
  int v56; // edx
  int v57; // r8d
  int v58; // r9d
  unsigned int v59; // edx
  unsigned int *v60; // rax
  unsigned int v61; // ecx
  int v62; // r14d
  unsigned int v63; // edx
  __int64 v64; // rax
  int v65; // eax
  __int128 v66; // xmm1
  __int64 v67; // r12
  __int128 v68; // xmm0
  int v69; // eax
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  int v76; // ecx
  int v77; // r8d
  int v78; // edx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // r8d
  _QWORD *v82; // rdx
  _QWORD *v83; // rcx
  int v84; // edx
  int v85; // r8d
  unsigned __int64 v87; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int *v88; // [rsp+50h] [rbp-B8h]
  __int64 v89; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v90; // [rsp+60h] [rbp-A8h]
  __m256i v91; // [rsp+70h] [rbp-98h]
  __int64 v92; // [rsp+90h] [rbp-78h]
  int v93; // [rsp+98h] [rbp-70h]
  __int64 v94; // [rsp+A0h] [rbp-68h] BYREF
  struct _UNICODE_STRING v95; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v96[2]; // [rsp+B8h] [rbp-50h] BYREF
  const WCHAR *v97[13]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v98[8]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v99[24]; // [rsp+1B0h] [rbp+A8h] BYREF
  PVOID BackTrace[28]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v103; // [rsp+2C8h] [rbp+1C0h] BYREF
  va_list va; // [rsp+2C8h] [rbp+1C0h]
  __int16 *v105; // [rsp+2D0h] [rbp+1C8h]
  __int64 v106; // [rsp+2D8h] [rbp+1D0h]
  __int64 v107; // [rsp+2E0h] [rbp+1D8h]
  va_list va1; // [rsp+2E8h] [rbp+1E0h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v103 = va_arg(va1, _QWORD);
  v105 = va_arg(va1, __int16 *);
  v106 = va_arg(va1, _QWORD);
  v107 = va_arg(va1, _QWORD);
  v2 = gpLeakTrackingAllocator;
  v3 = a2;
  LODWORD(v106) = 0;
  v88 = 0LL;
  v4 = *(_DWORD *)gpLeakTrackingAllocator;
  LODWORD(v103) = 1668313938;
  v94 = 260LL;
  v6 = v105;
  v89 = 1288LL;
  v98[0] = 0LL;
  if ( !v4 )
  {
    Pool2 = ExAllocatePool2(260LL, 1288LL, 1668313938LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v2 + 14, 1uLL);
    goto LABEL_16;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      v87 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668313938, &v87) )
      {
        v96[0] = &v94;
        va_copy((va_list)&v96[1], va);
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v2,
                  (__int64)v96,
                  &v89);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v10, 1304LL, v9);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v2 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v2,
                 Pool2,
                 v87,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_19;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v2,
                    (const void *)Pool2,
                    v87,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedAdd64((volatile signed __int64 *)v2 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 3221225628LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63707352u) )
    return 3221225628LL;
  v8 = (_QWORD *)ExAllocatePool2(v94 & 0xFFFFFFFFFFFFFFFDuLL, 1304LL, (unsigned int)v103);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedAdd64((volatile signed __int64 *)v2 + 14, 1uLL),
        *v8 = 1668313938LL,
        Pool2 = (__int64)(v8 + 2),
        v8 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      0x63707352uLL);
  }
LABEL_16:
  if ( !Pool2 )
    return 3221225628LL;
LABEL_19:
  v11 = v107;
  v89 = Pool2 + 768;
  v12 = v107;
  *(_DWORD *)(Pool2 + 768) = *(_DWORD *)(v107 + 1152);
  v96[0] = Pool2 + 912;
  *(_QWORD *)(Pool2 + 920) = Pool2 + 912;
  *(_QWORD *)(Pool2 + 912) = Pool2 + 912;
  ProductString = RIMVirtGetProductString(Pool2, v12);
  v14 = &WPP_GLOBAL_Control;
  v15 = &WPP_RECORDER_INITIALIZED;
  DeviceButtons = ProductString;
  if ( ProductString < 0 )
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
        44,
        (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
    }
    if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
    {
      v17 = *(unsigned __int8 *)(v3 + 48);
      v87 = (unsigned __int64)L"Failed to retrieve productString";
      v97[0] = *(const WCHAR **)(v3 + 216);
      *(_QWORD *)&v95.Length = RimDeviceTypeToRimInputTypeString(v3, v17);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v18,
        byte_1C0296BEC,
        v19,
        v20,
        (const WCHAR **)&v95,
        v97,
        (const WCHAR **)&v87);
    }
  }
  *(_OWORD *)(v3 + 2120) = *(_OWORD *)(v11 + 1372);
  *(_OWORD *)(v3 + 2136) = *(_OWORD *)(v11 + 1388);
  *(_OWORD *)(v3 + 2152) = *(_OWORD *)(v11 + 1404);
  *(_OWORD *)(v3 + 2168) = *(_OWORD *)(v11 + 1420);
  *(_OWORD *)(v3 + 2184) = *(_OWORD *)(v11 + 1436);
  *(_OWORD *)(v3 + 2200) = *(_OWORD *)(v11 + 1452);
  *(_OWORD *)(v3 + 2216) = *(_OWORD *)(v11 + 1468);
  *(_OWORD *)(v3 + 2232) = *(_OWORD *)(v11 + 1484);
  *(_QWORD *)(v3 + 2248) = *(_QWORD *)(v11 + 1500);
  v21 = *v6;
  v95 = *(struct _UNICODE_STRING *)(Pool2 + 368);
  if ( !(unsigned int)RIMIsDeviceExcluded(v21, &v95) )
  {
    v23 = *(unsigned int *)(a1 + 84);
    v24 = 1;
    v25 = (__int64)v105;
    if ( (v23 & 4) != 0 )
    {
      if ( *v105 == 2 )
      {
        *(_DWORD *)(Pool2 + 24) = 5;
        rimSetupPalmTelemetry(a1);
        if ( (int)RIMInitializeDeadzone(v27, v26, v28, v29) < 0 )
        {
          v33 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v30) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v30) = 0;
          }
          LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v30,
              v31,
              (_DWORD)gRimLog,
              3,
              1,
              45,
              (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
          *(_DWORD *)(SGDGetUserSessionState(v33, v30, v31, v32) + 436) = 1;
        }
        goto LABEL_66;
      }
      if ( *v105 == 1 )
      {
        *(_DWORD *)(Pool2 + 24) = 6;
        v24 = 0;
        if ( !RIMIsRunningOnDesktop(v23, v25, 2LL, v22) )
          goto LABEL_63;
        goto LABEL_62;
      }
    }
    if ( (v23 & 0x18) == 0 || (unsigned __int16)(*v105 - 4) > 1u )
    {
      if ( (v23 & 0x20) != 0 && (*(_DWORD *)(v3 + 184) & 0x10000) != 0 )
        goto LABEL_66;
LABEL_63:
      DeviceButtons = -1073741808;
      goto LABEL_91;
    }
    v34 = (_DWORD *)(Pool2 + 24);
    *(_DWORD *)(Pool2 + 24) = 1;
    DeviceButtons = RIMVirtAssignTouchType(Pool2, v25, v11);
    if ( DeviceButtons == -1073741668 )
      goto LABEL_91;
    if ( *v105 == 5 )
    {
      LODWORD(v106) = *v34;
      *v34 = 7;
    }
    memset(&v97[1], 0, 0x5CuLL);
    v35 = *(_OWORD *)(v11 + 488);
    LODWORD(v97[1]) = *(_DWORD *)(v11 + 444);
    v36 = *(_OWORD *)(v11 + 504);
    HIDWORD(v97[1]) = *(_DWORD *)(v11 + 448);
    v37 = *(__m128i *)(v11 + 520);
    v97[2] = *(const WCHAR **)(v11 + 452);
    *(_OWORD *)&v97[3] = *(_OWORD *)(v11 + 460);
    v38 = *(_DWORD *)(v11 + 476);
    *(_OWORD *)((char *)&v97[6] + 4) = v35;
    LODWORD(v97[5]) = v38;
    HIDWORD(v97[5]) = *(_DWORD *)(v11 + 480);
    v39 = *(_DWORD *)(v11 + 484);
    *(_OWORD *)(Pool2 + 268) = *(_OWORD *)&v97[1];
    LODWORD(v97[6]) = v39;
    v40 = *(_OWORD *)&v97[5];
    *(_OWORD *)((char *)&v97[8] + 4) = v36;
    *(__m128i *)((char *)&v97[10] + 4) = v37;
    *(_OWORD *)(Pool2 + 284) = *(_OWORD *)&v97[3];
    v41 = *(_OWORD *)&v97[7];
    *(_OWORD *)(Pool2 + 300) = v40;
    v42 = *(_OWORD *)&v97[9];
    *(_OWORD *)(Pool2 + 316) = v41;
    *(const WCHAR **)&v41 = v97[11];
    *(_OWORD *)(Pool2 + 332) = v42;
    *(_QWORD *)(Pool2 + 348) = v41;
    *(_DWORD *)(Pool2 + 356) = _mm_cvtsi128_si32(_mm_srli_si128(v37, 12));
    v43 = *(_DWORD *)(a1 + 84);
    if ( (v43 & 4) != 0 && (unsigned int)(*v34 - 5) <= 1 )
      v24 = 0;
    if ( (v43 & 8) != 0 && *v34 == 7 )
      v24 = 0;
    if ( (v43 & 0x10) != 0 && (unsigned int)(*v34 - 1) <= 3 )
    {
      v24 = 0;
    }
    else if ( v24 )
    {
LABEL_61:
      DeviceButtons = 0;
LABEL_62:
      if ( v24 != 1 )
        goto LABEL_66;
      goto LABEL_63;
    }
    *(_DWORD *)v89 = *(_DWORD *)(v11 + 1152);
    *(_DWORD *)(Pool2 + 952) = *(_DWORD *)(v11 + 1304);
    goto LABEL_61;
  }
LABEL_66:
  v44 = (_DWORD *)(Pool2 + 32);
  v45 = 6LL;
  *(_DWORD *)(Pool2 + 360) ^= (*(_DWORD *)(Pool2 + 360) ^ (*(_DWORD *)(v11 + 564) << 7)) & 0x80;
  *(_DWORD *)(Pool2 + 888) = *(_DWORD *)(v11 + 1256);
  v46 = (_DWORD *)(Pool2 + 32);
  do
  {
    *v46 = -1;
    v46 += 4;
    --v45;
  }
  while ( v45 );
  if ( (int)RIMCmAllocPointerDeviceContacts(Pool2, 2020635474LL) >= 0 )
  {
    v47 = Pool2 + 400;
    v48 = 6LL;
    v49 = (_DWORD *)(v11 + 220);
    v50 = (_WORD *)(v11 + 728);
    do
    {
      LODWORD(v90) = (unsigned __int16)*(v50 - 4);
      DWORD1(v90) = *((_DWORD *)v50 - 1);
      v51 = *v50;
      v50 += 32;
      WORD4(v90) = v51;
      WORD5(v90) = *(v50 - 30);
      HIDWORD(v90) = (unsigned __int16)*(v50 - 28);
      v91.m256i_i32[0] = *((_DWORD *)v50 - 13);
      v91.m256i_i32[1] = (unsigned __int16)*(v50 - 24);
      *(_OWORD *)&v91.m256i_u64[1] = *(_OWORD *)(v50 - 22);
      v91.m256i_i64[3] = *(_QWORD *)(v50 - 14);
      v92 = *(_QWORD *)(v50 - 10);
      v93 = (unsigned __int16)*(v50 - 6);
      v52 = v93;
      v53 = *(_OWORD *)v91.m256i_i8;
      *(_OWORD *)v47 = v90;
      v54 = *(_OWORD *)&v91.m256i_u64[2];
      *(_OWORD *)(v47 + 16) = v53;
      *(_QWORD *)&v53 = v92;
      *(_OWORD *)(v47 + 32) = v54;
      *(_QWORD *)(v47 + 48) = v53;
      *(_DWORD *)(v47 + 56) = v52;
      v47 += 60LL;
      LOWORD(v52) = *((_WORD *)v49 - 4);
      v55 = *((_WORD *)v49 - 2);
      v56 = *v49;
      v57 = v49[1];
      v58 = v49[2];
      v49 += 5;
      *((_WORD *)v44 - 2) = v52;
      *((_WORD *)v44 - 1) = v55;
      *v44 = v56;
      v44[1] = v57;
      v44[2] = v58;
      v44 += 4;
      --v48;
    }
    while ( v48 );
    *(_BYTE *)(Pool2 + 824) = *(_BYTE *)(Pool2 + 404);
    *(_OWORD *)(Pool2 + 140) = *(_OWORD *)(v11 + 348);
    *(_OWORD *)(Pool2 + 124) = *(_OWORD *)(v11 + 332);
    v59 = *(_DWORD *)(Pool2 + 360) & 0xFFFF7FFF | (*(_DWORD *)(v11 + 596) != 0 ? 0x8000 : 0);
    *(_DWORD *)(Pool2 + 360) = v59;
    *(_DWORD *)(Pool2 + 360) = v59 & 0xFFFEFFFF | (*(_DWORD *)(v11 + 600) != 0 ? 0x10000 : 0);
    *(_DWORD *)(Pool2 + 772) = *(_DWORD *)(v11 + 1156);
    v60 = RIMGetQDCActivePathsData((unsigned int *)v98);
    v3 = a2;
    v61 = *(_DWORD *)(Pool2 + 24) - 6;
    v88 = v60;
    if ( v61 <= 1 )
    {
      v62 = (int)v105;
    }
    else
    {
      *(_DWORD *)(a2 + 1336) = 1;
      *(_QWORD *)(a2 + 1868) = *(_QWORD *)(v11 + 1360);
      *(_DWORD *)(a2 + 1880) = *(_DWORD *)(v11 + 1368);
      LODWORD(v87) = 0;
      rimFindMonitorForDigitizerWithQDCData(a2, v60, &v87);
      v62 = (int)v105;
      if ( *v105 == 4 )
      {
        v63 = *(_DWORD *)(Pool2 + 360) & 0xFFFFFEFF | (*(_DWORD *)(v11 + 568) != 0 ? 0x100 : 0);
        *(_DWORD *)(Pool2 + 360) = v63;
        *(_DWORD *)(Pool2 + 360) = v63 & 0xFFFFFF7F | (*(_DWORD *)(v11 + 564) != 0 ? 0x80 : 0);
      }
    }
    if ( *(_DWORD *)(Pool2 + 148) - *(_DWORD *)(Pool2 + 140) <= 1
      || *(_DWORD *)(Pool2 + 152) - *(_DWORD *)(Pool2 + 144) <= 1 )
    {
      v64 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
      *(_OWORD *)(Pool2 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(v99, v64);
    }
    memset(&v98[1], 0, 0x70uLL);
    v65 = *(_DWORD *)(v11 + 364);
    v66 = *(_OWORD *)(v11 + 400);
    v67 = (__int64)v88;
    *(_OWORD *)((char *)&v98[2] + 4) = *(_OWORD *)(v11 + 384);
    LODWORD(v98[1]) = v65;
    v68 = *(_OWORD *)(v11 + 416);
    v69 = *(_DWORD *)(v11 + 432);
    *(_OWORD *)((char *)&v98[3] + 4) = v66;
    DWORD1(v98[5]) = v69;
    v70 = v98[2];
    *(_OWORD *)((char *)&v98[4] + 4) = v68;
    *(_OWORD *)(Pool2 + 156) = v98[1];
    v71 = v98[3];
    *(_OWORD *)(Pool2 + 172) = v70;
    v72 = v98[4];
    *(_OWORD *)(Pool2 + 188) = v71;
    v73 = v98[5];
    *(_OWORD *)(Pool2 + 204) = v72;
    v74 = v98[6];
    *(_OWORD *)(Pool2 + 220) = v73;
    v75 = v98[7];
    *(_OWORD *)(Pool2 + 236) = v74;
    *(_OWORD *)(Pool2 + 252) = v75;
    RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)Pool2);
    if ( *(_DWORD *)(Pool2 + 24) == 7
      && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)Pool2) < 0 )
    {
      DeviceButtons = -1073741668;
    }
    else
    {
      DeviceButtons = RIMVirtGetDeviceButtons(v76, Pool2, v77, v62, v11);
      if ( DeviceButtons >= 0 )
      {
        if ( *(_DWORD *)(Pool2 + 24) != 7 )
        {
          v95 = *(struct _UNICODE_STRING *)(a2 + 208);
          ApiSetRetrieveCalibrationData(Pool2, &v95, v79, v80);
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v78) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v78) = 0;
        }
        if ( (_BYTE)v78 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v79) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v78,
            v79,
            (_DWORD)gRimLog,
            3,
            1,
            46,
            (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
        }
      }
    }
    goto LABEL_92;
  }
LABEL_91:
  v67 = (__int64)v88;
LABEL_92:
  RIMFreeQDCActivePathsData(v67);
  if ( DeviceButtons < 0
    || *(_DWORD *)(Pool2 + 24) == 7
    && (DeviceButtons = RIMValidatePTPProperties((unsigned int)v106, Pool2), DeviceButtons < 0) )
  {
    if ( *(_QWORD *)(Pool2 + 784) )
    {
      LODWORD(v106) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4633);
    }
    RIMFreePointerDevice(a1, Pool2);
  }
  else
  {
    *(_DWORD *)(v3 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(Pool2 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(a1 + 720) += *(_DWORD *)v89;
      *(_DWORD *)(Pool2 + 360) |= 0x400u;
      if ( *(_DWORD *)(a1 + 720) > 0xA00u )
      {
        LODWORD(v103) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4614);
      }
    }
    *(_DWORD *)(Pool2 + 792) = 100;
    *(_QWORD *)(Pool2 + 800) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(v3 + 472) = Pool2;
    *(_QWORD *)(Pool2 + 16) = v3;
    v82 = *(_QWORD **)(a1 + 440);
    if ( *v82 != a1 + 432 )
      __fastfail(3u);
    v83 = (_QWORD *)v96[0];
    *(_QWORD *)(v96[0] + 8LL) = v82;
    *v83 = a1 + 432;
    *v82 = v83;
    *(_QWORD *)(a1 + 440) = v83;
    *(_QWORD *)(Pool2 + 784) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(0LL, v3, v81) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v84) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v84) = 0;
      }
      if ( (_BYTE)v84 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v85) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v84,
          v85,
          (_DWORD)gRimLog,
          3,
          1,
          47,
          (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
      }
    }
  }
  return (unsigned int)DeviceButtons;
}
