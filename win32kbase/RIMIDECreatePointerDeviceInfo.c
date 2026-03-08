/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C01C16CC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C0012EA0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     RIMGetQDCActivePathsData @ 0x1C0013468 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00136C8 (RIMFreeQDCActivePathsData.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C001F730 (DrvGetWDDMAdapterInfo.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0031148 (RIMGetDeviceObjectPointer.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0034DB0 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     RIMIsRunningOnDesktop @ 0x1C007B004 (RIMIsRunningOnDesktop.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMPopulatePointerDevice @ 0x1C01AF510 (RIMPopulatePointerDevice.c)
 *     RIMGetDeviceLocationInfo @ 0x1C01B67F4 (RIMGetDeviceLocationInfo.c)
 *     RIMGetPropertyCount @ 0x1C01B7E64 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C01B83A8 (RIMInitializeDeadzone.c)
 *     RIMIsParallelDevice @ 0x1C01B8C44 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C01B9AA4 (RIMRetrieveLinkCollection.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C01BD5A0 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C01BD6F0 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C01BDB78 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01BE49C (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C01C0F5C (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1C01C1014 (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C01C160C (RIMIDECheckScanTimeSupport.c)
 *     RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C01C7410 (RIMIDEPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01DE2F0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C01DEA60 (RIMCmFreePointerDeviceContacts.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020CD14 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020F07C (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0247060 (HMValidateSharedHandleNoRip.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int128 v6; // xmm1
  NSInstrumentation::CLeakTrackingAllocator *v7; // rsi
  unsigned __int64 v8; // r13
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int128 v11; // xmm1
  __int64 v12; // r15
  int v14; // eax
  __int64 v15; // rcx
  __int64 Pool2; // rdi
  _QWORD *v17; // rax
  unsigned int v18; // r10d
  __int64 v19; // r11
  BOOL v20; // esi
  char *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ecx
  _QWORD *v25; // r8
  __int64 v26; // rax
  NSInstrumentation::CLeakTrackingAllocator *v27; // r12
  unsigned __int64 v28; // r15
  int v29; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // r15
  _QWORD *v31; // rax
  unsigned int v32; // r10d
  __int64 v33; // r11
  char v34; // r13
  const UNICODE_STRING *v35; // rdx
  int v36; // ecx
  BOOL v37; // r12d
  NSInstrumentation::CLeakTrackingAllocator *v38; // r15
  int v39; // eax
  __int64 v40; // rsi
  _QWORD *v41; // rax
  unsigned int v42; // r10d
  __int64 v43; // r11
  __int64 v44; // r12
  char *v45; // rdx
  __int64 v46; // r8
  unsigned int *v47; // r15
  __int64 v48; // rdx
  __int64 *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r15
  int v52; // edx
  char v53; // r10
  int v54; // edx
  int v55; // eax
  int v56; // edx
  const UNICODE_STRING *v57; // rcx
  __int64 v58; // rax
  __int128 v59; // xmm0
  __int128 *v60; // rax
  __int128 v61; // xmm0
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  char *v67; // rdx
  _QWORD *v69; // rdi
  _QWORD *v70; // rdx
  char v71; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v72; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v73; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v74; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v75; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v76; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v77; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  __int64 v80; // [rsp+90h] [rbp-70h] BYREF
  PDEVICE_OBJECT v81; // [rsp+98h] [rbp-68h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v83; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v85; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v87; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v88; // [rsp+D8h] [rbp-28h]
  __int64 v89; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v90; // [rsp+F0h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+100h] [rbp+0h]
  __int64 v92; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v93[2]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v94[3]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v95; // [rsp+150h] [rbp+50h]
  __int128 v96; // [rsp+160h] [rbp+60h] BYREF
  PVOID BackTrace[20]; // [rsp+170h] [rbp+70h] BYREF
  PVOID v98[20]; // [rsp+210h] [rbp+110h] BYREF
  PVOID v99[20]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int128 v100; // [rsp+350h] [rbp+250h] BYREF
  __int128 v101; // [rsp+360h] [rbp+260h] BYREF

  v5 = 0;
  v6 = *(_OWORD *)(a4 + 56);
  v7 = gpLeakTrackingAllocator;
  v8 = a2;
  v94[0] = *(_OWORD *)(a4 + 40);
  v9 = *(_OWORD *)(a4 + 72);
  v74 = a2;
  v94[1] = v6;
  v10 = 1288LL;
  v11 = *(_OWORD *)(a4 + 88);
  v12 = a4;
  *(_QWORD *)&v101 = a5;
  v94[2] = v9;
  v14 = *(_DWORD *)gpLeakTrackingAllocator;
  v73 = a1;
  v15 = 2LL;
  v89 = a4;
  v90 = a3;
  Object = 0LL;
  v85 = 0LL;
  v81 = 0LL;
  Handle = 0LL;
  v95 = v11;
  v75 = 1668313938;
  v80 = 260LL;
  *(_QWORD *)&v100 = 1288LL;
  v96 = 0LL;
  if ( !v14 )
  {
    Pool2 = ExAllocatePool2(260LL, 1288LL, 1668313938LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v7 + 14, 1uLL);
    goto LABEL_19;
  }
  if ( v14 != 1 )
  {
    if ( v14 == 2 )
    {
      v72 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668313938, &v72) )
      {
        v87 = &v80;
        v88 = &v75;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v7,
                  (__int64)&v87,
                  &v100);
        goto LABEL_19;
      }
      Pool2 = ExAllocatePool2(v19, 1304LL, v18);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v7 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v7,
                 Pool2,
                 v72,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_19;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v7,
                    (const void *)Pool2,
                    v72,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_19;
        }
        _InterlockedAdd64((volatile signed __int64 *)v7 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_18:
    Pool2 = 0LL;
    goto LABEL_19;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63707352u) )
    goto LABEL_18;
  v17 = (_QWORD *)ExAllocatePool2(v80 & 0xFFFFFFFFFFFFFFFDuLL, 1304LL, v75);
  Pool2 = (__int64)v17;
  if ( !v17
    || (_InterlockedAdd64((volatile signed __int64 *)v7 + 14, 1uLL),
        *v17 = 1668313938LL,
        Pool2 = (__int64)(v17 + 2),
        v17 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v7 + 1),
      0x63707352uLL);
  }
LABEL_19:
  v20 = Pool2 == 0;
  if ( *(_DWORD *)(v12 + 40) == 851969 && !RIMIsRunningOnDesktop(v15, v10, a3, a4) )
    goto LABEL_83;
  if ( !Pool2 )
  {
LABEL_84:
    v44 = v73;
    goto LABEL_85;
  }
  v21 = *(char **)(v8 + 1328);
  if ( v21 )
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v21, 3u, 1, &Object) < 0 )
    {
      *(_QWORD *)(v8 + 1328) = 0LL;
LABEL_83:
      v20 = 1;
      goto LABEL_84;
    }
    if ( (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)((char *)Object + 280), v22, v23, &Handle, &v85, &v81) < 0 )
      goto LABEL_83;
  }
  *(_DWORD *)(Pool2 + 360) |= 8u;
  *(_QWORD *)(Pool2 + 920) = Pool2 + 912;
  *(_QWORD *)(Pool2 + 912) = Pool2 + 912;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)Pool2, (struct tagHIDDESC *)v12);
  rimIDECheckConfidenceSupport(Pool2, *(_QWORD *)(v12 + 16));
  v24 = *(_DWORD *)(Pool2 + 360);
  if ( (*(_DWORD *)(a3 + 12) & 2) != 0 )
  {
    *(_DWORD *)(Pool2 + 360) = v24 | 0x2000;
    RIMIDECheckScanTimeSupport(Pool2, *(_QWORD *)(v12 + 16));
  }
  else
  {
    *(_DWORD *)(Pool2 + 888) = -1;
    *(_DWORD *)(Pool2 + 360) = v24 | 0x80;
  }
  v25 = Object;
  *(_DWORD *)(Pool2 + 792) = 500;
  *(_QWORD *)(Pool2 + 800) = 500 * gliQpcFreq.QuadPart / 1000;
  if ( v25 )
  {
    v26 = v25[66];
    if ( v26 )
    {
      *(_WORD *)(v12 + 110) = *(_WORD *)(v26 + 110);
      *(_WORD *)(v12 + 112) = *(_WORD *)(v25[66] + 112LL);
      *(_WORD *)(v12 + 114) = *(_WORD *)(v25[66] + 114LL);
    }
    if ( v81 )
      RIMGetDeviceLocationInfo(v81, v8 + 2120);
  }
  *(_DWORD *)(Pool2 + 768) = *(_DWORD *)(a3 + 88);
  *(_QWORD *)(Pool2 + 944) = *(_QWORD *)(a3 + 116);
  if ( *(_QWORD *)(v8 + 216) )
  {
    v27 = gpLeakTrackingAllocator;
    v28 = *(unsigned __int16 *)(v8 + 208);
    SourceString = (PCUNICODE_STRING)(v8 + 208);
    v76 = 1785620818;
    v29 = *(_DWORD *)gpLeakTrackingAllocator;
    v82 = 260LL;
    v83 = v28;
    switch ( v29 )
    {
      case 0:
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           260LL,
                                                                                           (unsigned int)v28,
                                                                                           1785620818LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedAdd64((volatile signed __int64 *)v27 + 14, 1uLL);
        goto LABEL_58;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6A6E6952u)
          && v28 + 16 >= v28 )
        {
          v31 = (_QWORD *)ExAllocatePool2(v82 & 0xFFFFFFFFFFFFFFFDuLL, v28 + 16, v76);
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v31;
          if ( !v31
            || (_InterlockedAdd64((volatile signed __int64 *)v27 + 14, 1uLL),
                *v31 = 1785620818LL,
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v31 + 2),
                v31 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v27 + 1),
              0x6A6E6952uLL);
          }
          goto LABEL_58;
        }
        break;
      case 2:
        v79 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1785620818, &v79) )
        {
          v93[0] = &v82;
          v93[1] = &v76;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v27,
                                                                                             (__int64)v93,
                                                                                             &v83);
