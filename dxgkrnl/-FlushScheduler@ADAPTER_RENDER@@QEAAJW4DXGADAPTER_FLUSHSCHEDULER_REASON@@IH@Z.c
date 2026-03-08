/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01732D0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01738D4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017E400 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180784 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180D4C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C7400 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C78EC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkFlushPresentHistory @ 0x1C01D9720 (DxgkFlushPresentHistory.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01E07B0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DpiPowerArbiterThread @ 0x1C0210150 (DpiPowerArbiterThread.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C02B0C18 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C02B3D8C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B4D9C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02B5558 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02B7460 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BCD08 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02BD058 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02BD19C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02BD4FC (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C02DABB0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1C030ECDC (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C031007C (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03AD86C (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C017FE5C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C017FED0 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01A5DA4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?VmBusSendFlushAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@I@Z @ 0x1C0384360 (-VmBusSendFlushAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 IsDxgmms2; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r14d
  __int64 v16; // rdx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // ebx
  _DWORD *v24; // rax
  _DWORD *v25; // rax

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (int)a2;
  if ( *(_BYTE *)(v6 + 209) )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushAdapter(v6 + 4472, a2, a3);
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v9, &Dxgk_FlushScheduler, v10);
  WdLogSingleEntry2(4LL, v7, v5);
  v15 = 1;
  if ( (int)v7 > 6 )
  {
    if ( (_DWORD)v7 == 7 )
      goto LABEL_23;
    if ( (_DWORD)v7 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        WdLogSingleEntry1(1LL, 2883LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
          2883LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !IsDxgmms2 )
      {
        LODWORD(v25) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
        if ( (*v25 & 0x10) != 0 )
          return 0LL;
      }
      v16 = 1LL;
      LOBYTE(v14) = a4 != 0;
      goto LABEL_13;
    }
    if ( (_DWORD)v7 != 9 )
    {
      if ( (_DWORD)v7 == 10 )
      {
LABEL_23:
        if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
        {
          WdLogSingleEntry1(1LL, 2878LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
            2878LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        LOBYTE(v12) = a4 != 0;
        ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, v12, (_DWORD)v7 == 10);
        return 0LL;
      }
      goto LABEL_41;
    }
LABEL_15:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      WdLogSingleEntry1(1LL, 2837LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"ExclusiveAccessHeld || IsCoreResourceExclusiveOwner()",
        2837LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( IsDxgmms2 )
    {
      if ( (_DWORD)v5 == -1 )
      {
LABEL_20:
        LOBYTE(v13) = (_DWORD)v7 == 9;
        ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, v13);
        return 0LL;
      }
    }
    else
    {
      LODWORD(v24) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
      if ( (*v24 & 0x10) != 0 )
        goto LABEL_20;
    }
    LOBYTE(v14) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 736) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 744),
      1LL,
      (unsigned int)v5,
      v14);
    goto LABEL_20;
  }
  if ( (_DWORD)v7 == 6 )
    goto LABEL_15;
  v18 = v7 - 1;
  if ( !v18 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      WdLogSingleEntry1(1LL, 2819LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        2819LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LOBYTE(v14) = a4 != 0;
    v16 = 0LL;
LABEL_13:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 736) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 744),
      v16,
      (unsigned int)v5,
      v14);
    return 0LL;
  }
  v19 = v18 - 1;
  if ( !v19 )
    goto LABEL_42;
  v20 = v19 - 1;
  if ( !v20 )
  {
    v15 = 8;
    goto LABEL_42;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v15 = 9;
    goto LABEL_42;
  }
  if ( v21 == 1 )
  {
    v15 = 17;
    goto LABEL_42;
  }
LABEL_41:
  WdLogSingleEntry1(1LL, 2909LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Invalid flush reason!", 2909LL, 0LL, 0LL, 0LL, 0LL);
LABEL_42:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 176LL) != 2 )
  {
    WdLogSingleEntry1(1LL, 2925LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->m_ExclusiveAccessReason == DXGADAPTER_EXCLUSIVEACCESS_FLUSHSCHEDULER",
      2925LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 736) + 8LL) + 40LL))(
          *(_QWORD *)(a1 + 744),
          v15);
  v23 = v22;
  if ( v15 >= 8 && v22 < 0 )
  {
    WdLogSingleEntry1(1LL, 2932LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 2932LL, 0LL, 0LL, 0LL, 0LL);
  }
  return v23;
}
