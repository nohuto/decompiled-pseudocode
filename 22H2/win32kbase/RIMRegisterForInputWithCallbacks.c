/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C00893D0
 * Callers:
 *     RIMRegisterForInput @ 0x1C0089360 (RIMRegisterForInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0053D04 (RIMDiscoverDevicesOfInputType.c)
 *     RIMUnregisterForInput @ 0x1C0054610 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00551A0 (RawInputManagerObjectResolveHandle.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0056D50 (rimConvertUserToKernelEventHandle.c)
 *     RawInputManagerObjectCreate @ 0x1C0057E28 (RawInputManagerObjectCreate.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0059230 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     Win32AllocPoolNonPaged @ 0x1C005C490 (Win32AllocPoolNonPaged.c)
 *     rimCheckForRegistrationConflicts @ 0x1C00ABF8C (rimCheckForRegistrationConflicts.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00AC470 (RIMIDEAdoptOrphanedRimDevs.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C00ADE10 (rimConvertUserToKernelTimerHandle.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C00AECF4 (RIMCheckPressureDefaultSetting.c)
 *     CreateKernelSemaphore @ 0x1C00AFED0 (CreateKernelSemaphore.c)
 *     ?RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z @ 0x1C00B6000 (-RawInputManagerObject@RIM@InputTraceLogging@@SAXPEBU0@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C01584C8 (WPP_RECORDER_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C0172F8C (RIMDiscoverSpecificDevice.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        unsigned int a1,
        ULONG64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        HANDLE *a14)
{
  int v15; // edx
  int v16; // r9d
  __int64 KernelSemaphore; // r14
  unsigned int v19; // r12d
  __int64 v20; // rax
  char *v21; // rcx
  int v22; // r14d
  int v23; // r12d
  int v24; // eax
  bool v25; // sf
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  char *v30; // rsi
  unsigned int v31; // r8d
  char *v32; // rdx
  GUID **v33; // rcx
  char *v34; // r9
  _DWORD *v35; // r10
  signed __int64 v36; // r11
  signed __int64 v37; // r12
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  BOOL v41; // edx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // r10d
  _DWORD *v46; // r8
  struct _UNICODE_STRING *v47; // rax
  ULONG64 v48; // rax
  int v49; // ecx
  WCHAR *v50; // rdx
  ULONG64 v51; // r8
  _BYTE **v52; // rax
  __int64 v53; // rcx
  __int64 *v54; // rbx
  _QWORD *v55; // rdx
  void *v56; // rdx
  __int64 *v57; // rbx
  __int64 v58; // r12
  int TableContext; // [rsp+20h] [rbp-118h]
  char v60; // [rsp+40h] [rbp-F8h]
  int v61; // [rsp+48h] [rbp-F0h]
  int v62; // [rsp+50h] [rbp-E8h]
  unsigned int v63; // [rsp+54h] [rbp-E4h]
  ULONG64 v64; // [rsp+58h] [rbp-E0h]
  PVOID Object; // [rsp+60h] [rbp-D8h] BYREF
  HANDLE v66; // [rsp+68h] [rbp-D0h] BYREF
  HANDLE *v67; // [rsp+70h] [rbp-C8h]
  __int64 v68; // [rsp+78h] [rbp-C0h]
  HANDLE v69; // [rsp+80h] [rbp-B8h] BYREF
  UNICODE_STRING SourceString; // [rsp+88h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-A0h] BYREF
  unsigned int v72; // [rsp+A8h] [rbp-90h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+B0h] [rbp-88h]
  HANDLE Handle; // [rsp+B8h] [rbp-80h] BYREF
  HANDLE v75; // [rsp+C0h] [rbp-78h] BYREF
  void *v76; // [rsp+C8h] [rbp-70h]
  __int64 v77; // [rsp+D0h] [rbp-68h]
  ULONG64 v78; // [rsp+D8h] [rbp-60h]
  __int64 v79; // [rsp+E0h] [rbp-58h]
  char v80; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v81; // [rsp+F0h] [rbp-48h]

  v77 = a4;
  v63 = a3;
  v64 = a2;
  v78 = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  v76 = a6;
  v79 = a7;
  *(_QWORD *)&SourceString.Length = a8;
  v67 = a14;
  Handle = (HANDLE)-1LL;
  v75 = (HANDLE)-1LL;
  v69 = (HANDLE)-1LL;
  v66 = (HANDLE)-1LL;
  v81 = 0LL;
  v60 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 11, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    a2 = v64;
    a3 = v63;
  }
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, a2, 1, 12, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, a1);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v16 = 13;
LABEL_19:
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, v16, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || a3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      WPP_RECORDER_SF_qDd(a1, a2, a3, a4, TableContext, a2, a1, a3);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v16 = 15;
      goto LABEL_19;
    }
  }
  else if ( a3 )
  {
    if ( (a1 & 0x20) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_Dd((_DWORD)gRimLog, a2, 1, 16, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, a1, a3);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v16 = 17;
      goto LABEL_19;
    }
    if ( a13 )
    {
      if ( (unsigned __int8)rimCheckForRegistrationConflicts(a1) )
        return 3221225506LL;
      v60 = 1;
    }
  }
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v68 = KernelSemaphore;
  if ( KernelSemaphore )
  {
    v19 = 0;
    Object = &v80;
    while ( 1 )
    {
      v20 = Win32AllocPoolNonPaged(104LL, 0x63704152u);
      v21 = (char *)Object;
      *(_QWORD *)Object = v20;
      if ( !v20 )
        break;
      ++v19;
      Object = v21 + 8;
      if ( v19 > 2 )
      {
        v22 = rimConvertUserToKernelEventHandle(v76, &Handle);
        v23 = rimConvertUserToKernelTimerHandle(v79, &v75);
        if ( *(_QWORD *)&SourceString.Length )
          v24 = rimConvertUserToKernelTimerHandle(*(_QWORD *)&SourceString.Length, &v69);
        else
          v24 = 0;
        v25 = v22 < 0;
        if ( v22 >= 0 )
        {
          if ( v23 >= 0 && v24 >= 0 )
          {
            KeEnterCriticalRegion();
            v22 = RawInputManagerObjectCreate(a13 != 0, v26, v27, v28, &v66);
            KeLeaveCriticalRegion();
            v29 = 3LL;
            if ( v22 < 0 )
              goto LABEL_99;
            Object = 0LL;
            v22 = RawInputManagerObjectResolveHandle((char *)v66, 3u, 1, &Object);
            v61 = v22;
            if ( v22 < 0 )
              goto LABEL_99;
            v30 = (char *)Object;
            *((_QWORD *)Object + 9) = v66;
            *((_WORD *)v30 + 40) = 0;
            v30[82] = 0;
            *((_DWORD *)v30 + 21) = a1;
            *((_QWORD *)v30 + 15) = a5;
            *((_QWORD *)v30 + 13) = 0LL;
            *((_QWORD *)v30 + 14) = 0LL;
            *((_QWORD *)v30 + 71) = 0LL;
            *((_QWORD *)v30 + 72) = 0LL;
            *((_QWORD *)v30 + 53) = 0LL;
            *((_DWORD *)v30 + 102) = 0;
            *((_QWORD *)v30 + 52) = 0LL;
            *((_QWORD *)v30 + 55) = v30 + 432;
            *((_QWORD *)v30 + 54) = v30 + 432;
            *((_OWORD *)v30 + 28) = 0LL;
            *((_OWORD *)v30 + 29) = 0LL;
            *((_QWORD *)v30 + 57) = v30 + 448;
            *((_QWORD *)v30 + 56) = v30 + 448;
            *((_OWORD *)v30 + 30) = 0LL;
            *((_OWORD *)v30 + 31) = 0LL;
            RIMCheckPressureDefaultSetting(v30);
            *((_DWORD *)v30 + 216) = a13 == 0;
            *((_QWORD *)v30 + 109) = v68;
            *((_DWORD *)v30 + 220) = 0;
            v68 = 0LL;
            v31 = 0;
            v32 = &v80;
            v33 = &off_1C020A1C0;
            v34 = v30 + 248;
            v35 = v30 + 296;
            v36 = v30 - (char *)&off_1C020A1C0;
            v37 = v30 - &v80;
            do
            {
              *(_OWORD *)((char *)v33 + v36 + 128) = *(_OWORD *)v33;
              *(_OWORD *)((char *)v33 + v36 + 144) = *((_OWORD *)v33 + 1);
              *(_QWORD *)&v32[v37 + 224] = 0LL;
              *(_QWORD *)&v32[v37 + 312] = *(_QWORD *)v32;
              *v35 = 0;
              *(_QWORD *)v32 = 0LL;
              *((_DWORD *)v34 + 2) = v31;
              *(_QWORD *)v34 = v30;
              ++v31;
              ++v35;
              v33 += 4;
              v32 += 8;
              v34 += 16;
            }
            while ( v31 <= 2 );
            *((_QWORD *)v30 + 42) = v75;
            *((_QWORD *)v30 + 43) = v69;
            *((_DWORD *)v30 + 88) = a9;
            *((_QWORD *)v30 + 45) = 0LL;
            *((_QWORD *)v30 + 46) = 0LL;
            *((_QWORD *)v30 + 47) = 0LL;
            v29 = 3LL;
            if ( a9 && v69 != (HANDLE)-1LL )
            {
              *((_QWORD *)v30 + 45) = gliQpcFreq.QuadPart * a9 / 1000;
              *((_QWORD *)v30 + 46) = gliQpcFreq.QuadPart * 20 * a9 / 1000;
            }
            *((_QWORD *)v30 + 50) = a10;
            *((_QWORD *)v30 + 48) = Handle;
            v30[392] = v60;
            v30[393] = 0;
            v30[584] = 0;
            *((_QWORD *)v30 + 89) = 0LL;
            *((_QWORD *)v30 + 88) = 500 * gliQpcFreq.QuadPart / 1000;
            *((_QWORD *)v30 + 92) = 5000 * gliQpcFreq.QuadPart / 1000;
            *((_QWORD *)v30 + 79) = a11;
            *((_QWORD *)v30 + 80) = a12;
            v30[512] = 0;
            RawInputManagerObject::bTouchInputAllowed = 1;
            v30[513] = 0;
            KeQueryPerformanceCounter((PLARGE_INTEGER)v30 + 65);
            *((_QWORD *)v30 + 66) = 1LL;
            *((_QWORD *)v30 + 76) = 0LL;
            *((_QWORD *)v30 + 68) = v30 + 536;
            *((_QWORD *)v30 + 67) = v30 + 536;
            *((_QWORD *)v30 + 70) = v30 + 552;
            *((_QWORD *)v30 + 69) = v30 + 552;
            *((_QWORD *)v30 + 75) = v30 + 592;
            *((_QWORD *)v30 + 74) = v30 + 592;
            *((_QWORD *)v30 + 78) = v30 + 616;
            *((_QWORD *)v30 + 77) = v30 + 616;
            *((_QWORD *)v30 + 112) = v30 + 888;
            *((_QWORD *)v30 + 111) = v30 + 888;
            RtlInitializeGenericTableAvl(
              (PRTL_AVL_TABLE)(v30 + 744),
              rimUserMemAllocNodeCompare,
              rimUserMemAllocNodeAlloc,
              (PRTL_AVL_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
              0LL);
            v38 = v63;
            *((_DWORD *)v30 + 22) = v63;
            if ( v63 )
            {
              if ( v64 )
              {
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 442LL);
                v38 = v63;
              }
              *(_QWORD *)&SourceString.Length = v38;
              v39 = 4 * v38;
              if ( v39 > 0xFFFFFFFF )
              {
                v22 = -1073741811;
                v61 = -1073741811;
                goto LABEL_59;
              }
              LODWORD(v76) = v39;
              v40 = Win32AllocPool((unsigned int)v39, 0x70617552u);
              *((_QWORD *)v30 + 12) = v40;
              v41 = a13 != 0;
              if ( v40 )
              {
                if ( !a13 )
                {
                  v42 = 0LL;
                  v43 = *(_QWORD *)&SourceString.Length;
                  v44 = v77;
                  do
                  {
                    *(_DWORD *)(v42 + *((_QWORD *)v30 + 12)) = *(_DWORD *)(v42 + v44);
                    v42 += 4LL;
                    --v43;
                  }
                  while ( v43 );
                  goto LABEL_59;
                }
                v45 = 0;
                v72 = 0;
                while ( v45 < v63 )
                {
                  v46 = (_DWORD *)(v77 + 4LL * v45);
                  if ( (unsigned __int64)v46 >= MmUserProbeAddress )
                    v46 = (_DWORD *)MmUserProbeAddress;
                  *(_DWORD *)(*((_QWORD *)v30 + 12) + 4LL * v45++) = *v46;
                  v72 = v45;
                }
                v47 = (struct _UNICODE_STRING *)v64;
                v41 = a13 != 0;
LABEL_61:
                if ( !v47 )
                {
                  if ( v22 >= 0 && !v30[392] )
                    RIMDiscoverDevicesOfInputType((unsigned int *)v30);
                  RIMIDEAdoptOrphanedRimDevs(v30);
                  goto LABEL_94;
                }
                SourceString = 0LL;
                p_DestinationString = 0LL;
                DestinationString = 0LL;
                if ( !v41 )
                {
                  p_DestinationString = v47;
                  goto LABEL_81;
                }
                v48 = v64;
                if ( v64 >= MmUserProbeAddress )
                  v48 = MmUserProbeAddress;
                v49 = *(_DWORD *)v48;
                v62 = *(_DWORD *)v48;
                *(_DWORD *)&SourceString.Length = *(_DWORD *)v48;
                v50 = *(WCHAR **)(v48 + 8);
                SourceString.Buffer = v50;
                if ( ((unsigned __int8)v50 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v51 = (ULONG64)v50 + (unsigned __int16)v49 + 2;
                v52 = (_BYTE **)MmUserProbeAddress;
                if ( v51 >= MmUserProbeAddress || (unsigned __int16)v49 > HIWORD(v62) )
                {
LABEL_72:
                  if ( (v49 & 1) != 0 )
                    goto LABEL_73;
                }
                else
                {
                  if ( (v49 & 1) == 0 )
                  {
                    if ( v51 <= (unsigned __int64)v50 )
                      goto LABEL_72;
LABEL_75:
                    if ( SourceString.Length )
                    {
                      DestinationString.MaximumLength = SourceString.Length;
                      DestinationString.Length = SourceString.Length;
                      DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
                      if ( DestinationString.Buffer )
                      {
                        RtlCopyUnicodeString(&DestinationString, &SourceString);
                        p_DestinationString = &DestinationString;
                      }
                      v22 = v61;
                    }
                    else
                    {
                      v22 = -1073741801;
                    }
                    v30 = (char *)Object;
LABEL_81:
                    if ( v22 >= 0 )
                    {
                      RIMLockExclusive((__int64)(v30 + 104));
                      v22 = RIMDiscoverSpecificDevice(v30);
                      CInpPushLock::UnLockExclusive((CInpPushLock *)(v30 + 104));
                      if ( v22 < 0 )
                      {
                        if ( *((_QWORD *)v30 + 12) )
                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 542LL);
                        v53 = *((_QWORD *)v30 + 52);
                        if ( v53 )
                        {
                          Win32FreePool(v53);
                          *((_QWORD *)v30 + 52) = 0LL;
                        }
                        *((_QWORD *)v30 + 42) = -1LL;
                        *((_QWORD *)v30 + 43) = -1LL;
                        *((_QWORD *)v30 + 48) = -1LL;
                      }
                    }
                    if ( DestinationString.Buffer )
                      Win32FreePool((__int64)DestinationString.Buffer);
LABEL_94:
                    InputTraceLogging::RIM::RawInputManagerObject((const struct RawInputManagerObject *)v30);
                    ObfDereferenceObject(v30);
LABEL_99:
                    v54 = (__int64 *)&v80;
                    if ( v22 < 0 )
                    {
                      do
                      {
                        if ( *v54 )
                          Win32FreePool(*v54);
                        ++v54;
                        --v29;
                      }
                      while ( v29 );
                      if ( v68 )
                        Win32FreePool(v68);
                      if ( Handle != (HANDLE)-1LL )
                        ZwClose(Handle);
                      if ( v75 != (HANDLE)-1LL )
                        ZwClose(v75);
                      if ( v69 != (HANDLE)-1LL )
                        ZwClose(v69);
                      if ( v66 != (HANDLE)-1LL )
                        ObCloseHandle(v66, 1);
LABEL_123:
                      v56 = &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids;
                    }
                    else
                    {
                      do
                      {
                        if ( *v54 )
                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 593LL);
                        ++v54;
                        --v29;
                      }
                      while ( v29 );
                      if ( v68 )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 596LL);
                      if ( !a13 )
                      {
                        *v67 = v66;
                        goto LABEL_123;
                      }
                      v55 = v67;
                      if ( (unsigned __int64)v67 >= MmUserProbeAddress )
                        v55 = (_QWORD *)MmUserProbeAddress;
                      *v55 = v66;
                      v56 = &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids;
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v56) = 4;
                      WPP_RECORDER_SF_d(
                        (_DWORD)gRimLog,
                        (_DWORD)v56,
                        1,
                        20,
                        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
                        v22);
                    }
                    return (unsigned int)v22;
                  }
LABEL_73:
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 505LL);
                  v52 = (_BYTE **)MmUserProbeAddress;
                }
                **v52 = 0;
                goto LABEL_75;
              }
              v22 = -1073741801;
              v61 = -1073741801;
            }
            else
            {
LABEL_59:
              v41 = a13 != 0;
            }
            v47 = (struct _UNICODE_STRING *)v64;
            goto LABEL_61;
          }
          v25 = v22 < 0;
        }
        if ( !v25 )
          v22 = v23;
        v29 = 3LL;
        goto LABEL_99;
      }
    }
    v57 = (__int64 *)&v80;
    v58 = 3LL;
    do
    {
      if ( *v57 )
        Win32FreePool(*v57);
      ++v57;
      --v58;
    }
    while ( v58 );
    Win32FreePool(KernelSemaphore);
  }
  return 3221225495LL;
}