LABEL_58:
          *(_QWORD *)(Pool2 + 376) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
          if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          {
            v35 = SourceString;
            *(_WORD *)(Pool2 + 370) = SourceString->Length;
            RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 368), v35);
          }
          else
          {
            v20 = 1;
          }
          v12 = v89;
          v8 = v74;
          goto LABEL_62;
        }
        v34 = 0;
        if ( v28 < 0x1000 || (v28 & 0xFFF) != 0 )
        {
          v28 += 16LL;
          v34 = 1;
          v83 = v28;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v33, v28, v32);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        {
          _InterlockedAdd64((volatile signed __int64 *)v27 + 16, 1uLL);
          NSInstrumentation::CBackTrace::CBackTrace(v98);
          if ( v34
            && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
             + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v27,
                   (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                   v79,
                   (struct NSInstrumentation::CBackTrace *)v98) )
            {
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
              goto LABEL_58;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v27,
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                      v79,
                      (struct NSInstrumentation::CBackTrace *)v98) )
          {
            goto LABEL_58;
          }
          _InterlockedAdd64((volatile signed __int64 *)v27 + 17, 1uLL);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        }
        break;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_58;
  }
LABEL_62:
  v36 = *(_DWORD *)(Pool2 + 24);
  v37 = v20;
  if ( ((v36 - 3) & 0xFFFFFFFA) != 0 || v36 == 8 )
  {
    if ( !RIMGetPropertyCount(Pool2, 0, v95, *(_QWORD *)(v12 + 16)) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v56) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v56) = 0;
      }
      if ( (_BYTE)v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v56,
          (_DWORD)v25,
          (_DWORD)gRimLog,
          2,
          1,
          10,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
      }
      goto LABEL_83;
    }
    goto LABEL_98;
  }
  v38 = gpLeakTrackingAllocator;
  v77 = 1785620818;
  v84 = 260LL;
  *(_DWORD *)(Pool2 + 808) = *(_DWORD *)(v90 + 128);
  v39 = *(_DWORD *)v38;
  v92 = 40LL;
  if ( !v39 )
  {
    v40 = ExAllocatePool2(260LL, 40LL, 1785620818LL);
    if ( v40 )
      _InterlockedAdd64((volatile signed __int64 *)v38 + 14, 1uLL);
    goto LABEL_82;
  }
  if ( v39 != 1 )
  {
    if ( v39 == 2 )
    {
      v74 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v38, 1785620818, &v74) )
      {
        v87 = &v84;
        v88 = &v77;
        v40 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v38,
                (__int64)&v87,
                &v92);
        goto LABEL_82;
      }
      v40 = ExAllocatePool2(v43, 56LL, v42);
      if ( v40 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v38 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(v99);
        if ( (unsigned __int64)(v40 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v38,
                 v40,
                 v74,
                 (struct NSInstrumentation::CBackTrace *)v99) )
          {
            goto LABEL_82;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v38,
                    (const void *)v40,
                    v74,
                    (struct NSInstrumentation::CBackTrace *)v99) )
        {
          v40 += 16LL;
          goto LABEL_82;
        }
        _InterlockedAdd64((volatile signed __int64 *)v38 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v40);
      }
    }
    goto LABEL_81;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v38, 0x6A6E6952u) )
  {
LABEL_81:
    v40 = 0LL;
    goto LABEL_82;
  }
  v41 = (_QWORD *)ExAllocatePool2(v84 & 0xFFFFFFFFFFFFFFFDuLL, 56LL, v77);
  v40 = (__int64)v41;
  if ( !v41
    || (_InterlockedAdd64((volatile signed __int64 *)v38 + 14, 1uLL),
        *v41 = 1785620818LL,
        v40 = (__int64)(v41 + 2),
        v41 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v38 + 1),
      0x6A6E6952uLL);
  }
