/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B6868
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B6850 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     DrvSetMonitorsDimState @ 0x1C0069BFC (DrvSetMonitorsDimState.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00B69D8 (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C014A580 (xxxDisplayDiagBlackScreenDetected.c)
 *     GreIsInLowBox @ 0x1C016C670 (GreIsInLowBox.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0171244 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1)
{
  int v2; // edi
  __int64 Pool2; // rsi
  UINT PrivateDriverDataSize; // eax
  PVOID v5; // r15
  unsigned __int64 v6; // rdx
  size_t v7; // r8
  char *pPrivateDriverData; // rdx
  __int64 Type; // rdx
  UINT v10; // edx
  int CurrentDpiInfoFromHDC; // eax
  __int64 v13; // rax
  char v14; // r12
  UINT v15; // eax
  size_t v16; // r8
  char *v17; // rcx
  __int64 v19; // rdx
  UINT v20; // eax
  struct tagTHREADINFO *v21; // rax
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  char v26; // al
  __int64 v27; // rcx
  struct tagKERNELHANDLETABLEENTRY *v28; // rdi
  unsigned int v29; // edx
  unsigned int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int128 v35; // [rsp+40h] [rbp-108h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-F8h] BYREF
  struct _UNICODE_STRING v37; // [rsp+60h] [rbp-E8h] BYREF
  PVOID BackTrace[27]; // [rsp+70h] [rbp-D8h] BYREF
  struct _D3DKMT_ESCAPE *v39; // [rsp+150h] [rbp+8h] BYREF
  int v40; // [rsp+158h] [rbp+10h]
  __int64 v41; // [rsp+160h] [rbp+18h]
  __int64 v42; // [rsp+168h] [rbp+20h]

  v39 = a1;
  v2 = 0;
  Pool2 = 0LL;
  v41 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( !PrivateDriverDataSize )
    goto LABEL_9;
  v40 = 1886221383;
  v42 = 260LL;
  v5 = gpLeakTrackingAllocator;
  v6 = PrivateDriverDataSize;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7447) != 0x706D7447
    || (v13 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_3:
    Pool2 = ExAllocatePool2(260LL, v6);
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1886221383 )
  {
    if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_3;
  }
  v14 = 0;
  if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
  {
    v14 = 1;
    v6 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v6);
  if ( !Pool2 )
    goto LABEL_33;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v14 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v5,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
    goto LABEL_32;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v5,
                           Pool2,
                           BackTrace) )
  {
LABEL_32:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_33:
    Pool2 = 0LL;
  }
LABEL_4:
  v41 = Pool2;
  if ( Pool2 )
  {
    v7 = a1->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v7] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v7] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)Pool2, pPrivateDriverData, v7);
    v41 = Pool2;
LABEL_9:
    Type = a1->Type;
    if ( (int)Type > 1030 )
    {
      if ( (_DWORD)Type != 1031 )
      {
        switch ( (_DWORD)Type )
        {
          case 0x40B:
            if ( a1->PrivateDriverDataSize != 8 )
              goto LABEL_46;
            goto LABEL_57;
          case 0x40C:
            v10 = a1->PrivateDriverDataSize;
            if ( v10 >= 0x64 )
            {
              CurrentDpiInfoFromHDC = DrvCollectColorProfileForUser((PSID)Pool2, v10);
LABEL_15:
              v2 = CurrentDpiInfoFromHDC;
              goto LABEL_16;
            }
LABEL_46:
            v2 = -1073741811;
            goto LABEL_17;
          case 0x40D:
            if ( gbOSTestSigningEnabled )
            {
              if ( a1->PrivateDriverDataSize )
              {
                v35 = 0uLL;
                DrvSetMonitorsDimState(*(_BYTE *)Pool2, &v35);
                v2 = 0;
LABEL_82:
                if ( !Pool2 )
                  return (unsigned int)v2;
                v16 = a1->PrivateDriverDataSize;
                v17 = (char *)a1->pPrivateDriverData;
                if ( (unsigned __int64)&v17[v16] > MmUserProbeAddress || &v17[v16] <= v17 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v17, (const void *)Pool2, v16);
LABEL_17:
                if ( Pool2 )
                  NSInstrumentation::CLeakTrackingAllocator::Free(
                    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                    (char *)Pool2);
                return (unsigned int)v2;
              }
              goto LABEL_46;
            }
            goto LABEL_72;
          case 0x40E:
            if ( gbOSTestSigningEnabled )
            {
LABEL_57:
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_BrokeredDisplays_TestMode__private_reporting,
                17473580LL,
                0LL,
                0LL,
                (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_TestMode_logged_traits,
                0,
                3);
              goto LABEL_58;
            }
LABEL_72:
            v2 = -1073741790;
            goto LABEL_17;
        }
        goto LABEL_77;
      }
      if ( !gbOSTestSigningEnabled && !(qword_1C029AF38 ? qword_1C029AF38((unsigned int)(Type - 1031)) : 0) )
      {
        if ( !(unsigned int)GreIsInLowBox()
          || ((LOBYTE(v39) = 0,
               DestinationString = 0LL,
               v37 = 0LL,
               RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
               RtlInitUnicodeString(&v37, L"shellDisplayManagement"),
               (int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v39) < 0)
           || !(_BYTE)v39)
          && ((int)RtlCapabilityCheckForSingleSessionSku(0LL, &v37, &v39) < 0 || !(_BYTE)v39) )
        {
          v2 = -1073741790;
          v19 = -1073741790LL;
LABEL_100:
          WdLogSingleEntry1(2LL, v19);
          goto LABEL_16;
        }
      }
      v20 = a1->PrivateDriverDataSize;
      if ( v20 == 24 )
      {
        if ( *(_DWORD *)(Pool2 + 20) >= 4u )
        {
          v2 = -1073741811;
          v19 = -1073741811LL;
          goto LABEL_100;
        }
        v21 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0);
        gptiCurrent = v21;
        if ( v21 )
        {
          *((_DWORD *)v21 + 377) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
          if ( CurrentProcessWin32Process )
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
                || (v26 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
              {
                v26 = 0;
              }
              if ( v26 )
              {
                while ( 1 )
                {
                  v28 = gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                               + 2);
                  *((_QWORD *)v28 + 2) = 0LL;
                  v27 = *(_QWORD *)v28;
                  if ( !*(_DWORD *)(*(_QWORD *)v28 + 8LL) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v24, v25);
                    v27 = *(_QWORD *)v28;
                  }
                  HMUnlockObject(v27);
                }
              }
            }
          }
        }
        v29 = *(_DWORD *)(Pool2 + 20);
        v30 = v29 >> 1;
        LOBYTE(v30) = (v29 & 2) != 0;
        LOBYTE(v29) = v29 & 1;
        xxxDisplayDiagBlackScreenDetected(4, v29, v30, Pool2 + 4, Pool2);
        v2 = 0;
        UserSessionSwitchLeaveCrit(v32, v31, v33, v34);
      }
      else
      {
        v2 = -1073741811;
        WdLogSingleEntry2(2LL, v20, -1073741811LL);
      }
