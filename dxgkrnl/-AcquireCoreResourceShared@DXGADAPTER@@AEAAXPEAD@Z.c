/*
 * XREFs of ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0
 * Callers:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C017F430 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180D4C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A990 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C018BBC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C018D730 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     DxgkReclaimAllocations2 @ 0x1C018EF40 (DxgkReclaimAllocations2.c)
 *     DxgkOfferAllocations @ 0x1C018F390 (DxgkOfferAllocations.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C018F830 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0190840 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01911B0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0195B40 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C0198420 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0198D00 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C0199610 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     DxgkLock2 @ 0x1C019E150 (DxgkLock2.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C01A0C10 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 *     DxgkLock @ 0x1C01B7E10 (DxgkLock.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C01C7AC0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     DxgkPresent @ 0x1C01C8120 (DxgkPresent.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01C94F0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DxgkUnlock2 @ 0x1C01CC520 (DxgkUnlock2.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01CD490 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkUnlock @ 0x1C01CDE70 (DxgkUnlock.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01DE730 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C0007720 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003FF7C (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??1DXGDEADLOCK_TRACKER@@QEAA@XZ @ 0x1C017D26C (--1DXGDEADLOCK_TRACKER@@QEAA@XZ.c)
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z @ 0x1C017D3FC (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C017FCE4 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C01E2C60 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FEAF4 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C033F668 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceShared(DXGADAPTER *this, char *a2)
{
  struct DXGGLOBAL *Global; // rdi
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  char v9; // si
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // esi
  __int64 v15; // r8
  struct DXGTHREAD *DxgThread; // rax
  bool v17; // zf
  __int64 v18; // rcx
  int FirstProfilerInterface; // eax
  int v20; // r9d
  __int64 v21; // [rsp+20h] [rbp-1E8h]
  _BYTE v22[16]; // [rsp+50h] [rbp-1B8h] BYREF
  _BYTE v23[400]; // [rsp+60h] [rbp-1A8h] BYREF
  struct DXGTHREAD *v24; // [rsp+210h] [rbp+8h] BYREF

  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 21)) )
  {
    WdLogSingleEntry1(1LL, 4049LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!ExIsResourceAcquiredSharedLite(m_pCoreResource)",
      4049LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  CurrentProcess = PsGetCurrentProcess(v5);
  v7 = *((_QWORD *)this + 29);
  v8 = CurrentProcess;
  if ( v7 )
  {
    if ( CurrentProcess )
    {
      if ( *((_DWORD *)Global + 530) )
      {
        if ( *((_BYTE *)Global + 304376) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGGLOBAL *)((char *)Global + 2128), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
          FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
          DripsBlockerTrackingHelper::AddProcessEntry((char *)Global + 2296, v7, a2, v8, FirstProfilerInterface);
          if ( v22[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 510LL);
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 504LL);
  }
  v9 = 0;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 104, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v20 = *((_DWORD *)this + 32);
      if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v11, v20);
    }
    ExAcquirePushLockSharedEx((char *)this + 104, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 30);
  if ( *((_DWORD *)this + 40) == 1 )
  {
    DXGADAPTER::WakeUpAdapter(this);
    v9 = 1;
  }
  else
  {
    v12 = *((_QWORD *)this + 27);
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 64) + 4104LL));
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 30);
  ExReleasePushLockSharedEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( bTracingEnabled
    && (qword_1C013A870 & 0x1000000) != 0
    && (qword_1C013A870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v21) = 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v13, this, v21);
  }
  if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v23, this, v9);
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 1u);
    DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v23);
  }
  *((_DWORD *)this + 1169) = 0;
  v14 = -1;
  v24 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v24) >= 0 )
  {
    DxgThread = v24;
    if ( v24 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v24 = DxgThread) != 0LL) )
      v14 = *((_DWORD *)DxgThread + 14);
  }
  v17 = bTracingEnabled == 0;
  *((_DWORD *)this + 1170) = v14;
  if ( !v17
    && (qword_1C013A870 & 0x1000000) != 0
    && (qword_1C013A870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v21) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v15, this, v21);
  }
  if ( *((_DWORD *)this + 50) == 1 )
  {
    v18 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 4104), 0xFFFFFFFF) == 1 )
      DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v18);
  }
}