LABEL_82:
  *(_QWORD *)(Pool2 + 760) = v40;
  if ( !v40 )
    goto LABEL_83;
  v20 = v37;
  if ( !v37 )
  {
    v51 = v89;
    LODWORD(v72) = 0;
    if ( (unsigned int)RIMIsParallelDevice(Pool2, *(_QWORD *)(v89 + 16), &v72) )
    {
      if ( !(unsigned int)RIMRetrieveLinkCollection(Pool2, *(_QWORD *)(v51 + 16), v72) )
        goto LABEL_83;
      if ( LOWORD(v94[0]) == 5 )
      {
        if ( WORD1(v94[0]) != 13 )
        {
          LODWORD(v72) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 300);
        }
        ++*(_DWORD *)(Pool2 + 768);
        *(_DWORD *)(Pool2 + 24) = 7;
        *(_DWORD *)(Pool2 + 952) = 3;
        goto LABEL_99;
      }
    }
    else
    {
      DbgPrintWarning("Serial Device found!");
      v20 = (*(_DWORD *)(Pool2 + 360) & 0x2000) != 0;
    }
  }
LABEL_98:
  if ( v20 )
    goto LABEL_84;
LABEL_99:
  v52 = *(_DWORD *)(Pool2 + 360);
  if ( (v52 & 2) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v53 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v53 = 0;
    }
    if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v54 = -__CFSHR__(v52, 8);
      v71 = v54;
      LOBYTE(v54) = v53;
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v54,
        (_DWORD)v25,
        (_DWORD)gRimLog,
        4,
        1,
        11,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
        *(_DWORD *)(Pool2 + 24),
        v71);
    }
  }
  v55 = RIMCmAllocPointerDeviceContacts(Pool2, 1785620818LL);
  v44 = v73;
  if ( v55 >= 0 )
  {
    if ( !(unsigned int)RIMPopulatePointerDevice(v73, Pool2, *(_QWORD *)(v101 + 32), (__int16 *)v94) )
      v20 = 1;
  }
  else
  {
    v20 = 1;
  }