LABEL_16:
      if ( v2 < 0 )
        goto LABEL_17;
      goto LABEL_82;
    }
    if ( (_DWORD)Type == 1030 )
    {
      if ( a1->PrivateDriverDataSize != 4 )
        goto LABEL_46;
      if ( !gbOSTestSigningEnabled )
        goto LABEL_72;
      if ( (*(_DWORD *)Pool2 & 3) == 2 )
      {
        WdLogSingleEntry1(2LL, Type);
        goto LABEL_46;
      }
      g_OutputDuplicationTestControl = *(_DWORD *)Pool2;
      goto LABEL_16;
    }
    if ( (_DWORD)Type == 1024 )
    {
      v15 = a1->PrivateDriverDataSize;
      if ( v15 < 4 || v15 != *(_DWORD *)Pool2 )
        goto LABEL_46;
      if ( qword_1C029B1B0 )
        v2 = qword_1C029B1B0((unsigned int)(Type - 1024));
      else
        v2 = -1073741637;
      if ( v2 < 0 )
        goto LABEL_17;
      if ( qword_1C029B1B8 )
      {
        CurrentDpiInfoFromHDC = qword_1C029B1B8(Pool2);
        goto LABEL_15;
      }
    }
    else
    {
      switch ( (_DWORD)Type )
      {
        case 0x401:
LABEL_58:
          v2 = -1073741637;
          goto LABEL_17;
        case 0x402:
          if ( a1->PrivateDriverDataSize == 104 )
          {
            CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(
                                      *(HDC *)Pool2,
                                      (struct _DPI_INFORMATION *const)(Pool2 + 8));
            goto LABEL_15;
          }
          v2 = -1073741811;
          break;
        case 0x403:
          break;
        case 0x404:
          if ( a1->PrivateDriverDataSize != 6 )
            goto LABEL_46;
          *(_WORD *)Pool2 = gdmLogPixels;
          *(_WORD *)(Pool2 + 2) = *(_WORD *)(PsGetCurrentProcessWin32Process((unsigned int)(Type - 1027)) + 284);
          *(_WORD *)(Pool2 + 4) = *((_WORD *)gpsi + 3499);
          goto LABEL_16;
        default:
LABEL_77:
          WdLogSingleEntry1(2LL, Type);
LABEL_78:
          v2 = -1073741811;
          goto LABEL_16;
      }
      if ( a1->PrivateDriverDataSize < 8 )
        goto LABEL_46;
      if ( *(_DWORD *)Pool2 != 1 )
      {
        if ( *(_DWORD *)Pool2 == 2 && gbOSTestSigningEnabled )
        {
          gbBypassPresenterViewProcessCheck = *(_DWORD *)(Pool2 + 4);
          goto LABEL_16;
        }
        goto LABEL_78;
      }
      if ( qword_1C0296878 )
      {
        *(_DWORD *)(Pool2 + 4) = (unsigned __int8)qword_1C0296878() != 0;
        goto LABEL_16;
      }
    }
    v2 = -1073741637;
    goto LABEL_16;
  }
  WdLogSingleEntry1(6LL, a1->PrivateDriverDataSize);
  return 3221225495LL;
}
