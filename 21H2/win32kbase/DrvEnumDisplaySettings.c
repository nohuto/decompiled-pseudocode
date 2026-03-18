/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C006F640
 * Callers:
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C006F5C4 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C015322C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     hdevEnumerate @ 0x1C006FCD0 (hdevEnumerate.c)
 *     DrvGetDeviceFromName @ 0x1C00719F0 (DrvGetDeviceFromName.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C0071D50 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     DrvBuildDevmodeList @ 0x1C0079EE0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C007A2E4 (DrvGetDisplayDriverParameters.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C00BCBC0 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BD3E0 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 DrvEnumDisplaySettings(struct _UNICODE_STRING *a1, __int64 a2, unsigned int a3, struct _devicemodeW *a4, ...)
{
  __int64 DeviceFromName; // rsi
  WORD v9; // r12
  __int64 v11; // rax
  int PreferredMode; // ebx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  PVOID v18; // rbx
  __int64 v19; // r14
  int DisplayDriverParameters; // eax
  unsigned __int16 v21; // ax
  __int64 v22; // rax
  int DevModeForLddmPath; // eax
  int v24; // r11d
  struct PDEV *i; // rax
  __int64 v26; // rcx
  PVOID v27; // r14
  __int64 v28; // rax
  __int64 Pool2; // rbx
  __int64 v30; // r14
  unsigned int v31; // r10d
  unsigned int v32; // r8d
  int v33; // r9d
  unsigned __int16 v34; // ax
  unsigned int v35; // ebx
  size_t v36; // r13
  void *v37; // rdx
  void *v38; // rdx
  WORD dmDriverExtra; // [rsp+40h] [rbp-1B8h]
  PCUNICODE_STRING String1; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-1A8h]
  char v42[8]; // [rsp+58h] [rbp-1A0h] BYREF
  int v43; // [rsp+60h] [rbp-198h]
  __int64 v44; // [rsp+68h] [rbp-190h]
  __int64 v45; // [rsp+70h] [rbp-188h]
  __int64 v46; // [rsp+78h] [rbp-180h]
  __int64 v47; // [rsp+80h] [rbp-178h]
  PVOID BackTrace[20]; // [rsp+90h] [rbp-168h] BYREF
  PVOID v49[20]; // [rsp+130h] [rbp-C8h] BYREF
  unsigned int v50; // [rsp+210h] [rbp+18h] BYREF
  struct _devicemodeW *v51; // [rsp+218h] [rbp+20h]
  __int64 v52; // [rsp+220h] [rbp+28h] BYREF
  va_list va; // [rsp+220h] [rbp+28h]
  va_list va1; // [rsp+228h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v52 = va_arg(va1, _QWORD);
  v51 = a4;
  v50 = a3;
  DeviceFromName = 0LL;
  v41 = 0LL;
  v45 = a3;
  WdLogSingleEntry4(4LL, a1, a2);
  if ( ((unsigned __int8)a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  dmDriverExtra = a4->dmDriverExtra;
  v9 = dmDriverExtra;
  ProbeForWrite(a4, dmDriverExtra + 220LL, 2u);
  if ( a4->dmSize != 220 )
  {
    WdLogSingleEntry0(5LL);
    return 3221225507LL;
  }
  if ( a1 )
  {
    String1 = 0LL;
    if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
    {
      DeviceFromName = DrvGetDeviceFromName(String1);
      v41 = DeviceFromName;
    }
    if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) )
    {
      DeviceFromName &= -(__int64)((*(_DWORD *)(DeviceFromName + 160) & 0x6000008) != 0);
      v41 = DeviceFromName;
    }
    if ( String1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (void *)String1);
  }
  else if ( a2 )
  {
    DeviceFromName = *(_QWORD *)(a2 + 2552);
    v41 = DeviceFromName;
  }
  if ( DeviceFromName )
  {
    if ( a3 != -3 )
    {
      if ( a3 != -2 )
      {
        if ( a3 == -1 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v42);
          v11 = hdevEnumerate(0LL);
          PreferredMode = -1073741585;
          while ( 1 )
          {
            v44 = v11;
            v13 = v11;
            if ( !v11 )
              break;
            v14 = *(_QWORD *)(v11 + 2552);
            if ( v14 == DeviceFromName && *(_DWORD *)(v11 + 12) )
            {
              LOBYTE(v52) = 0;
              if ( *(_DWORD *)(*(_QWORD *)(v11 + 2568) + 184LL) == 1 && (*(_DWORD *)(v14 + 160) & 0x800000) != 0 )
              {
                DevModeForLddmPath = DrvGetDevModeForLddmPath(
                                       (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                                       0xFFFFFFFF,
                                       0LL,
                                       (bool *)va);
                if ( DevModeForLddmPath < 0 )
                  WdLogSingleEntry1(5LL, DevModeForLddmPath);
              }
              if ( (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 && (*(_DWORD *)(DeviceFromName + 164) & 4) != 0 )
              {
                wil_details_FeatureReporting_ReportUsageToService(
                  (__int64)&Feature_Vail__private_reporting,
                  8554091LL,
                  0LL,
                  0LL,
                  (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
                  1,
                  3);
                LOBYTE(v52) = 1;
              }
              v15 = *(_QWORD *)(v13 + 2568);
              v16 = *(_WORD *)(v15 + 70);
              if ( v9 < v16 )
                v16 = v9;
              v9 = v16;
              memmove(&a4[1], (const void *)(v15 + 220), v16);
              v17 = *(_QWORD *)(v13 + 2568);
              *(_OWORD *)a4->dmDeviceName = *(_OWORD *)v17;
              *(_OWORD *)&a4->dmDeviceName[8] = *(_OWORD *)(v17 + 16);
              *(_OWORD *)&a4->dmDeviceName[16] = *(_OWORD *)(v17 + 32);
              *(_OWORD *)&a4->dmDeviceName[24] = *(_OWORD *)(v17 + 48);
              *(_OWORD *)&a4->dmSpecVersion = *(_OWORD *)(v17 + 64);
              *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a4->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(v17 + 80);
              *(_OWORD *)&a4->dmYResolution = *(_OWORD *)(v17 + 96);
              *(_OWORD *)&a4->dmFormName[5] = *(_OWORD *)(v17 + 112);
              v17 += 128LL;
              *(_OWORD *)&a4->dmFormName[13] = *(_OWORD *)v17;
              *(_OWORD *)&a4->dmFormName[21] = *(_OWORD *)(v17 + 16);
              *(_OWORD *)&a4->dmFormName[29] = *(_OWORD *)(v17 + 32);
              *(_OWORD *)&a4->dmPelsHeight = *(_OWORD *)(v17 + 48);
              *(_OWORD *)&a4->dmICMIntent = *(_OWORD *)(v17 + 64);
              *(_QWORD *)&a4->dmReserved2 = *(_QWORD *)(v17 + 80);
              a4->dmPanningHeight = *(_DWORD *)(v17 + 88);
              if ( (_BYTE)v52 )
                a4->dmDisplayFrequency = 64;
              a4->dmFields &= 0xF9FFFFFF;
              PreferredMode = 0;
            }
            v11 = hdevEnumerate(v13);
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
          goto LABEL_22;
        }
        if ( !UserIsUserCritSecInExclusive() )
          WdLogSingleEntry0(1LL);
        DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)DeviceFromName);
        v24 = 0;
        LODWORD(String1) = 0;
        v43 = v52 & 4;
        if ( (v52 & 4) != 0 )
        {
LABEL_90:
          if ( *(_DWORD *)(DeviceFromName + 184) && *(_QWORD *)(DeviceFromName + 176) )
          {
            v30 = 0LL;
            PreferredMode = -1073741584;
            v31 = *(_DWORD *)(DeviceFromName + 188);
            if ( a3 < v31 )
            {
              if ( (v52 & 6) == 6 )
              {
                _mm_lfence();
                v30 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16 * v45 + 8);
LABEL_111:
                v9 = dmDriverExtra;
                PreferredMode = -1073741584;
              }
              else
              {
                v32 = 0;
                v33 = 0;
                while ( v32 < v31 )
                {
                  if ( ((v52 & 2) != 0 || !*(_DWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v32))
                    && (v43 || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v32 + 8) + 84LL) == v24) )
                  {
                    if ( v33 == a3 )
                    {
                      _mm_lfence();
                      v30 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v32 + 8);
                      goto LABEL_111;
                    }
                    ++v33;
                  }
                  ++v32;
                }
              }
            }
            if ( v30 )
            {
              v34 = *(_WORD *)(v30 + 70);
              if ( v9 < v34 )
                v34 = v9;
              v35 = v34;
              v9 = v34;
              v36 = 220LL;
              memset(a4, 0, sizeof(struct _devicemodeW));
              memmove(&a4[1], (const void *)(v30 + *(unsigned __int16 *)(v30 + 68)), v35);
              if ( *(_WORD *)(v30 + 68) <= 0xDCu )
                v36 = *(unsigned __int16 *)(v30 + 68);
              memmove(a4, (const void *)v30, v36);
              if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 && *(_DWORD *)(v30 + 184) == 1 )
                a4->dmDisplayFrequency = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            WdLogSingleEntry0(5LL);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *(_DWORD *)(DeviceFromName + 184) = 0;
            v37 = *(void **)(DeviceFromName + 176);
            if ( v37 )
            {
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                v37);
              *(_QWORD *)(DeviceFromName + 176) = 0LL;
            }
            v38 = *(void **)(DeviceFromName + 192);
            if ( v38 )
            {
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                v38);
              *(_QWORD *)(DeviceFromName + 192) = 0LL;
            }
            *(_DWORD *)(DeviceFromName + 188) = 0;
          }
          goto LABEL_22;
        }
        if ( gProtocolType )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v50);
          for ( i = gppdevList; i; i = *(struct PDEV **)i )
          {
            if ( *((_QWORD *)i + 319) == DeviceFromName && *((_DWORD *)i + 3) )
            {
              v26 = *((_QWORD *)i + 321);
              if ( (*(_DWORD *)(v26 + 72) & 0x80u) != 0 )
                LODWORD(String1) = *(_DWORD *)(v26 + 84);
              break;
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
          goto LABEL_89;
        }
        LODWORD(v44) = 1986356295;
        v47 = 260LL;
        v27 = gpLeakTrackingAllocator;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76656447) != 0x76656447
          || (v28 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
        {
LABEL_83:
          Pool2 = ExAllocatePool2(260LL, 65755LL);
          goto LABEL_84;
        }
        while ( *((_DWORD *)gpLeakTrackingAllocator + v28) != 1986356295 )
        {
          if ( ++v28 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_83;
        }
        Pool2 = ExAllocatePool2(260LL, 65771LL);
        if ( !Pool2 )
          goto LABEL_89;
        memset(v49, 0, sizeof(v49));
        RtlCaptureStackBackTrace(0, 0x14u, v49, 0LL);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v27,
                                  Pool2,
                                  v49) )
          {
            Pool2 += 16LL;
LABEL_84:
            if ( Pool2 )
            {
              memset((void *)Pool2, 0, 0xDCuLL);
              *(_WORD *)(Pool2 + 68) = -8739;
              if ( (int)DrvGetDisplayDriverParameters(DeviceFromName, Pool2, 0LL, 0LL) >= 0
                && (*(_DWORD *)(Pool2 + 72) & 0x80u) != 0 )
              {
                LODWORD(String1) = *(_DWORD *)(Pool2 + 84);
              }
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                (void *)Pool2);
            }
