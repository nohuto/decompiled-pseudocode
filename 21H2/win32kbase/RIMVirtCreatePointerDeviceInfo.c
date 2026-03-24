/*
 * XREFs of RIMVirtCreatePointerDeviceInfo @ 0x1C0160150
 * Callers:
 *     RIMVirtAllocateHidDesc @ 0x1C0162908 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C004157C (RIMIsRunningOnDesktop.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     RIMGetDeviceParent @ 0x1C006CE50 (RIMGetDeviceParent.c)
 *     RIMFreeQDCActivePathsData @ 0x1C006DCC4 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C006E0F0 (RIMGetQDCActivePathsData.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00AC634 (RimDeviceTypeToRimInputTypeString.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00B3EE8 (HMValidateSharedHandleNoRip.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C015AEE0 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C015B66C (rimSetupPalmTelemetry.c)
 *     RIMFreePointerDevice @ 0x1C015D6F4 (RIMFreePointerDevice.c)
 *     RIMInitializeDeadzone @ 0x1C015EBE0 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C015EDAC (RIMIsDeviceExcluded.c)
 *     RIMVirtAssignTouchType @ 0x1C015FF2C (RIMVirtAssignTouchType.c)
 *     RIMVirtGetDeviceButtons @ 0x1C0160AB4 (RIMVirtGetDeviceButtons.c)
 *     RIMVirtGetProductString @ 0x1C0160C78 (RIMVirtGetProductString.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0164840 (RIMGetMonitorPhysicalSize.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164C1C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165650 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C017FFE0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMValidatePTPProperties @ 0x1C0181DB4 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A52C4 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C01D043C (ApiSetRetrieveCalibrationData.c)
 */

