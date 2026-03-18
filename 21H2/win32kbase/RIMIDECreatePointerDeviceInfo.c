/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C003C470 (RIMGetVirtualDesktopPhysicalSize.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00564C4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C0071FB0 (DrvGetWDDMAdapterInfo.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C008F240 (HMValidateSharedHandleNoRip.c)
 *     RIMGetQDCActivePathsData @ 0x1C009FA90 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C009FE04 (RIMFreeQDCActivePathsData.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMPopulatePointerDevice @ 0x1C018C3A8 (RIMPopulatePointerDevice.c)
 *     RIMGetDeviceLocationInfo @ 0x1C01928F4 (RIMGetDeviceLocationInfo.c)
 *     RIMGetPropertyCount @ 0x1C0193C60 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C01940B0 (RIMInitializeDeadzone.c)
 *     RIMIsParallelDevice @ 0x1C0194800 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C0195468 (RIMRetrieveLinkCollection.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0198300 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0198450 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0198794 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01990C8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C019AB28 (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1C019AB98 (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C019B04C (RIMIDECheckScanTimeSupport.c)
 *     RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C01A054C (RIMIDEPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01B6298 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C01B6804 (RIMCmFreePointerDeviceContacts.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DD4F8 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DF808 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int128 v6; // xmm1
  PVOID v7; // rsi
  __int64 v9; // r12
  __int128 v10; // xmm0
  int v11; // eax
  _QWORD *v12; // r13
  struct _DEVICE_OBJECT *v13; // r14
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 Pool2; // rdi
  __int64 v17; // r8
  BOOL v18; // eax
  int v19; // esi
  unsigned int v20; // r13d
  char *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  PVOID v27; // r13
  const UNICODE_STRING *v28; // r12
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r14
  char v32; // r12
  int v33; // ecx
  int v34; // r14d
  _DWORD *v35; // r13
  __int64 v36; // rax
  __int64 v37; // rsi
  struct _HIDP_PREPARSED_DATA *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // edx
  int v43; // edx
  char v44; // r10
  int v45; // edx
  __int64 v46; // r12
  char *v47; // rdx
  __int64 v48; // r8
  unsigned int *v49; // r14
  __int64 *v50; // rcx
  __int64 v51; // rax
  PVOID v52; // r13
  const UNICODE_STRING *v53; // rcx
  __int64 v54; // rax
  __int128 *v55; // rax
  _QWORD *v56; // rdi
  _QWORD *v57; // rdx
  __int64 v58; // rax
  char *v59; // rdx
  char v61; // [rsp+48h] [rbp-B8h]
  PDEVICE_OBJECT v64; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  PVOID v66; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v69[3]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v70; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+D0h] [rbp-30h] BYREF
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v73[20]; // [rsp+180h] [rbp+80h] BYREF
  PVOID v74[20]; // [rsp+220h] [rbp+120h] BYREF
  __int128 v75; // [rsp+2C0h] [rbp+1C0h] BYREF

  v5 = 0;
  v6 = *(_OWORD *)(a4 + 56);
  v7 = gpLeakTrackingAllocator;
  v69[0] = *(_OWORD *)(a4 + 40);
  v9 = a4;
  v10 = *(_OWORD *)(a4 + 72);
  *(_QWORD *)&v75 = a5;
  v11 = *((_DWORD *)gpLeakTrackingAllocator + 10);
  v12 = 0LL;
  v13 = 0LL;
  v69[1] = v6;
  v14 = *(_OWORD *)(a4 + 88);
  v68 = a4;
  v69[2] = v10;
  Object = 0LL;
  v66 = 0LL;
  v64 = 0LL;
  Handle = 0LL;
  v70 = v14;
  v71 = 0LL;
  if ( (v11 & 0x63707352) == 0x63707352 && (v15 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != 1668313938 )
    {
      if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(260LL, 1304LL);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v7,
               (const void *)Pool2,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_6;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v7,
                  Pool2,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_6;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    Pool2 = 0LL;
  }
  else
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 1288LL);
  }
LABEL_6:
  v18 = Pool2 == 0;
  v19 = v18;
  if ( *(_WORD *)(v9 + 42) == 13 && *(_WORD *)(v9 + 40) == 1 && dword_1C028F6FC != 3 )
  {
    v20 = 1;
LABEL_10:
    v19 = v20;
LABEL_104:
    v46 = a1;
    goto LABEL_105;
  }
  if ( !Pool2 )
    goto LABEL_103;
  v21 = *(char **)(a2 + 1328);
  if ( v21 )
  {
    v20 = v18 + 1;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v21, v18 + 3, (unsigned __int8)v18 + 1, &Object) < 0 )
    {
      *(_QWORD *)(a2 + 1328) = 0LL;
      goto LABEL_10;
    }
    v12 = Object;
    if ( (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)((char *)Object + 296), v22, v23, &Handle, &v66, &v64) < 0 )
    {
LABEL_23:
      v20 = 1;
      goto LABEL_10;
    }
    v13 = v64;
  }
  *(_DWORD *)(Pool2 + 360) |= 8u;
  *(_QWORD *)(Pool2 + 920) = Pool2 + 912;
  *(_QWORD *)(Pool2 + 912) = Pool2 + 912;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)Pool2, (struct tagHIDDESC *)v9, v17);
  rimIDECheckConfidenceSupport(Pool2, *(struct _HIDP_PREPARSED_DATA **)(v9 + 16));
  v24 = *(_DWORD *)(Pool2 + 360);
  if ( (*(_DWORD *)(a3 + 12) & 2) != 0 )
  {
    *(_DWORD *)(Pool2 + 360) = v24 | 0x2000;
    RIMIDECheckScanTimeSupport(Pool2, *(struct _HIDP_PREPARSED_DATA **)(v9 + 16));
  }
  else
  {
    *(_DWORD *)(Pool2 + 888) = -1;
    *(_DWORD *)(Pool2 + 360) = v24 | 0x80;
  }
  *(_DWORD *)(Pool2 + 792) = 500;
  *(_QWORD *)(Pool2 + 800) = 500 * gliQpcFreq.QuadPart / 1000;
  if ( v12 )
  {
    v25 = v12[68];
    if ( v25 )
    {
      *(_WORD *)(v9 + 110) = *(_WORD *)(v25 + 110);
      *(_WORD *)(v9 + 112) = *(_WORD *)(v12[68] + 112LL);
      *(_WORD *)(v9 + 114) = *(_WORD *)(v12[68] + 114LL);
    }
    if ( v13 )
      RIMGetDeviceLocationInfo(v13, a2 + 2120);
  }
  v26 = a3;
  *(_DWORD *)(Pool2 + 768) = *(_DWORD *)(a3 + 88);
  *(_QWORD *)(Pool2 + 944) = *(_QWORD *)(a3 + 116);
  if ( !*(_QWORD *)(a2 + 216) )
    goto LABEL_54;
  v27 = gpLeakTrackingAllocator;
  v28 = (const UNICODE_STRING *)(a2 + 208);
  v29 = *(unsigned __int16 *)(a2 + 208);
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6A6E6952) != 0x6A6E6952
    || (v30 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_38:
    v31 = ExAllocatePool2(260LL, v29);
    goto LABEL_39;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v30) != 1785620818 )
  {
    if ( ++v30 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_38;
  }
  v32 = 0;
  if ( v29 < 0x1000 || (v29 & 0xFFF) != 0 )
  {
    v32 = 1;
    v29 += 16LL;
  }
  v31 = ExAllocatePool2(260LL, v29);
  if ( v31 )
  {
    memset(v73, 0, sizeof(v73));
    RtlCaptureStackBackTrace(0, 0x14u, v73, 0LL);
    if ( v32 && (unsigned __int64)(v31 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v27,
             (const void *)v31,
             (struct NSInstrumentation::CBackTrace *)v73) )
      {
        v31 += 16LL;
        goto LABEL_46;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v27,
                v31,
                (struct NSInstrumentation::CBackTrace *)v73) )
    {
      goto LABEL_46;
    }
    ExFreePoolWithTag((PVOID)v31, 0);
  }
  v31 = 0LL;
