/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00BCAC8
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00BCAB0 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     DrvSetMonitorsDimState @ 0x1C00AF3F4 (DrvSetMonitorsDimState.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00BCC68 (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C015E940 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C018E1E0 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreIsInLowBox @ 0x1C0199A50 (GreIsInLowBox.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1)
{
  struct _D3DKMT_ESCAPE *v1; // r14
  int v2; // esi
  __int64 Pool2; // rdi
  UINT *p_PrivateDriverDataSize; // r12
  unsigned __int64 PrivateDriverDataSize; // rax
  NSInstrumentation::CLeakTrackingAllocator *v6; // r14
  unsigned __int64 v7; // rdi
  int v8; // eax
  size_t v9; // r8
  char *pPrivateDriverData; // rdx
  __int64 Type; // rdx
  int CurrentDpiInfoFromHDC; // eax
  _QWORD *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r10
  char v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  struct tagTHREADINFO *v28; // rax
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rax
  char v32; // al
  __int64 *v33; // rsi
  unsigned int v34; // edx
  unsigned int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  size_t v40; // r8
  char *v41; // rcx
  __int128 v42; // [rsp+30h] [rbp-138h] BYREF
  __int64 v43; // [rsp+40h] [rbp-128h]
  __int64 v44; // [rsp+48h] [rbp-120h] BYREF
  unsigned __int64 v45; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v46[2]; // [rsp+60h] [rbp-108h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-F8h] BYREF
  struct _UNICODE_STRING v48; // [rsp+80h] [rbp-E8h] BYREF
  PVOID BackTrace[27]; // [rsp+90h] [rbp-D8h] BYREF
  struct _D3DKMT_ESCAPE *v50; // [rsp+170h] [rbp+8h] BYREF
  unsigned int v51; // [rsp+178h] [rbp+10h] BYREF
  __int64 v52; // [rsp+180h] [rbp+18h]
  unsigned __int64 v53; // [rsp+188h] [rbp+20h] BYREF

  v50 = a1;
  v1 = a1;
  v2 = 0;
  Pool2 = 0LL;
  v43 = 0LL;
  p_PrivateDriverDataSize = &a1->PrivateDriverDataSize;
  *(_QWORD *)&v42 = &a1->PrivateDriverDataSize;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( !(_DWORD)PrivateDriverDataSize )
    goto LABEL_10;
  v51 = 1886221383;
  v44 = 260LL;
  v6 = gpLeakTrackingAllocator;
  v7 = (unsigned int)PrivateDriverDataSize;
  v45 = PrivateDriverDataSize;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v7, 1886221383LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
    if ( v8 == 2 )
    {
      v53 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, &v53) )
      {
        v46[0] = &v44;
        v46[1] = &v51;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v6,
                  (__int64)v46,
                  &v45);
        goto LABEL_5;
      }
      v17 = 0;
      if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
      {
        v17 = 1;
        v7 += 16LL;
        v45 = v7;
      }
      Pool2 = ExAllocatePool2(v16, v7, v15);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v6,
                                  Pool2,
                                  v53,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_5;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     Pool2,
                                     v53,
                                     BackTrace) )
        {
          goto LABEL_5;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_41;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u)
    || v7 + 16 < v7 )
  {
LABEL_41:
    Pool2 = 0LL;
    goto LABEL_5;
  }
  v14 = (_QWORD *)ExAllocatePool2(v44 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v51);
  Pool2 = (__int64)v14;
  if ( !v14
    || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
        *v14 = 1886221383LL,
        Pool2 = (__int64)(v14 + 2),
        v14 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v6 + 1),
      (const void *)0x706D7447);
  }
LABEL_5:
  v52 = Pool2;
  if ( Pool2 )
  {
    v9 = *p_PrivateDriverDataSize;
    v1 = v50;
    pPrivateDriverData = (char *)v50->pPrivateDriverData;
    if ( &pPrivateDriverData[v9] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v9] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)Pool2, pPrivateDriverData, v9);
    v43 = Pool2;
