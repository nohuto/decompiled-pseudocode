/*
 * XREFs of ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0195A00
 * Callers:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C017F430 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180784 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A990 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C018BBC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C018D730 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C018F830 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01911B0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C01A0C10 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C01C7AC0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01C94F0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01CD490 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01E09A8 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02B5558 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C02BC720 (-IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C003FBD0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C017FCE4 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C017FE5C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0302920 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreResource(PERESOURCE *this, char *a2)
{
  PERESOURCE v4; // rax
  struct DXGGLOBAL *Global; // rdi
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // r8
  PERESOURCE v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  ADAPTER_RENDER *v12; // rcx
  int FirstProfilerInterface; // eax
  _BYTE v14[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( !ExIsResourceAcquiredSharedLite(this[21]) )
  {
    WdLogSingleEntry1(1LL, 4263LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ExIsResourceAcquiredSharedLite(m_pCoreResource)",
      4263LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this[23] )
  {
    WdLogSingleEntry1(1LL, 4264LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"NULL == m_pWorkerThreadOfExclusiveOwner[0]",
      4264LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = this[366];
  if ( v4 && LOBYTE(v4[7].ActiveCount) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      WdLogSingleEntry1(1LL, 4272LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        4272LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = (ADAPTER_RENDER *)this[366];
    if ( *((_QWORD *)v12 + 93) )
    {
      LOBYTE(v11) = 1;
      ADAPTER_RENDER::ResumeScheduler(v12, v11, 0);
    }
    LOBYTE(this[366][7].ActiveCount) = 0;
  }
  Global = DXGGLOBAL::GetGlobal();
  CurrentProcess = PsGetCurrentProcess(v6);
  v9 = this[29];
  v10 = CurrentProcess;
  if ( v9 )
  {
    if ( CurrentProcess )
    {
      if ( *((_DWORD *)Global + 530) )
      {
        if ( *((_BYTE *)Global + 304376) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGGLOBAL *)((char *)Global + 2128), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
          FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
          DripsBlockerTrackingHelper::RemoveProcessEntry((char *)Global + 2296, v9, a2, v10, FirstProfilerInterface);
          if ( v14[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 546LL);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 540LL);
  }
  if ( bTracingEnabled
    && (qword_1C013A870 & 0x1000000) != 0
    && (qword_1C013A870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v8, this);
  }
  ExReleaseResourceLite(this[21]);
  KeLeaveCriticalRegion();
}