LABEL_85:
  v47 = RIMGetQDCActivePathsData((unsigned int *)&v96);
  if ( v20 )
    goto LABEL_138;
  v48 = v90;
  if ( (unsigned int)(*(_DWORD *)(Pool2 + 24) - 6) <= 1 )
    *(_QWORD *)(v90 + 80) = 0LL;
  v49 = *(__int64 **)(v48 + 80);
  if ( v49 )
    v50 = *v49;
  else
    v50 = 0LL;
  *(_QWORD *)(v8 + 1344) = v50;
  if ( *(_QWORD *)(v48 + 80) )
  {
    *(_DWORD *)(v8 + 1336) = 1;
    *(_DWORD *)(v8 + 1352) = 6;
    DrvGetWDDMAdapterInfo(
      *(_QWORD *)(*(_QWORD *)(v48 + 80) + 88LL),
      1,
      (struct _LUID *)(v8 + 1868),
      (_DWORD *)(v8 + 1876));
LABEL_125:
    rimFindMonitorForDigitizerWithQDCData(v8, v47, 0LL);
    goto LABEL_126;
  }
  if ( Object )
  {
    v57 = (const UNICODE_STRING *)((char *)Object + 72);
    *(_DWORD *)(v8 + 1336) = 1;
    RIMReadDigitizerToMonitorMappings(v57, v8 + 1336);
    goto LABEL_125;
  }
