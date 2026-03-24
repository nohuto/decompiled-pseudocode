/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C0167958
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C01674DC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     DrvGetWDDMAdapterInfo @ 0x1C0010C20 (DrvGetWDDMAdapterInfo.c)
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C004157C (RIMIsRunningOnDesktop.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00571B0 (RIMGetDeviceObjectPointer.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0057AB4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0057C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeQDCActivePathsData @ 0x1C006DCC4 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C006E0F0 (RIMGetQDCActivePathsData.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C00ABC30 (RIMGetVirtualDesktopPhysicalSize.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00B3EE8 (HMValidateSharedHandleNoRip.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013705C (WPP_RECORDER_SF_Dd.c)
 *     RIMGetDeviceLocationInfo @ 0x1C015DD18 (RIMGetDeviceLocationInfo.c)
 *     RIMGetPropertyCount @ 0x1C015E8F4 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C015EBE0 (RIMInitializeDeadzone.c)
 *     RIMIsParallelDevice @ 0x1C015F010 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C015F930 (RIMRetrieveLinkCollection.c)
 *     RIMPopulatePointerDevice @ 0x1C0161DCC (RIMPopulatePointerDevice.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0164840 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C016494C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164C1C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165650 (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C0166DE4 (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1C0166F4C (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C01672C0 (RIMIDECheckScanTimeSupport.c)
 *     RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C016BDDC (RIMIDEPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C017FFE0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C018033C (RIMCmFreePointerDeviceContacts.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A52C4 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A7290 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int128 v5; // xmm0
  unsigned int v6; // edi
  __int128 v7; // xmm1
  __int128 v9; // xmm0
  char *v11; // r13
  __int128 v12; // xmm1
  struct _DEVICE_OBJECT *v13; // r12
  char *v14; // rbx
  BOOL v15; // esi
  char *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // ecx
  void *v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 *v34; // rax
  __int64 v35; // rax
  __int128 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v41; // rbx
  _QWORD *v42; // rdx
  __int64 v43; // [rsp+28h] [rbp-B9h]
  char *v44; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v45; // [rsp+48h] [rbp-99h]
  __int64 v46; // [rsp+50h] [rbp-91h]
  PVOID Object; // [rsp+58h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-81h] BYREF
  PDEVICE_OBJECT v49[3]; // [rsp+68h] [rbp-79h] BYREF
  _OWORD v50[3]; // [rsp+80h] [rbp-61h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-31h]
  __int128 v52; // [rsp+C0h] [rbp-21h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-11h] BYREF

  v5 = *(_OWORD *)(a4 + 40);
  v6 = 0;
  v7 = *(_OWORD *)(a4 + 56);
  v45 = a1;
  v50[0] = v5;
  v9 = *(_OWORD *)(a4 + 72);
  v50[1] = v7;
  v11 = 0LL;
  v12 = *(_OWORD *)(a4 + 88);
  v13 = 0LL;
  v46 = a3;
  v50[2] = v9;
  v52 = 0LL;
  *(_QWORD *)&v53 = a5;
  v44 = 0LL;
  Object = 0LL;
  v49[0] = 0LL;
  Handle = 0LL;
  v51 = v12;
  v14 = (char *)Win32AllocPoolZInit(0x4C8uLL, 1668313938LL);
  v15 = v14 == 0LL;
  if ( *(_DWORD *)(a4 + 40) == 851969 && !RIMIsRunningOnDesktop() )
    v15 = 1;
  if ( v15 )
    goto LABEL_9;
  v16 = *(char **)(a2 + 1336);
  if ( v16 )
  {
    v17 = RawInputManagerDeviceObjectResolveHandle(v16, 3u, 1, (PVOID *)&v44);
    v11 = v44;
    if ( v17 < 0 )
    {
      *(_QWORD *)(a2 + 1336) = 0LL;
LABEL_8:
      v15 = 1;
LABEL_9:
      v20 = v45;
      goto LABEL_10;
    }
    if ( (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(v44 + 296), v18, v19, &Handle, &Object, v49) < 0 )
      goto LABEL_8;
    v13 = v49[0];
  }
  *((_DWORD *)v14 + 78) |= 8u;
  *((_QWORD *)v14 + 109) = v14 + 864;
  *((_QWORD *)v14 + 108) = v14 + 864;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)v14, (struct tagHIDDESC *)a4);
  rimIDECheckConfidenceSupport((__int64)v14, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  v26 = *((_DWORD *)v14 + 78);
  if ( (*(_DWORD *)(v46 + 12) & 2) != 0 )
  {
    *((_DWORD *)v14 + 78) = v26 | 0x2000;
    RIMIDECheckScanTimeSupport((__int64)v14, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *((_DWORD *)v14 + 210) = -1;
    *((_DWORD *)v14 + 78) = v26 | 0x80;
  }
  *((_DWORD *)v14 + 186) = 500;
  *((_QWORD *)v14 + 94) = 500 * gliQpcFreq.QuadPart / 1000;
  if ( v11 )
  {
    v27 = *((_QWORD *)v11 + 69);
    if ( v27 )
    {
      *(_WORD *)(a4 + 110) = *(_WORD *)(v27 + 110);
      *(_WORD *)(a4 + 112) = *(_WORD *)(*((_QWORD *)v11 + 69) + 112LL);
      *(_WORD *)(a4 + 114) = *(_WORD *)(*((_QWORD *)v11 + 69) + 114LL);
    }
    if ( v13 )
      RIMGetDeviceLocationInfo(v13, a2 + 2112);
  }
  v28 = v46;
  *((_DWORD *)v14 + 180) = *(_DWORD *)(v46 + 88);
  *((_QWORD *)v14 + 112) = *(_QWORD *)(v28 + 116);
  if ( *(_QWORD *)(a2 + 216) )
  {
    v29 = Win32AllocPool(*(unsigned __int16 *)(a2 + 208), 0x6A6E6952u);
    *((_QWORD *)v14 + 41) = v29;
    if ( v29 )
    {
      *((_WORD *)v14 + 161) = *(_WORD *)(a2 + 208);
      RtlCopyUnicodeString((PUNICODE_STRING)v14 + 20, (PCUNICODE_STRING)(a2 + 208));
      v28 = v46;
    }
    else
    {
      v28 = v46;
      v15 = 1;
    }
  }
  v30 = *((_DWORD *)v14 + 6);
  if ( ((v30 - 3) & 0xFFFFFFFA) != 0 || v30 == 8 )
  {
    if ( !RIMGetPropertyCount((__int64)v14, 0, v51, *(_QWORD *)(a4 + 16)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_((_DWORD)gRimLog, 2, 1, 10, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
      v15 = 1;
    }
    if ( v15 )
      goto LABEL_9;
  }
  else
  {
    *((_DWORD *)v14 + 190) = *(_DWORD *)(v28 + 128);
    v31 = Win32AllocPoolZInit(0x28uLL, 1785620818LL);
    *((_QWORD *)v14 + 89) = v31;
    if ( !v31 )
      v15 = 1;
    if ( v15 )
      goto LABEL_9;
    v32 = *(_QWORD *)(a4 + 16);
    LODWORD(v44) = 0;
    if ( (unsigned int)RIMIsParallelDevice((__int64)v14, v32, (unsigned int *)&v44) )
    {
      if ( !(unsigned int)RIMRetrieveLinkCollection(
                            (__int64)v14,
                            *(struct _HIDP_PREPARSED_DATA **)(a4 + 16),
                            (unsigned int)v44) )
      {
LABEL_37:
        v15 = 1;
        goto LABEL_9;
      }
      if ( LOWORD(v50[0]) == 5 )
      {
        if ( WORD1(v50[0]) != 13 )
        {
          LODWORD(v44) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 303);
        }
        ++*((_DWORD *)v14 + 180);
        *((_DWORD *)v14 + 6) = 7;
        *((_DWORD *)v14 + 226) = 3;
      }
    }
    else
    {
      DbgPrintWarning("Serial Device found!");
      if ( (*((_DWORD *)v14 + 78) & 0x2000) != 0 )
        goto LABEL_37;
    }
  }
  v33 = *((_DWORD *)v14 + 78);
  if ( (v33 & 2) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v43) = *((_DWORD *)v14 + 6);
    WPP_RECORDER_SF_Dd(
      (__int64)gRimLog,
      4u,
      1u,
      0xBu,
      (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
      v43,
      -__CFSHR__(v33, 8));
  }
  if ( (int)RIMCmAllocPointerDeviceContacts(v14, 1785620818LL) < 0 )
    goto LABEL_37;
  v20 = v45;
  if ( !(unsigned int)RIMPopulatePointerDevice(v45, (__int64)v14, *(_QWORD *)(v53 + 32), (__int16 *)v50) )
    v15 = 1;
LABEL_10:
  v23 = RIMGetQDCActivePathsData((unsigned int *)&v52);
  if ( v15 )
    goto LABEL_74;
  v24 = v46;
  if ( (unsigned int)(*((_DWORD *)v14 + 6) - 6) <= 1 )
  {
    *(_QWORD *)(v46 + 80) = 0LL;
LABEL_13:
    v25 = 0LL;
    goto LABEL_14;
  }
  v34 = *(__int64 **)(v46 + 80);
  if ( !v34 )
    goto LABEL_13;
  v25 = *v34;
LABEL_14:
  *(_QWORD *)(a2 + 1352) = v25;
  if ( *(_QWORD *)(v24 + 80) )
  {
    *(_DWORD *)(a2 + 1344) = 1;
    *(_DWORD *)(a2 + 1360) = 6;
    DrvGetWDDMAdapterInfo(
      *(_QWORD *)(*(_QWORD *)(v24 + 80) + 240LL),
      1,
      (struct _LUID *)(a2 + 1876),
      (_DWORD *)(a2 + 1884));
LABEL_61:
    rimFindMonitorForDigitizerWithQDCData(a2, v23, 0LL);
    goto LABEL_62;
  }
  if ( v11 )
  {
    *(_DWORD *)(a2 + 1344) = 1;
    RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)(v11 + 88), a2 + 1344);
    goto LABEL_61;
  }
LABEL_62:
  if ( (*((_DWORD *)v14 + 78) & 0x2000) == 0
    || *((_DWORD *)v14 + 37) - *((_DWORD *)v14 + 35) <= 1
    || *((_DWORD *)v14 + 38) - *((_DWORD *)v14 + 36) <= 1 )
  {
    if ( *(_DWORD *)(a2 + 1344) )
    {
      v35 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1352));
      v36 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v53, v35);
    }
    else
    {
      v36 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)v49);
    }
    v53 = *v36;
    *(_OWORD *)(v14 + 140) = v53;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v14, 0, (__int64)v23);
  RIMIDEPopulateExtendedPointerDeviceProperties(a2, v14);
  if ( (unsigned int)(*((_DWORD *)v14 + 6) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone()
    || LOWORD(v50[0]) == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v14) < 0 )
  {
    v15 = 1;
LABEL_74:
    if ( v14 )
    {
      v37 = *((_QWORD *)v14 + 89);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 24);
        if ( v38 )
          Win32FreePool(v38);
      }
      RIMCmFreePointerDeviceContacts(v14, v21, v22);
      v39 = *((_QWORD *)v14 + 41);
      if ( v39 )
        Win32FreePool(v39);
      if ( *((_QWORD *)v14 + 125) )
        CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v14);
      Win32FreePool((__int64)v14);
    }
    goto LABEL_83;
  }
  *(_DWORD *)(a2 + 200) |= 0x80u;
  *((_QWORD *)v14 + 92) = -1LL;
  *((_QWORD *)v14 + 2) = a2;
  *(_QWORD *)(a2 + 480) = v14;
  v41 = v14 + 864;
  v42 = *(_QWORD **)(v20 + 440);
  if ( *v42 != v20 + 432 )
    __fastfail(3u);
  *v41 = v20 + 432;
  v41[1] = v42;
  *v42 = v41;
  *(_QWORD *)(v20 + 440) = v41;
LABEL_83:
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData((__int64)v23);
  LOBYTE(v6) = !v15;
  return v6;
}