LABEL_46:
  v28 = (const UNICODE_STRING *)(a2 + 208);
LABEL_39:
  *(_QWORD *)(Pool2 + 376) = v31;
  if ( v31 )
  {
    *(_WORD *)(Pool2 + 370) = v28->Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 368), v28);
    v26 = a3;
    v9 = v68;
LABEL_54:
    v20 = 1;
    goto LABEL_55;
  }
  v9 = v68;
  v20 = 1;
  v26 = a3;
  v19 = 1;
LABEL_55:
  v33 = *(_DWORD *)(Pool2 + 24);
  v34 = v19;
  if ( ((v33 - 3) & 0xFFFFFFFA) != 0 || v33 == 8 )
  {
    if ( !RIMGetPropertyCount(Pool2, 0, v70, *(struct _HIDP_PREPARSED_DATA **)(v9 + 16)) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v42) = 0;
      }
      if ( (_BYTE)v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v41) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v42,
          v41,
          (_DWORD)gRimLog,
          2,
          1,
          10,
          (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
      }
      goto LABEL_10;
    }
    if ( v19 )
      goto LABEL_104;
    goto LABEL_90;
  }
  v35 = gpLeakTrackingAllocator;
  *(_DWORD *)(Pool2 + 808) = *(_DWORD *)(v26 + 128);
  if ( (v35[10] & 0x6A6E6952) != 0x6A6E6952 || (v36 = 0LL, !v35[11]) )
  {
LABEL_61:
    v37 = ExAllocatePool2(260LL, 40LL);
    goto LABEL_62;
  }
  while ( v35[v36] != 1785620818 )
  {
    if ( ++v36 >= (unsigned __int64)(unsigned int)v35[11] )
      goto LABEL_61;
  }
  v37 = ExAllocatePool2(260LL, 56LL);
  if ( !v37 )
    goto LABEL_71;
  memset(v74, 0, sizeof(v74));
  RtlCaptureStackBackTrace(0, 0x14u, v74, 0LL);
  if ( (unsigned __int64)(v37 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v35,
            (const void *)v37,
            (struct NSInstrumentation::CBackTrace *)v74) )
      goto LABEL_74;
    v37 += 16LL;
  }
  else if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v35,
               v37,
               (struct NSInstrumentation::CBackTrace *)v74) )
  {
LABEL_74:
    ExFreePoolWithTag((PVOID)v37, 0);
LABEL_71:
    v37 = 0LL;
  }