LABEL_10:
    Type = v1->Type;
    if ( (int)Type > 1030 )
    {
      switch ( (_DWORD)Type )
      {
        case 0x407:
          if ( gbOSTestSigningEnabled
            || (!qword_1C02D5738 ? (v26 = 0) : (v26 = qword_1C02D5738((unsigned int)(Type - 1031))),
                v26
             || (unsigned int)GreIsInLowBox()
             && ((LOBYTE(v50) = 0,
                  DestinationString = 0LL,
                  v48 = 0LL,
                  RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
                  RtlInitUnicodeString(&v48, L"shellDisplayManagement"),
                  (int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v50) >= 0)
              && (_BYTE)v50
              || (int)RtlCapabilityCheckForSingleSessionSku(0LL, &v48, &v50) >= 0 && (_BYTE)v50)) )
          {
            if ( *p_PrivateDriverDataSize != 24 )
            {
              v2 = -1073741811;
              WdLogSingleEntry2(2LL, *p_PrivateDriverDataSize);
              break;
            }
            if ( *(_DWORD *)(Pool2 + 20) < 4u )
            {
              v28 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
              gptiCurrent = v28;
              if ( v28 )
              {
                *((_DWORD *)v28 + 387) = 1;
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
                if ( CurrentProcessWin32Process )
                {
                  v31 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
                  if ( v31 )
                  {
                    if ( (*(_DWORD *)(v31 + 12) & 0x8000) != 0 )
                    {
                      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
                        || (v32 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
                      {
                        v32 = 0;
                      }
                      if ( v32 )
                      {
                        while ( 1 )
                        {
                          v33 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                          if ( !gpSharedUserCritDeferredUnlockListHead )
                            break;
                          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                          v33[2] = 0LL;
                          if ( !*(_DWORD *)(*v33 + 8) )
                          {
                            LODWORD(v52) = 0x20000;
                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                          }
                          HMUnlockObject(*v33);
                        }
                      }
                    }
                  }
                }
              }
              v34 = *(_DWORD *)(Pool2 + 20);
              v35 = v34 >> 1;
              LOBYTE(v35) = (v34 & 2) != 0;
              LOBYTE(v34) = v34 & 1;
              xxxDisplayDiagBlackScreenDetected(4, v34, v35, Pool2 + 4, Pool2);
              v2 = 0;
              UserSessionSwitchLeaveCrit(v37, v36, v38, v39);
              break;
            }
            v2 = -1073741811;
            v27 = -1073741811LL;
          }
          else
          {
            v2 = -1073741790;
            v27 = -1073741790LL;
          }
          WdLogSingleEntry1(2LL, v27);
          break;
        case 0x40B:
          v2 = -1073741811;
          if ( *p_PrivateDriverDataSize == 8 )
            v2 = -1073741637;
          break;
        case 0x40C:
          if ( *p_PrivateDriverDataSize >= 0x64 )
          {
            CurrentDpiInfoFromHDC = DrvCollectColorProfileForUser((PSID)Pool2, *p_PrivateDriverDataSize);
LABEL_16:
            v2 = CurrentDpiInfoFromHDC;
            break;
          }
LABEL_55:
          v2 = -1073741811;
          goto LABEL_18;
        default:
          v25 = (unsigned int)(Type - 1037);
          if ( (_DWORD)Type != 1037 )
          {
            if ( (_DWORD)Type == 1038 )
            {
              if ( gbOSTestSigningEnabled )
              {
LABEL_83:
                v2 = -1073741637;
                break;
              }
LABEL_79:
              v2 = -1073741790;
              goto LABEL_18;
            }
            goto LABEL_84;
          }
          if ( !gbOSTestSigningEnabled )
            goto LABEL_79;
          if ( !*p_PrivateDriverDataSize )
            goto LABEL_55;
          v42 = 0uLL;
          LOBYTE(v25) = *(_BYTE *)Pool2;
          DrvSetMonitorsDimState(v25, &v42);
          v2 = 0;
          break;
      }
LABEL_17:
      if ( v2 >= 0 )
      {
        if ( !Pool2 )
          return (unsigned int)v2;
        v40 = *p_PrivateDriverDataSize;
        v41 = (char *)v1->pPrivateDriverData;
        if ( (unsigned __int64)&v41[v40] > MmUserProbeAddress || &v41[v40] <= v41 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v41, (const void *)Pool2, v40);
      }
LABEL_18:
      if ( Pool2 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
      return (unsigned int)v2;
    }
    switch ( (_DWORD)Type )
    {
      case 0x406:
        if ( *p_PrivateDriverDataSize != 4 )
          goto LABEL_55;
        if ( !gbOSTestSigningEnabled )
          goto LABEL_79;
        if ( (*(_DWORD *)Pool2 & 3) == 2 )
        {
          WdLogSingleEntry1(2LL, Type);
          goto LABEL_55;
        }
        g_OutputDuplicationTestControl = *(_DWORD *)Pool2;
        goto LABEL_17;
      case 0x400:
        if ( *p_PrivateDriverDataSize >= 4 && *p_PrivateDriverDataSize == *(_DWORD *)Pool2 )
        {
          if ( qword_1C02D59B0 )
          {
            v2 = qword_1C02D59B0((unsigned int)(Type - 1024));
            CurrentDpiInfoFromHDC = -1073741637;
          }
          else
          {
            CurrentDpiInfoFromHDC = -1073741637;
            v2 = -1073741637;
          }
          if ( v2 < 0 )
            goto LABEL_18;
          if ( qword_1C02D59B8 )
            CurrentDpiInfoFromHDC = ((__int64 (__fastcall *)(__int64))qword_1C02D59B8)(Pool2);
          goto LABEL_16;
        }
        goto LABEL_55;
      case 0x401:
        v2 = -1073741637;
        goto LABEL_18;
    }
    v18 = (unsigned int)(Type - 1026);
    if ( (_DWORD)Type == 1026 )
    {
      if ( *p_PrivateDriverDataSize == 104 )
      {
        CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)Pool2, (struct _DPI_INFORMATION *const)(Pool2 + 8));
        goto LABEL_16;
      }
      v2 = -1073741811;
    }
    else
    {
      v18 = (unsigned int)(Type - 1027);
      if ( (_DWORD)Type != 1027 )
      {
        if ( (_DWORD)Type != 1028 )
        {
LABEL_84:
          WdLogSingleEntry1(2LL, Type);
LABEL_85:
          v2 = -1073741811;
          goto LABEL_17;
        }
        if ( *p_PrivateDriverDataSize != 6 )
          goto LABEL_55;
        v19 = *(_QWORD *)(SGDGetSessionState(v18) + 24);
        *(_WORD *)Pool2 = *(_WORD *)(v19 + 1248);
        v20 = PsGetCurrentProcessWin32Process(v19);
        if ( v20 )
          v20 &= -(__int64)(*(_QWORD *)v20 != 0LL);
        *(_WORD *)(Pool2 + 2) = *(_WORD *)(v20 + 284);
        *(_WORD *)(Pool2 + 4) = *((_WORD *)gpsi + 3499);
        goto LABEL_17;
      }
    }
    if ( *p_PrivateDriverDataSize < 8 )
      goto LABEL_55;
    if ( *(_DWORD *)Pool2 == 1 )
    {
      if ( *(_QWORD *)(DxDdGetDxgkWin32kInterface(v18, Type) + 536) )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v22, v21);
        *(_DWORD *)(Pool2 + 4) = (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() != 0;
        goto LABEL_17;
      }
      goto LABEL_83;
    }
    if ( *(_DWORD *)Pool2 == 2 )
    {
      v24 = *(_QWORD *)(SGDGetSessionState(v18) + 24);
      if ( gbOSTestSigningEnabled )
      {
        *(_DWORD *)(v24 + 1420) = *(_DWORD *)(Pool2 + 4);
        goto LABEL_17;
      }
    }
    goto LABEL_85;
  }
  WdLogSingleEntry1(6LL, *p_PrivateDriverDataSize);
  return 3221225495LL;
}
