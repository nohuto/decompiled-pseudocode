/*
 * XREFs of RIMVirtCreatePointerDeviceInfo @ 0x1C018CC18
 * Callers:
 *     RIMVirtAllocateHidDesc @ 0x1C0183828 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x1C0019514 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C0019774 (RIMFreeQDCActivePathsData.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     RIMIsRunningOnDesktop @ 0x1C004FEC0 (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMGetDeviceParent @ 0x1C006CE24 (RIMGetDeviceParent.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0078D74 (RimDeviceTypeToRimInputTypeString.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C018554C (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C0185D88 (rimSetupPalmTelemetry.c)
 *     RIMFreePointerDevice @ 0x1C0188858 (RIMFreePointerDevice.c)
 *     RIMInitializeDeadzone @ 0x1C018A6C4 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C018AAE8 (RIMIsDeviceExcluded.c)
 *     RIMVirtAssignTouchType @ 0x1C018C698 (RIMVirtAssignTouchType.c)
 *     RIMVirtGetDeviceButtons @ 0x1C018D8D4 (RIMVirtGetDeviceButtons.c)
 *     RIMVirtGetProductString @ 0x1C018E00C (RIMVirtGetProductString.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C018F900 (RIMGetMonitorPhysicalSize.c)
 *     RIMSetDeviceOutputConfig @ 0x1C018FED8 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01907FC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01B00D0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMValidatePTPProperties @ 0x1C01B4284 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DE204 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C0208158 (ApiSetRetrieveCalibrationData.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0208528 (HMValidateSharedHandleNoRip.c)
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
  int v79; // r8d
  int v80; // r8d
  _QWORD *v81; // rdx
  _QWORD *v82; // rcx
  int v83; // edx
  int v84; // r8d
  unsigned __int64 v86; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int *v87; // [rsp+50h] [rbp-B8h]
  __int64 v88; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v89; // [rsp+60h] [rbp-A8h]
  __m256i v90; // [rsp+70h] [rbp-98h]
  __int64 v91; // [rsp+90h] [rbp-78h]
  int v92; // [rsp+98h] [rbp-70h]
  __int64 v93; // [rsp+A0h] [rbp-68h] BYREF
  struct _UNICODE_STRING v94; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v95[2]; // [rsp+B8h] [rbp-50h] BYREF
  const WCHAR *v96[13]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v97[8]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v98[24]; // [rsp+1B0h] [rbp+A8h] BYREF
  PVOID BackTrace[28]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v102; // [rsp+2C8h] [rbp+1C0h] BYREF
  va_list va; // [rsp+2C8h] [rbp+1C0h]
  __int16 *v104; // [rsp+2D0h] [rbp+1C8h]
  __int64 v105; // [rsp+2D8h] [rbp+1D0h]
  __int64 v106; // [rsp+2E0h] [rbp+1D8h]
  va_list va1; // [rsp+2E8h] [rbp+1E0h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v102 = va_arg(va1, _QWORD);
  v104 = va_arg(va1, __int16 *);
  v105 = va_arg(va1, _QWORD);
  v106 = va_arg(va1, _QWORD);
  v2 = gpLeakTrackingAllocator;
  v3 = a2;
  LODWORD(v105) = 0;
  v87 = 0LL;
  v4 = *(_DWORD *)gpLeakTrackingAllocator;
  LODWORD(v102) = 1668313938;
  v93 = 260LL;
  v6 = v104;
  v88 = 1288LL;
  v97[0] = 0LL;
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
      v86 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668313938, &v86) )
      {
        v95[0] = &v93;
        va_copy((va_list)&v95[1], va);
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v2,
                  (__int64)v95,
                  &v88);
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
                 v86,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_19;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v2,
                    (const void *)Pool2,
                    v86,
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
  v8 = (_QWORD *)ExAllocatePool2(v93 & 0xFFFFFFFFFFFFFFFDuLL, 1304LL, (unsigned int)v102);
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
  v11 = v106;
  v88 = Pool2 + 768;
  v12 = v106;
  *(_DWORD *)(Pool2 + 768) = *(_DWORD *)(v106 + 1152);
  v95[0] = Pool2 + 912;
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
        (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
    }
    if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
    {
      v17 = *(unsigned __int8 *)(v3 + 48);
      v86 = (unsigned __int64)L"Failed to retrieve productString";
      v96[0] = *(const WCHAR **)(v3 + 216);
      *(_QWORD *)&v94.Length = RimDeviceTypeToRimInputTypeString(v3, v17);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v18,
        byte_1C02584E6,
        v19,
        v20,
        (const WCHAR **)&v94,
        v96,
        (const WCHAR **)&v86);
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
  v94 = *(struct _UNICODE_STRING *)(Pool2 + 368);
  if ( !(unsigned int)RIMIsDeviceExcluded(v21, &v94) )
  {
    v23 = *(unsigned int *)(a1 + 84);
    v24 = 1;
    v25 = (__int64)v104;
    if ( (v23 & 4) != 0 )
    {
      if ( *v104 == 2 )
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
              (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
          *(_DWORD *)(SGDGetUserSessionState(v33, v30, v31, v32) + 436) = 1;
        }
        goto LABEL_66;
      }
      if ( *v104 == 1 )
      {
        *(_DWORD *)(Pool2 + 24) = 6;
        v24 = 0;
        if ( !RIMIsRunningOnDesktop(v23, v25, 2LL, v22) )
          goto LABEL_63;
        goto LABEL_62;
      }
    }
    if ( (v23 & 0x18) == 0 || (unsigned __int16)(*v104 - 4) > 1u )
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
    if ( *v104 == 5 )
    {
      LODWORD(v105) = *v34;
      *v34 = 7;
    }
    memset(&v96[1], 0, 0x5CuLL);
    v35 = *(_OWORD *)(v11 + 488);
    LODWORD(v96[1]) = *(_DWORD *)(v11 + 444);
    v36 = *(_OWORD *)(v11 + 504);
    HIDWORD(v96[1]) = *(_DWORD *)(v11 + 448);
    v37 = *(__m128i *)(v11 + 520);
    v96[2] = *(const WCHAR **)(v11 + 452);
    *(_OWORD *)&v96[3] = *(_OWORD *)(v11 + 460);
    v38 = *(_DWORD *)(v11 + 476);
    *(_OWORD *)((char *)&v96[6] + 4) = v35;
    LODWORD(v96[5]) = v38;
    HIDWORD(v96[5]) = *(_DWORD *)(v11 + 480);
    v39 = *(_DWORD *)(v11 + 484);
    *(_OWORD *)(Pool2 + 268) = *(_OWORD *)&v96[1];
    LODWORD(v96[6]) = v39;
    v40 = *(_OWORD *)&v96[5];
    *(_OWORD *)((char *)&v96[8] + 4) = v36;
    *(__m128i *)((char *)&v96[10] + 4) = v37;
    *(_OWORD *)(Pool2 + 284) = *(_OWORD *)&v96[3];
    v41 = *(_OWORD *)&v96[7];
    *(_OWORD *)(Pool2 + 300) = v40;
    v42 = *(_OWORD *)&v96[9];
    *(_OWORD *)(Pool2 + 316) = v41;
    *(const WCHAR **)&v41 = v96[11];
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
    *(_DWORD *)v88 = *(_DWORD *)(v11 + 1152);
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
      LODWORD(v89) = (unsigned __int16)*(v50 - 4);
      DWORD1(v89) = *((_DWORD *)v50 - 1);
      v51 = *v50;
      v50 += 32;
      WORD4(v89) = v51;
      WORD5(v89) = *(v50 - 30);
      HIDWORD(v89) = (unsigned __int16)*(v50 - 28);
      v90.m256i_i32[0] = *((_DWORD *)v50 - 13);
      v90.m256i_i32[1] = (unsigned __int16)*(v50 - 24);
      *(_OWORD *)&v90.m256i_u64[1] = *(_OWORD *)(v50 - 22);
      v90.m256i_i64[3] = *(_QWORD *)(v50 - 14);
      v91 = *(_QWORD *)(v50 - 10);
      v92 = (unsigned __int16)*(v50 - 6);
      v52 = v92;
      v53 = *(_OWORD *)v90.m256i_i8;
      *(_OWORD *)v47 = v89;
      v54 = *(_OWORD *)&v90.m256i_u64[2];
      *(_OWORD *)(v47 + 16) = v53;
      *(_QWORD *)&v53 = v91;
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
    v60 = RIMGetQDCActivePathsData((unsigned int *)v97);
    v3 = a2;
    v61 = *(_DWORD *)(Pool2 + 24) - 6;
    v87 = v60;
    if ( v61 <= 1 )
    {
      v62 = (int)v104;
    }
    else
    {
      *(_DWORD *)(a2 + 1336) = 1;
      *(_QWORD *)(a2 + 1868) = *(_QWORD *)(v11 + 1360);
      *(_DWORD *)(a2 + 1880) = *(_DWORD *)(v11 + 1368);
      LODWORD(v86) = 0;
      rimFindMonitorForDigitizerWithQDCData(a2, v60, &v86);
      v62 = (int)v104;
      if ( *v104 == 4 )
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
      *(_OWORD *)(Pool2 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(v98, v64);
    }
    memset(&v97[1], 0, 0x70uLL);
    v65 = *(_DWORD *)(v11 + 364);
    v66 = *(_OWORD *)(v11 + 400);
    v67 = (__int64)v87;
    *(_OWORD *)((char *)&v97[2] + 4) = *(_OWORD *)(v11 + 384);
    LODWORD(v97[1]) = v65;
    v68 = *(_OWORD *)(v11 + 416);
    v69 = *(_DWORD *)(v11 + 432);
    *(_OWORD *)((char *)&v97[3] + 4) = v66;
    DWORD1(v97[5]) = v69;
    v70 = v97[2];
    *(_OWORD *)((char *)&v97[4] + 4) = v68;
    *(_OWORD *)(Pool2 + 156) = v97[1];
    v71 = v97[3];
    *(_OWORD *)(Pool2 + 172) = v70;
    v72 = v97[4];
    *(_OWORD *)(Pool2 + 188) = v71;
    v73 = v97[5];
    *(_OWORD *)(Pool2 + 204) = v72;
    v74 = v97[6];
    *(_OWORD *)(Pool2 + 220) = v73;
    v75 = v97[7];
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
          v94 = *(struct _UNICODE_STRING *)(a2 + 208);
          ApiSetRetrieveCalibrationData(Pool2, &v94);
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
            (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
        }
      }
    }
    goto LABEL_92;
  }
LABEL_91:
  v67 = (__int64)v87;
LABEL_92:
  RIMFreeQDCActivePathsData(v67);
  if ( DeviceButtons < 0
    || *(_DWORD *)(Pool2 + 24) == 7
    && (DeviceButtons = RIMValidatePTPProperties((unsigned int)v105, Pool2), DeviceButtons < 0) )
  {
    if ( *(_QWORD *)(Pool2 + 784) )
    {
      LODWORD(v105) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4857);
    }
    RIMFreePointerDevice(a1, Pool2);
  }
  else
  {
    *(_DWORD *)(v3 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(Pool2 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(a1 + 720) += *(_DWORD *)v88;
      *(_DWORD *)(Pool2 + 360) |= 0x400u;
      if ( *(_DWORD *)(a1 + 720) > 0xA00u )
      {
        LODWORD(v102) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4838);
      }
    }
    *(_DWORD *)(Pool2 + 792) = 100;
    *(_QWORD *)(Pool2 + 800) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(v3 + 472) = Pool2;
    *(_QWORD *)(Pool2 + 16) = v3;
    v81 = *(_QWORD **)(a1 + 440);
    if ( *v81 != a1 + 432 )
      __fastfail(3u);
    v82 = (_QWORD *)v95[0];
    *(_QWORD *)(v95[0] + 8LL) = v81;
    *v82 = a1 + 432;
    *v81 = v82;
    *(_QWORD *)(a1 + 440) = v82;
    *(_QWORD *)(Pool2 + 784) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(0LL, v3, v80) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v83) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v83) = 0;
      }
      if ( (_BYTE)v83 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v84) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v83,
          v84,
          (_DWORD)gRimLog,
          3,
          1,
          47,
          (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
      }
    }
  }
  return (unsigned int)DeviceButtons;
}
