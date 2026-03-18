/*
 * XREFs of RIMVirtCreatePointerDeviceInfo @ 0x1C0196000
 * Callers:
 *     RIMVirtAllocateHidDesc @ 0x1C018D358 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004DC2C (RimDeviceTypeToRimInputTypeString.c)
 *     HMValidateSharedHandleNoRip @ 0x1C008F240 (HMValidateSharedHandleNoRip.c)
 *     RIMGetQDCActivePathsData @ 0x1C009FA90 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C009FE04 (RIMFreeQDCActivePathsData.c)
 *     RIMGetDeviceParent @ 0x1C00A13E0 (RIMGetDeviceParent.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C018EA24 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C018F170 (rimSetupPalmTelemetry.c)
 *     RIMFreePointerDevice @ 0x1C0191E14 (RIMFreePointerDevice.c)
 *     RIMInitializeDeadzone @ 0x1C01940B0 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C019441C (RIMIsDeviceExcluded.c)
 *     RIMVirtAssignTouchType @ 0x1C0195B9C (RIMVirtAssignTouchType.c)
 *     RIMVirtGetDeviceButtons @ 0x1C0196BA4 (RIMVirtGetDeviceButtons.c)
 *     RIMVirtGetProductString @ 0x1C01970CC (RIMVirtGetProductString.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0198300 (RIMGetMonitorPhysicalSize.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0198794 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01990C8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01B6298 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMValidatePTPProperties @ 0x1C01B7D4C (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DD4F8 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C020F228 (ApiSetRetrieveCalibrationData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 RIMVirtCreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int16 *a4, ...)
{
  PVOID v4; // rdi
  __int16 *v6; // rsi
  int v7; // eax
  __int64 v9; // rax
  __int64 Pool2; // rbx
  __int64 v12; // rdi
  _QWORD *v13; // r12
  __int64 v14; // rdx
  int ProductString; // eax
  PDEVICE_OBJECT *v16; // rdx
  _UNKNOWN **v17; // r8
  int DeviceButtons; // r15d
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int16 v23; // cx
  int v24; // ecx
  BOOL v25; // esi
  int v26; // eax
  int v27; // r8d
  int v28; // edx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __m128i v31; // xmm2
  int v32; // eax
  int v33; // eax
  struct _UNICODE_STRING v34; // xmm0
  struct _UNICODE_STRING v35; // xmm1
  struct _UNICODE_STRING v36; // xmm0
  int v37; // ecx
  bool v38; // zf
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rdx
  __int64 v43; // rcx
  _DWORD *v44; // rax
  struct _UNICODE_STRING *v45; // r9
  __int64 v46; // r8
  _DWORD *v47; // rdx
  _WORD *v48; // rcx
  __int64 v49; // r10
  __int16 v50; // ax
  int Buffer; // eax
  struct _UNICODE_STRING v52; // xmm1
  struct _UNICODE_STRING v53; // xmm0
  int v54; // eax
  unsigned int v55; // edx
  unsigned int *v56; // r15
  unsigned int v57; // ecx
  unsigned int v58; // edx
  __int64 v59; // rax
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  int v62; // eax
  __int128 v63; // xmm0
  struct _UNICODE_STRING v64; // xmm1
  struct _UNICODE_STRING v65; // xmm0
  struct _UNICODE_STRING v66; // xmm1
  struct _UNICODE_STRING v67; // xmm0
  struct _UNICODE_STRING v68; // xmm1
  struct _UNICODE_STRING v69; // xmm0
  int v70; // ecx
  int v71; // r8d
  int v72; // edx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // edx
  int v76; // r8d
  struct _UNICODE_STRING v77[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v78; // [rsp+C0h] [rbp-40h]
  const WCHAR *v79; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v80; // [rsp+D0h] [rbp-30h] BYREF
  PVOID BackTrace[26]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v82; // [rsp+1D0h] [rbp+D0h]
  const WCHAR *v84; // [rsp+1E0h] [rbp+E0h] BYREF
  va_list va; // [rsp+1E0h] [rbp+E0h]
  __int64 v86; // [rsp+1E8h] [rbp+E8h]
  va_list va1; // [rsp+1F0h] [rbp+F0h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v84 = va_arg(va1, const WCHAR *);
  v86 = va_arg(va1, _QWORD);
  v4 = gpLeakTrackingAllocator;
  v82 = 0;
  v78 = 0LL;
  v6 = a4;
  v7 = *((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63707352;
  v80 = 0LL;
  if ( v7 == 1668313938 && (v9 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1668313938 )
    {
      if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(260LL, 1304LL);
    if ( !Pool2 )
      return 3221225628LL;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
             (__int64)v4,
             Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_11;
      }
      goto LABEL_36;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v4,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_36:
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
  v12 = v86;
  v13 = (_QWORD *)(Pool2 + 912);
  v14 = v86;
  *(_DWORD *)(Pool2 + 768) = *(_DWORD *)(v86 + 1152);
  *(_QWORD *)(Pool2 + 920) = Pool2 + 912;
  *(_QWORD *)(Pool2 + 912) = Pool2 + 912;
  ProductString = RIMVirtGetProductString(Pool2, v14);
  v16 = &WPP_GLOBAL_Control;
  v17 = &WPP_RECORDER_INITIALIZED;
  DeviceButtons = ProductString;
  if ( ProductString < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v16,
        (_DWORD)v17,
        (_DWORD)gRimLog,
        3,
        1,
        44,
        (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
    }
    if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
    {
      v19 = *(unsigned __int8 *)(a2 + 48);
      v84 = L"Failed to retrieve productString";
      v79 = *(const WCHAR **)(a2 + 216);
      *(_QWORD *)&v77[0].Length = RimDeviceTypeToRimInputTypeString(a2, v19);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v20,
        byte_1C025D6DF,
        v21,
        v22,
        (const WCHAR **)v77,
        &v79,
        (const WCHAR **)va);
    }
  }
  *(_OWORD *)(a2 + 2120) = *(_OWORD *)(v12 + 1372);
  *(_OWORD *)(a2 + 2136) = *(_OWORD *)(v12 + 1388);
  *(_OWORD *)(a2 + 2152) = *(_OWORD *)(v12 + 1404);
  *(_OWORD *)(a2 + 2168) = *(_OWORD *)(v12 + 1420);
  *(_OWORD *)(a2 + 2184) = *(_OWORD *)(v12 + 1436);
  *(_OWORD *)(a2 + 2200) = *(_OWORD *)(v12 + 1452);
  *(_OWORD *)(a2 + 2216) = *(_OWORD *)(v12 + 1468);
  *(_OWORD *)(a2 + 2232) = *(_OWORD *)(v12 + 1484);
  *(_QWORD *)(a2 + 2248) = *(_QWORD *)(v12 + 1500);
  v23 = *v6;
  v77[0] = *(struct _UNICODE_STRING *)(Pool2 + 368);
  if ( (unsigned int)RIMIsDeviceExcluded(v23, v77) )
    goto LABEL_70;
  v24 = *(_DWORD *)(a1 + 84);
  v25 = 1;
  if ( (v24 & 4) != 0 )
  {
    if ( *a4 == 2 )
    {
      *(_DWORD *)(Pool2 + 24) = 5;
      rimSetupPalmTelemetry(a1);
      v26 = RIMInitializeDeadzone();
      v28 = 0;
      if ( v26 < 0 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          LOBYTE(v28) = 1;
        }
        if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v28,
            v27,
            (_DWORD)gRimLog,
            3,
            1,
            45,
            (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
        }
        gDeviceArbitrationType = 1;
      }
      goto LABEL_69;
    }
    if ( *a4 == 1 )
    {
      *(_DWORD *)(Pool2 + 24) = 6;
      v25 = dword_1C028F6FC != 3;
LABEL_56:
      v38 = v25;
      goto LABEL_59;
    }
  }
  if ( (v24 & 0x18) != 0 && (unsigned __int16)(*a4 - 4) <= 1u )
  {
    *(_DWORD *)(Pool2 + 24) = 1;
    DeviceButtons = RIMVirtAssignTouchType(Pool2, (__int64)a4, v12);
    if ( DeviceButtons == -1073741668 )
      goto LABEL_61;
    if ( *a4 == 5 )
    {
      v82 = *(_DWORD *)(Pool2 + 24);
      *(_DWORD *)(Pool2 + 24) = 7;
    }
    v29 = *(_OWORD *)(v12 + 488);
    *(_DWORD *)&v77[1].Length = *(_DWORD *)(v12 + 444);
    v30 = *(_OWORD *)(v12 + 504);
    *(_DWORD *)(&v77[1].MaximumLength + 1) = *(_DWORD *)(v12 + 448);
    v31 = *(__m128i *)(v12 + 520);
    v77[1].Buffer = *(PWSTR *)(v12 + 452);
    v77[2] = *(struct _UNICODE_STRING *)(v12 + 460);
    v32 = *(_DWORD *)(v12 + 476);
    *(_OWORD *)((char *)&v77[3].Buffer + 4) = v29;
    *(_DWORD *)&v77[3].Length = v32;
    *(_DWORD *)(&v77[3].MaximumLength + 1) = *(_DWORD *)(v12 + 480);
    v33 = *(_DWORD *)(v12 + 484);
    *(struct _UNICODE_STRING *)(Pool2 + 268) = v77[1];
    LODWORD(v77[3].Buffer) = v33;
    v34 = v77[3];
    *(_OWORD *)((char *)&v77[4].Buffer + 4) = v30;
    *(struct _UNICODE_STRING *)((char *)&v77[5].Buffer + 4) = (struct _UNICODE_STRING)v31;
    *(struct _UNICODE_STRING *)(Pool2 + 284) = v77[2];
    v35 = v77[4];
    *(struct _UNICODE_STRING *)(Pool2 + 300) = v34;
    v36 = v77[5];
    *(struct _UNICODE_STRING *)(Pool2 + 316) = v35;
    *(_QWORD *)&v35.Length = *(_QWORD *)&v77[6].Length;
    *(struct _UNICODE_STRING *)(Pool2 + 332) = v36;
    *(_QWORD *)(Pool2 + 348) = *(_QWORD *)&v35.Length;
    *(_DWORD *)(Pool2 + 356) = _mm_cvtsi128_si32(_mm_srli_si128(v31, 12));
    v37 = *(_DWORD *)(a1 + 84);
    if ( (v37 & 4) != 0 && (unsigned int)(*(_DWORD *)(Pool2 + 24) - 5) <= 1 )
      v25 = 0;
    if ( (v37 & 8) != 0 && *(_DWORD *)(Pool2 + 24) == 7 )
      v25 = 0;
    if ( (v37 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(Pool2 + 24) - 1) <= 3 )
    {
      v25 = 0;
    }
    else if ( v25 )
    {
LABEL_55:
      DeviceButtons = 0;
      goto LABEL_56;
    }
    *(_DWORD *)(Pool2 + 768) = *(_DWORD *)(v12 + 1152);
    *(_DWORD *)(Pool2 + 952) = *(_DWORD *)(v12 + 1304);
    goto LABEL_55;
  }
  if ( (v24 & 0x20) != 0 )
  {
    v38 = (*(_DWORD *)(a2 + 184) & 0x10000) == 0;
LABEL_59:
    if ( !v38 )
    {
LABEL_69:
      v6 = a4;
LABEL_70:
      v43 = 6LL;
      *(_DWORD *)(Pool2 + 360) ^= (*(_DWORD *)(Pool2 + 360) ^ (*(_DWORD *)(v12 + 564) << 7)) & 0x80;
      *(_DWORD *)(Pool2 + 888) = *(_DWORD *)(v12 + 1256);
      v44 = (_DWORD *)(Pool2 + 32);
      do
      {
        *v44 = -1;
        v44 += 4;
        --v43;
      }
      while ( v43 );
      if ( (int)RIMCmAllocPointerDeviceContacts(Pool2, 2020635474LL) >= 0 )
      {
        v45 = (struct _UNICODE_STRING *)(Pool2 + 28);
        v46 = Pool2 + 400;
        v47 = (_DWORD *)(v12 + 220);
        v48 = (_WORD *)(v12 + 728);
        v49 = 6LL;
        do
        {
          *(_DWORD *)&v77[1].Length = (unsigned __int16)*(v48 - 4);
          *(_DWORD *)(&v77[1].MaximumLength + 1) = *((_DWORD *)v48 - 1);
          v50 = *v48;
          v48 += 32;
          LOWORD(v77[1].Buffer) = v50;
          WORD1(v77[1].Buffer) = *(v48 - 30);
          HIDWORD(v77[1].Buffer) = (unsigned __int16)*(v48 - 28);
          *(_DWORD *)&v77[2].Length = *((_DWORD *)v48 - 13);
          *(_DWORD *)(&v77[2].MaximumLength + 1) = (unsigned __int16)*(v48 - 24);
          v77[2].Buffer = *(PWSTR *)(v48 - 22);
          v77[3] = *(struct _UNICODE_STRING *)(v48 - 18);
          *(_QWORD *)&v77[4].Length = *(_QWORD *)(v48 - 10);
          LODWORD(v77[4].Buffer) = (unsigned __int16)*(v48 - 6);
          Buffer = (int)v77[4].Buffer;
          v52 = v77[2];
          *(struct _UNICODE_STRING *)v46 = v77[1];
          v53 = v77[3];
          *(struct _UNICODE_STRING *)(v46 + 16) = v52;
          *(_QWORD *)&v52.Length = *(_QWORD *)&v77[4].Length;
          *(struct _UNICODE_STRING *)(v46 + 32) = v53;
          *(_QWORD *)(v46 + 48) = *(_QWORD *)&v52.Length;
          *(_DWORD *)(v46 + 56) = Buffer;
          v46 += 60LL;
          v77[0].Length = *((_WORD *)v47 - 4);
          v77[0].MaximumLength = *((_WORD *)v47 - 2);
          v54 = *v47;
          v47 += 5;
          *(_DWORD *)(&v77[0].MaximumLength + 1) = v54;
          v77[0].Buffer = (PWSTR)*((_QWORD *)v47 - 2);
          *v45++ = v77[0];
          --v49;
        }
        while ( v49 );
        *(_BYTE *)(Pool2 + 824) = *(_BYTE *)(Pool2 + 404);
        *(_OWORD *)(Pool2 + 140) = *(_OWORD *)(v12 + 348);
        *(_OWORD *)(Pool2 + 124) = *(_OWORD *)(v12 + 332);
        v55 = *(_DWORD *)(Pool2 + 360) & 0xFFFF7FFF | (*(_DWORD *)(v12 + 596) != 0 ? 0x8000 : 0);
        *(_DWORD *)(Pool2 + 360) = v55;
        *(_DWORD *)(Pool2 + 360) = v55 & 0xFFFEFFFF | (*(_DWORD *)(v12 + 600) != 0 ? 0x10000 : 0);
        *(_DWORD *)(Pool2 + 772) = *(_DWORD *)(v12 + 1156);
        v56 = RIMGetQDCActivePathsData((unsigned int *)&v80);
        v57 = *(_DWORD *)(Pool2 + 24) - 6;
        v78 = v56;
        if ( v57 > 1 )
        {
          *(_DWORD *)(a2 + 1336) = 1;
          *(_QWORD *)(a2 + 1868) = *(_QWORD *)(v12 + 1360);
          *(_DWORD *)(a2 + 1880) = *(_DWORD *)(v12 + 1368);
          LODWORD(v84) = 0;
          rimFindMonitorForDigitizerWithQDCData(a2, v56, (const WCHAR **)va);
          if ( *v6 == 4 )
          {
            v58 = *(_DWORD *)(Pool2 + 360) & 0xFFFFFEFF | (*(_DWORD *)(v12 + 568) != 0 ? 0x100 : 0);
            *(_DWORD *)(Pool2 + 360) = v58;
            *(_DWORD *)(Pool2 + 360) = v58 & 0xFFFFFF7F | (*(_DWORD *)(v12 + 564) != 0 ? 0x80 : 0);
          }
        }
        if ( *(_DWORD *)(Pool2 + 148) - *(_DWORD *)(Pool2 + 140) <= 1
          || *(_DWORD *)(Pool2 + 152) - *(_DWORD *)(Pool2 + 144) <= 1 )
        {
          v59 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
          *(_OWORD *)(Pool2 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(v77, v59);
        }
        memset(&v77[1], 0, 0x70uLL);
        v60 = *(_OWORD *)(v12 + 384);
        v61 = *(_OWORD *)(v12 + 400);
        *(_DWORD *)&v77[1].Length = *(_DWORD *)(v12 + 364);
        v62 = *(_DWORD *)(v12 + 432);
        *(_OWORD *)(&v77[2].MaximumLength + 1) = v60;
        *(_DWORD *)(&v77[5].MaximumLength + 1) = v62;
        v63 = *(_OWORD *)(v12 + 416);
        *(_OWORD *)(&v77[3].MaximumLength + 1) = v61;
        v64 = v77[2];
        *(_OWORD *)(&v77[4].MaximumLength + 1) = v63;
        *(struct _UNICODE_STRING *)(Pool2 + 156) = v77[1];
        v65 = v77[3];
        *(struct _UNICODE_STRING *)(Pool2 + 172) = v64;
        v66 = v77[4];
        *(struct _UNICODE_STRING *)(Pool2 + 188) = v65;
        v67 = v77[5];
        *(struct _UNICODE_STRING *)(Pool2 + 204) = v66;
        v68 = v77[6];
        *(struct _UNICODE_STRING *)(Pool2 + 220) = v67;
        v69 = v77[7];
        *(struct _UNICODE_STRING *)(Pool2 + 236) = v68;
        *(struct _UNICODE_STRING *)(Pool2 + 252) = v69;
        RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)Pool2);
        if ( *(_DWORD *)(Pool2 + 24) == 7
          && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)Pool2) < 0 )
        {
          DeviceButtons = -1073741668;
        }
        else
        {
          DeviceButtons = RIMVirtGetDeviceButtons(v70, Pool2, v71, (_DWORD)v6, v12);
          if ( DeviceButtons >= 0 )
          {
            if ( *(_DWORD *)(Pool2 + 24) != 7 )
            {
              v77[0] = *(struct _UNICODE_STRING *)(a2 + 208);
              ApiSetRetrieveCalibrationData(Pool2, v77, v73, v74);
            }
          }
          else
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v72) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v72) = 0;
            }
            if ( (_BYTE)v72 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v73) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v72,
                v73,
                (_DWORD)gRimLog,
                3,
                1,
                46,
                (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
            }
          }
        }
      }
      goto LABEL_61;
    }
  }
  DeviceButtons = -1073741808;
LABEL_61:
  RIMFreeQDCActivePathsData((__int64)v78);
  if ( DeviceButtons < 0
    || *(_DWORD *)(Pool2 + 24) == 7 && (DeviceButtons = RIMValidatePTPProperties(v82, Pool2), DeviceButtons < 0) )
  {
    if ( *(_QWORD *)(Pool2 + 784) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
    RIMFreePointerDevice(a1, Pool2);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(Pool2 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(a1 + 756) += *(_DWORD *)(Pool2 + 768);
      *(_DWORD *)(Pool2 + 360) |= 0x400u;
      if ( *(_DWORD *)(a1 + 756) > 0xA00u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
    }
    *(_DWORD *)(Pool2 + 792) = 100;
    *(_QWORD *)(Pool2 + 800) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 472) = Pool2;
    *(_QWORD *)(Pool2 + 16) = a2;
    v42 = *(_QWORD **)(a1 + 440);
    if ( *v42 != a1 + 432 )
      __fastfail(3u);
    *(_QWORD *)(Pool2 + 920) = v42;
    *v13 = a1 + 432;
    *v42 = v13;
    *(_QWORD *)(a1 + 440) = v13;
    *(_QWORD *)(Pool2 + 784) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(0LL, a2, v41) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v75) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v75) = 0;
      }
      if ( (_BYTE)v75 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v76) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v75,
          v76,
          (_DWORD)gRimLog,
          3,
          1,
          47,
          (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
      }
    }
  }
  return (unsigned int)DeviceButtons;
}