LABEL_62:
  *(_QWORD *)(Pool2 + 760) = v37;
  if ( !v37 )
    goto LABEL_23;
  v19 = v34;
  if ( v34 )
  {
LABEL_103:
    v20 = 1;
    goto LABEL_104;
  }
  v38 = *(struct _HIDP_PREPARSED_DATA **)(v9 + 16);
  LODWORD(v64) = 0;
  if ( (unsigned int)RIMIsParallelDevice(Pool2, v38, &v64) )
  {
    if ( !(unsigned int)RIMRetrieveLinkCollection(Pool2, *(struct _HIDP_PREPARSED_DATA **)(v9 + 16), (unsigned int)v64) )
      goto LABEL_23;
    if ( LOWORD(v69[0]) == 5 )
    {
      if ( WORD1(v69[0]) != 13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
      v20 = 1;
      *(_DWORD *)(Pool2 + 24) = 7;
      ++*(_DWORD *)(Pool2 + 768);
      *(_DWORD *)(Pool2 + 952) = 3;
    }
    else
    {
      v20 = 1;
    }
  }
  else
  {
    DbgPrintWarning("Serial Device found!");
    v20 = 1;
    if ( (*(_DWORD *)(Pool2 + 360) & 0x2000) != 0 )
      goto LABEL_10;
  }
LABEL_90:
  v43 = *(_DWORD *)(Pool2 + 360);
  if ( (v43 & 2) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v44 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v44 = 0;
    }
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = -__CFSHR__(v43, 8);
      v61 = v45;
      LOBYTE(v45) = v44;
      LOBYTE(v41) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v45,
        v41,
        (_DWORD)gRimLog,
        4,
        1,
        11,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
        *(_DWORD *)(Pool2 + 24),
        v61);
    }
  }
  v46 = a1;
  if ( (int)RIMCmAllocPointerDeviceContacts(Pool2, 1785620818LL) >= 0 )
  {
    if ( !(unsigned int)RIMPopulatePointerDevice(a1, Pool2, *(_QWORD *)(v75 + 32), (__int16 *)v69) )
      v19 = 1;
  }
  else
  {
    v19 = 1;
  }
