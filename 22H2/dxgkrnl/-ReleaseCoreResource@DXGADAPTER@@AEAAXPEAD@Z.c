/*
 * XREFs of ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB910
 * Callers:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000A9D0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C0196380 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C01971E0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0198544 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B85E0 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01B9800 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C01BBA00 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01BC080 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01C0160 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C01C59D0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01C73B0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C01D4F10 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01D5F80 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EF2C8 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BA418 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C02C1640 (-IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0040BC0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C0197A94 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0197B78 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0307750 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
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
    && (qword_1C013F870 & 0x1000000) != 0
    && (qword_1C013F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v8, this);
  }
  ExReleaseResourceLite(this[21]);
  KeLeaveCriticalRegion();
}