LABEL_126:
  if ( (*(_DWORD *)(Pool2 + 360) & 0x2000) == 0
    || *(_DWORD *)(Pool2 + 148) - *(_DWORD *)(Pool2 + 140) <= 1
    || *(_DWORD *)(Pool2 + 152) - *(_DWORD *)(Pool2 + 144) <= 1 )
  {
    if ( *(_DWORD *)(v8 + 1336) )
    {
      v58 = HMValidateSharedHandleNoRip(*(_QWORD *)(v8 + 1344));
      v59 = *(_OWORD *)RIMGetMonitorPhysicalSize((__int64)&v90, v58);
      v60 = &v101;
      v101 = v59;
    }
    else
    {
      v61 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)&v89);
      v60 = &v100;
      v100 = v61;
    }
    *(_OWORD *)(Pool2 + 140) = *v60;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)v8, (struct tagHID_POINTER_DEVICE_INFO *)Pool2, 0, (__int64)v47);
  RIMIDEPopulateExtendedPointerDeviceProperties(v8, Pool2);
  if ( (unsigned int)(*(_DWORD *)(Pool2 + 24) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone(v63, v62, v64, v65)
    || LOWORD(v94[0]) == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)Pool2) < 0 )
  {
    v20 = 1;
LABEL_138:
    if ( Pool2 )
    {
      v66 = *(_QWORD *)(Pool2 + 760);
      if ( v66 )
      {
        v45 = *(char **)(v66 + 24);
        if ( v45 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v45);
      }
      RIMCmFreePointerDeviceContacts(Pool2, v45, v46);
      v67 = *(char **)(Pool2 + 376);
      if ( v67 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v67);
      if ( *(_QWORD *)(Pool2 + 1056) )
        CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)Pool2);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
    }
    goto LABEL_147;
  }
  *(_DWORD *)(v8 + 200) |= 0x80u;
  *(_QWORD *)(Pool2 + 784) = -1LL;
  *(_QWORD *)(Pool2 + 16) = v8;
  *(_QWORD *)(v8 + 472) = Pool2;
  v69 = (_QWORD *)(Pool2 + 912);
  v70 = *(_QWORD **)(v44 + 440);
  if ( *v70 != v44 + 432 )
    __fastfail(3u);
  *v69 = v44 + 432;
  v69[1] = v70;
  *v70 = v69;
  *(_QWORD *)(v44 + 440) = v69;
LABEL_147:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v85 )
    ObfDereferenceObject(v85);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData((__int64)v47);
  LOBYTE(v5) = !v20;
  return v5;
}