LABEL_105:
  v49 = RIMGetQDCActivePathsData((unsigned int *)&v71);
  if ( v19 )
  {
    v52 = Object;
LABEL_131:
    if ( Pool2 )
    {
      v58 = *(_QWORD *)(Pool2 + 760);
      if ( v58 )
      {
        v47 = *(char **)(v58 + 24);
        if ( v47 )
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v47);
      }
      RIMCmFreePointerDeviceContacts(Pool2, v47, v48);
      v59 = *(char **)(Pool2 + 376);
      if ( v59 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v59);
      if ( *(_QWORD *)(Pool2 + 1056) )
        CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)Pool2);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
    }
    goto LABEL_140;
  }
  if ( *(_DWORD *)(Pool2 + 24) - 6 <= v20 )
  {
    *(_QWORD *)(a3 + 80) = 0LL;
  }
  else
  {
    v50 = *(__int64 **)(a3 + 80);
    if ( v50 )
    {
      v51 = *v50;
      goto LABEL_111;
    }
  }
  v51 = 0LL;
LABEL_111:
  *(_QWORD *)(a2 + 1344) = v51;
  if ( *(_QWORD *)(a3 + 80) )
  {
    *(_DWORD *)(a2 + 1336) = v20;
    *(_DWORD *)(a2 + 1352) = 6;
    DrvGetWDDMAdapterInfo(
      *(_QWORD *)(*(_QWORD *)(a3 + 80) + 88LL),
      v20,
      (struct _LUID *)(a2 + 1868),
      (_DWORD *)(a2 + 1876));
    rimFindMonitorForDigitizerWithQDCData(a2, v49, 0LL);
    v52 = Object;
  }
  else
  {
    v52 = Object;
    if ( Object )
    {
      v53 = (const UNICODE_STRING *)((char *)Object + 88);
      *(_DWORD *)(a2 + 1336) = 1;
      RIMReadDigitizerToMonitorMappings(v53, a2 + 1336, v48);
      rimFindMonitorForDigitizerWithQDCData(a2, v49, 0LL);
    }
  }
  if ( (*(_DWORD *)(Pool2 + 360) & 0x2000) == 0
    || *(_DWORD *)(Pool2 + 148) - *(_DWORD *)(Pool2 + 140) <= 1
    || *(_DWORD *)(Pool2 + 152) - *(_DWORD *)(Pool2 + 144) <= 1 )
  {
    if ( *(_DWORD *)(a2 + 1336) )
    {
      v54 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
      v55 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v75, v54);
    }
    else
    {
      v55 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)&v68);
    }
    v75 = *v55;
    *(_OWORD *)(Pool2 + 140) = v75;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)Pool2, 0, (__int64)v49);
  RIMIDEPopulateExtendedPointerDeviceProperties(a2, Pool2);
  if ( (unsigned int)(*(_DWORD *)(Pool2 + 24) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone()
    || LOWORD(v69[0]) == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)Pool2) < 0 )
  {
    v19 = 1;
    goto LABEL_131;
  }
  *(_DWORD *)(a2 + 200) |= 0x80u;
  *(_QWORD *)(Pool2 + 784) = -1LL;
  *(_QWORD *)(Pool2 + 16) = a2;
  *(_QWORD *)(a2 + 472) = Pool2;
  v56 = (_QWORD *)(Pool2 + 912);
  v57 = *(_QWORD **)(v46 + 440);
  if ( *v57 != v46 + 432 )
    __fastfail(3u);
  *v56 = v46 + 432;
  v56[1] = v57;
  *v57 = v56;
  *(_QWORD *)(v46 + 440) = v56;
LABEL_140:
  if ( v52 )
    ObfDereferenceObject(v52);
  if ( v66 )
    ObfDereferenceObject(v66);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData((__int64)v49);
  LOBYTE(v5) = v19 == 0;
  return v5;
}