__int64 RIMVirtCreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int16 *a4, ...)
{
  __int16 *v6; // rsi
  char *v7; // rax
  __int64 v8; // rbx
  __int64 v10; // rdi
  _QWORD *v11; // r12
  __int64 v12; // rdx
  int ProductString; // r15d
  _UNKNOWN **v14; // rdx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int16 v19; // cx
  int v20; // ecx
  int v21; // esi
  int v22; // edx
  __int64 v23; // rcx
  _DWORD *v24; // rax
  struct _UNICODE_STRING *v25; // r9
  __int64 v26; // r8
  _DWORD *v27; // rdx
  _WORD *v28; // rcx
  __int64 v29; // r10
  __int16 v30; // ax
  int Buffer; // eax
  struct _UNICODE_STRING v32; // xmm1
  struct _UNICODE_STRING v33; // xmm0
  int v34; // eax
  unsigned int v35; // edx
  unsigned int *v36; // rax
  unsigned int v37; // ecx
  unsigned int v38; // edx
  __int64 v39; // rax
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  int v42; // eax
  __int128 v43; // xmm0
  struct _UNICODE_STRING v44; // xmm1
  struct _UNICODE_STRING v45; // xmm0
  struct _UNICODE_STRING v46; // xmm1
  struct _UNICODE_STRING v47; // xmm0
  struct _UNICODE_STRING v48; // xmm1
  struct _UNICODE_STRING v49; // xmm0
  int v50; // ecx
  int v51; // r8d
  struct _UNICODE_STRING v52; // xmm1
  int v53; // eax
  __int64 v54; // xmm0_8
  int v55; // ecx
  int v56; // edx
  __int64 v57; // r8
  _QWORD *v58; // rdx
  int v59; // edx
  struct _UNICODE_STRING v60[8]; // [rsp+48h] [rbp-89h] BYREF
  unsigned int *v61; // [rsp+C8h] [rbp-9h]
  const WCHAR *v62; // [rsp+D0h] [rbp-1h] BYREF
  __int128 v63[4]; // [rsp+D8h] [rbp+7h] BYREF
  unsigned int v64; // [rsp+138h] [rbp+67h]
  const WCHAR *v66; // [rsp+148h] [rbp+77h] BYREF
  va_list va; // [rsp+148h] [rbp+77h]
  __int64 v68; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v66 = va_arg(va1, const WCHAR *);
  v68 = va_arg(va1, _QWORD);
  v64 = 0;
  v61 = 0LL;
  v63[0] = 0LL;
  v6 = a4;
  v7 = (char *)Win32AllocPoolZInit(0x4C8uLL, 1668313938LL);
  v8 = (__int64)v7;
  if ( !v7 )
    return 3221225628LL;
  v10 = v68;
  v11 = v7 + 864;
  v12 = v68;
  *((_DWORD *)v7 + 180) = *(_DWORD *)(v68 + 1096);
  *((_QWORD *)v7 + 109) = v7 + 864;
  *((_QWORD *)v7 + 108) = v7 + 864;
  ProductString = RIMVirtGetProductString(v7, v12);
  v14 = &WPP_RECORDER_INITIALIZED;
  if ( ProductString < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v14, 1, 44, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
    if ( (unsigned int)dword_1C024A170 > 5 && tlgKeywordOn((__int64)&dword_1C024A170, 0x400000000000LL) )
    {
      v15 = *(unsigned __int8 *)(a2 + 48);
      v66 = L"Failed to retrieve productString";
      v62 = *(const WCHAR **)(a2 + 216);
      *(_QWORD *)&v60[0].Length = RimDeviceTypeToRimInputTypeString(a2, v15);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v16,
        byte_1C021B7BB,
        v17,
        v18,
        (const WCHAR **)v60,
        &v62,
        (const WCHAR **)va);
    }
  }
  *(_OWORD *)(a2 + 2112) = *(_OWORD *)(v10 + 1316);
  *(_OWORD *)(a2 + 2128) = *(_OWORD *)(v10 + 1332);
  *(_OWORD *)(a2 + 2144) = *(_OWORD *)(v10 + 1348);
  *(_OWORD *)(a2 + 2160) = *(_OWORD *)(v10 + 1364);
  *(_OWORD *)(a2 + 2176) = *(_OWORD *)(v10 + 1380);
  *(_OWORD *)(a2 + 2192) = *(_OWORD *)(v10 + 1396);
  *(_OWORD *)(a2 + 2208) = *(_OWORD *)(v10 + 1412);
  *(_OWORD *)(a2 + 2224) = *(_OWORD *)(v10 + 1428);
  *(_QWORD *)(a2 + 2240) = *(_QWORD *)(v10 + 1444);
  v19 = *v6;
  v60[0] = *(struct _UNICODE_STRING *)(v8 + 320);
  if ( RIMIsDeviceExcluded(v19, v60) )
    goto LABEL_17;
  v20 = *(_DWORD *)(a1 + 84);
  v21 = 1;
  if ( (v20 & 4) != 0 )
  {
    if ( *a4 == 2 )
    {
      *(_DWORD *)(v8 + 24) = 5;
      rimSetupPalmTelemetry(a1);
      if ( (int)RIMInitializeDeadzone() < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v22, 1, 45, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
        }
        gDeviceArbitrationType = 1;
      }
      goto LABEL_16;
    }
    if ( *a4 == 1 )
    {
      *(_DWORD *)(v8 + 24) = 6;
      if ( RIMIsRunningOnDesktop() )
        goto LABEL_16;
      goto LABEL_55;
    }
  }
  if ( (v20 & 0x18) != 0 && (unsigned __int16)(*a4 - 4) <= 1u )
  {
    *(_DWORD *)(v8 + 24) = 1;
    ProductString = RIMVirtAssignTouchType(v8, (__int64)a4, v10);
    if ( ProductString == -1073741668 )
      goto LABEL_61;
    if ( *a4 == 5 )
    {
      v64 = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 24) = 7;
    }
    v60[1] = *(struct _UNICODE_STRING *)(v10 + 436);
    v60[2] = *(struct _UNICODE_STRING *)(v10 + 452);
    v52 = v60[2];
    *(_QWORD *)&v60[3].Length = *(_QWORD *)(v10 + 468);
    v53 = *(_DWORD *)(v10 + 476);
    *(struct _UNICODE_STRING *)(v8 + 268) = v60[1];
    v54 = *(_QWORD *)&v60[3].Length;
    *(struct _UNICODE_STRING *)(v8 + 284) = v52;
    *(_QWORD *)(v8 + 300) = v54;
    *(_DWORD *)(v8 + 308) = v53;
    v55 = *(_DWORD *)(a1 + 84);
    if ( (v55 & 4) != 0 && (unsigned int)(*(_DWORD *)(v8 + 24) - 5) <= 1 )
      v21 = 0;
    if ( (v55 & 8) != 0 && *(_DWORD *)(v8 + 24) == 7 )
      v21 = 0;
    if ( (v55 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v8 + 24) - 1) <= 3 )
      v21 = 0;
    if ( !v21 )
    {
      *(_DWORD *)(v8 + 720) = *(_DWORD *)(v10 + 1096);
      *(_DWORD *)(v8 + 904) = *(_DWORD *)(v10 + 1248);
    }
    ProductString = 0;
    goto LABEL_54;
  }
  if ( (v20 & 0x20) != 0 && (*(_DWORD *)(a2 + 184) & 0x4000) != 0 )
  {
    v21 = 0;
LABEL_54:
    if ( v21 != 1 )
    {
LABEL_16:
      v6 = a4;
LABEL_17:
      v23 = 6LL;
      *(_DWORD *)(v8 + 312) ^= (*(_DWORD *)(v8 + 312) ^ (*(_DWORD *)(v10 + 508) << 7)) & 0x80;
      *(_DWORD *)(v8 + 840) = *(_DWORD *)(v10 + 1200);
      v24 = (_DWORD *)(v8 + 32);
      do
      {
        *v24 = -1;
        v24 += 4;
        --v23;
      }
      while ( v23 );
      if ( (int)RIMCmAllocPointerDeviceContacts(v8, 2020635474LL) >= 0 )
      {
        v25 = (struct _UNICODE_STRING *)(v8 + 28);
        v26 = v8 + 352;
        v27 = (_DWORD *)(v10 + 212);
        v28 = (_WORD *)(v10 + 672);
        v29 = 6LL;
        do
        {
          *(_DWORD *)&v60[1].Length = (unsigned __int16)*(v28 - 4);
          *(_DWORD *)(&v60[1].MaximumLength + 1) = *((_DWORD *)v28 - 1);
          v30 = *v28;
          v28 += 32;
          LOWORD(v60[1].Buffer) = v30;
          WORD1(v60[1].Buffer) = *(v28 - 30);
          HIDWORD(v60[1].Buffer) = (unsigned __int16)*(v28 - 28);
          *(_DWORD *)&v60[2].Length = *((_DWORD *)v28 - 13);
          *(_DWORD *)(&v60[2].MaximumLength + 1) = (unsigned __int16)*(v28 - 24);
          v60[2].Buffer = *(PWSTR *)(v28 - 22);
          v60[3] = *(struct _UNICODE_STRING *)(v28 - 18);
          *(_QWORD *)&v60[4].Length = *(_QWORD *)(v28 - 10);
          LODWORD(v60[4].Buffer) = (unsigned __int16)*(v28 - 6);
          Buffer = (int)v60[4].Buffer;
          v32 = v60[2];
          *(struct _UNICODE_STRING *)v26 = v60[1];
          v33 = v60[3];
          *(struct _UNICODE_STRING *)(v26 + 16) = v32;
          *(_QWORD *)&v32.Length = *(_QWORD *)&v60[4].Length;
          *(struct _UNICODE_STRING *)(v26 + 32) = v33;
          *(_QWORD *)(v26 + 48) = *(_QWORD *)&v32.Length;
          *(_DWORD *)(v26 + 56) = Buffer;
          v26 += 60LL;
          v60[0].Length = *((_WORD *)v27 - 4);
          v60[0].MaximumLength = *((_WORD *)v27 - 2);
          v34 = *v27;
          v27 += 5;
          *(_DWORD *)(&v60[0].MaximumLength + 1) = v34;
          v60[0].Buffer = (PWSTR)*((_QWORD *)v27 - 2);
          *v25++ = v60[0];
          --v29;
        }
        while ( v29 );
        *(_BYTE *)(v8 + 776) = *(_BYTE *)(v8 + 356);
        *(_OWORD *)(v8 + 140) = *(_OWORD *)(v10 + 340);
        *(_OWORD *)(v8 + 124) = *(_OWORD *)(v10 + 324);
        v35 = *(_DWORD *)(v8 + 312) & 0xFFFF7FFF | (*(_DWORD *)(v10 + 540) != 0 ? 0x8000 : 0);
        *(_DWORD *)(v8 + 312) = v35;
        *(_DWORD *)(v8 + 312) = v35 & 0xFFFEFFFF | (*(_DWORD *)(v10 + 544) != 0 ? 0x10000 : 0);
        *(_DWORD *)(v8 + 724) = *(_DWORD *)(v10 + 1100);
        v36 = RIMGetQDCActivePathsData((unsigned int *)v63);
        v37 = *(_DWORD *)(v8 + 24) - 6;
        v61 = v36;
        v11 = (_QWORD *)(v8 + 864);
        if ( v37 > 1 )
        {
          *(_DWORD *)(a2 + 1344) = 1;
          *(_QWORD *)(a2 + 1876) = *(_QWORD *)(v10 + 1304);
          *(_DWORD *)(a2 + 1888) = *(_DWORD *)(v10 + 1312);
          LODWORD(v66) = 0;
          rimFindMonitorForDigitizerWithQDCData(a2, v36, (const WCHAR **)va);
          if ( *v6 == 4 )
          {
            v38 = *(_DWORD *)(v8 + 312) & 0xFFFFFEFF | (*(_DWORD *)(v10 + 512) != 0 ? 0x100 : 0);
            *(_DWORD *)(v8 + 312) = v38;
            *(_DWORD *)(v8 + 312) = v38 & 0xFFFFFF7F | (*(_DWORD *)(v10 + 508) != 0 ? 0x80 : 0);
          }
        }
        if ( *(_DWORD *)(v8 + 148) - *(_DWORD *)(v8 + 140) <= 1 || *(_DWORD *)(v8 + 152) - *(_DWORD *)(v8 + 144) <= 1 )
        {
          v39 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1352));
          *(_OWORD *)(v8 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(v60, v39);
        }
        memset(&v60[1], 0, 0x70uLL);
        v40 = *(_OWORD *)(v10 + 376);
        v41 = *(_OWORD *)(v10 + 392);
        *(_DWORD *)&v60[1].Length = *(_DWORD *)(v10 + 356);
        v42 = *(_DWORD *)(v10 + 424);
        *(_OWORD *)(&v60[2].MaximumLength + 1) = v40;
        *(_DWORD *)(&v60[5].MaximumLength + 1) = v42;
        v43 = *(_OWORD *)(v10 + 408);
        *(_OWORD *)(&v60[3].MaximumLength + 1) = v41;
        v44 = v60[2];
        *(_OWORD *)(&v60[4].MaximumLength + 1) = v43;
        *(struct _UNICODE_STRING *)(v8 + 156) = v60[1];
        v45 = v60[3];
        *(struct _UNICODE_STRING *)(v8 + 172) = v44;
        v46 = v60[4];
        *(struct _UNICODE_STRING *)(v8 + 188) = v45;
        v47 = v60[5];
        *(struct _UNICODE_STRING *)(v8 + 204) = v46;
        v48 = v60[6];
        *(struct _UNICODE_STRING *)(v8 + 220) = v47;
        v49 = v60[7];
        *(struct _UNICODE_STRING *)(v8 + 236) = v48;
        *(struct _UNICODE_STRING *)(v8 + 252) = v49;
        RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v8);
        if ( *(_DWORD *)(v8 + 24) == 7
          && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v8) < 0 )
        {
          ProductString = -1073741668;
        }
        else
        {
          ProductString = RIMVirtGetDeviceButtons(v50, v8, v51, (_DWORD)v6, v10);
          if ( ProductString >= 0 )
          {
            if ( *(_DWORD *)(v8 + 24) != 7 )
            {
              v60[0] = *(struct _UNICODE_STRING *)(a2 + 208);
              ApiSetRetrieveCalibrationData(v8, v60);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v56) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v56, 1, 46, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
          }
        }
      }
      goto LABEL_61;
    }
  }