LABEL_89:
            v24 = (int)String1;
            goto LABEL_90;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v27,
                                     Pool2,
                                     v49) )
        {
          goto LABEL_84;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        Pool2 = 0LL;
        goto LABEL_84;
      }
      v43 = 1986356295;
      v46 = 260LL;
      v18 = gpLeakTrackingAllocator;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76656447) != 0x76656447
        || (v22 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
LABEL_39:
        v19 = ExAllocatePool2(260LL, 65755LL);
        goto LABEL_40;
      }
      while ( *((_DWORD *)gpLeakTrackingAllocator + v22) != 1986356295 )
      {
        if ( ++v22 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_39;
      }
      v19 = ExAllocatePool2(260LL, 65771LL);
      if ( !v19 )
      {
LABEL_62:
        PreferredMode = -1073741801;
        goto LABEL_22;
      }
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(v19 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v18,
                                v19,
                                BackTrace) )
        {
          v19 += 16LL;
LABEL_40:
          v41 = v19;
          if ( v19 )
          {
            if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
            {
              DisplayDriverParameters = DrvGetDevModeForLddmPath(
                                          (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                                          0xFFFFFFFE,
                                          (struct _devicemodeW *)v19,
                                          0LL);
            }
            else
            {
              *(_DWORD *)(v19 + 68) = -8739;
              DisplayDriverParameters = DrvGetDisplayDriverParameters(DeviceFromName, v19, 0LL, 0LL);
            }
            PreferredMode = DisplayDriverParameters;
            if ( DisplayDriverParameters >= 0 )
            {
              v21 = *(_WORD *)(v19 + 70);
              if ( dmDriverExtra < v21 )
                v21 = dmDriverExtra;
              v9 = v21;
              memmove(&a4[1], (const void *)(v19 + 220), v21);
              *(_OWORD *)a4->dmDeviceName = *(_OWORD *)v19;
              *(_OWORD *)&a4->dmDeviceName[8] = *(_OWORD *)(v19 + 16);
              *(_OWORD *)&a4->dmDeviceName[16] = *(_OWORD *)(v19 + 32);
              *(_OWORD *)&a4->dmDeviceName[24] = *(_OWORD *)(v19 + 48);
              *(_OWORD *)&a4->dmSpecVersion = *(_OWORD *)(v19 + 64);
              *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a4->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(v19 + 80);
              *(_OWORD *)&a4->dmYResolution = *(_OWORD *)(v19 + 96);
              *(_OWORD *)&a4->dmFormName[5] = *(_OWORD *)(v19 + 112);
              *(_OWORD *)&a4->dmFormName[13] = *(_OWORD *)(v19 + 128);
              *(_OWORD *)&a4->dmFormName[21] = *(_OWORD *)(v19 + 144);
              *(_OWORD *)&a4->dmFormName[29] = *(_OWORD *)(v19 + 160);
              *(_OWORD *)&a4->dmPelsHeight = *(_OWORD *)(v19 + 176);
              *(_OWORD *)&a4->dmICMIntent = *(_OWORD *)(v19 + 192);
              *(_QWORD *)&a4->dmReserved2 = *(_QWORD *)(v19 + 208);
              a4->dmPanningHeight = *(_DWORD *)(v19 + 216);
            }
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              (void *)v19);
            goto LABEL_22;
          }
          goto LABEL_62;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v18,
                                   v19,
                                   BackTrace) )
      {
        goto LABEL_40;
      }
      ExFreePoolWithTag((PVOID)v19, 0);
      v19 = 0LL;
      goto LABEL_40;
    }
    PreferredMode = DrvGetPreferredMode(a4, (struct tagGRAPHICS_DEVICE *)DeviceFromName);
  }
  else
  {
    PreferredMode = -1073741585;
  }
LABEL_22:
  if ( !PreferredMode )
    a4->dmDriverExtra = v9;
  WdLogSingleEntry1(5LL, PreferredMode);
  return (unsigned int)PreferredMode;
}