LABEL_55:
  ProductString = -1073741808;
LABEL_61:
  RIMFreeQDCActivePathsData((__int64)v61);
  if ( ProductString < 0 )
    goto LABEL_79;
  if ( *(_DWORD *)(v8 + 24) == 7 )
    ProductString = RIMValidatePTPProperties(v64, v8);
  if ( ProductString < 0 )
  {
LABEL_79:
    if ( *(_QWORD *)(v8 + 736) )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4620);
    RIMFreePointerDevice(a1, v8);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(v8 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(a1 + 532) += *(_DWORD *)(v8 + 720);
      *(_DWORD *)(v8 + 312) |= 0x400u;
      if ( *(_DWORD *)(a1 + 532) > 0xA00u )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4601);
    }
    *(_DWORD *)(v8 + 744) = 100;
    *(_QWORD *)(v8 + 752) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 480) = v8;
    *(_QWORD *)(v8 + 16) = a2;
    v58 = *(_QWORD **)(a1 + 440);
    if ( *v58 != a1 + 432 )
      __fastfail(3u);
    v11[1] = v58;
    *v11 = a1 + 432;
    *v58 = v11;
    *(_QWORD *)(a1 + 440) = v11;
    *(_QWORD *)(v8 + 736) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(0LL, a2, v57)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v59) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v59, 1, 47, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
  }
  return (unsigned int)ProductString;
}
