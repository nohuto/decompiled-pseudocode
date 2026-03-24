/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00EAD78
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E0664 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E0770 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E09A4 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E68A0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E767C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C012E224 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C012E5B4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkFlushPresentHistory @ 0x1C016A550 (DxgkFlushPresentHistory.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01764A4 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C020BF2C (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C020ECFC (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020FAD0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0210244 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0212318 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0217300 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02175A4 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C021777C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0217AE8 (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C022E590 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1C026AA48 (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C026B9EC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E50E4 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003A3F8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00EAF88 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C00EB030 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0101D60 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024DD40 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 IsDxgmms2; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // rdx
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  DXG_VMBUS_CHANNEL_BASE *v30; // rcx
  struct _MDL *v31; // r9
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+30h] [rbp-48h] BYREF
  int v49; // [rsp+38h] [rbp-40h]
  int v50; // [rsp+3Ch] [rbp-3Ch]
  int v51; // [rsp+40h] [rbp-38h]
  int v52; // [rsp+48h] [rbp-30h]
  int v53; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v54; // [rsp+50h] [rbp-28h]

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  v8 = a2;
  if ( *(_BYTE *)(v6 + 209) )
  {
    v30 = (DXG_VMBUS_CHANNEL_BASE *)(v6 + 4240);
    v31 = (struct _MDL *)*(unsigned int *)(*(_QWORD *)(v6 + 4304) + 4312LL);
    v48 = 0LL;
    v49 = 0;
    v50 = 0;
    v51 = 43;
    v52 = (int)v31;
    v53 = a2;
    v54 = a3;
    return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
             v30,
             (struct DXGKVMB_COMMAND_BASE *)&v48,
             0x28u,
             v31);
  }
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v9, &Dxgk_FlushScheduler, v10);
  v12 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = v5;
  WdLogEvent5_WdEvent(v12);
  v16 = 1;
  if ( (int)v8 > 6 )
  {
    if ( (_DWORD)v8 == 7 )
    {
LABEL_7:
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v47 = WdLogNewEntry5_WdAssertion(v18, v17);
        *(_QWORD *)(v47 + 24) = 2645LL;
        WdLogEvent5_WdAssertion(v47);
      }
      ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 10);
      return 0LL;
    }
    if ( (_DWORD)v8 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v46 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v46 + 24) = 2650LL;
        WdLogEvent5_WdAssertion(v46);
      }
      if ( !IsDxgmms2 )
      {
        LODWORD(v25) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
        if ( (*v25 & 0x10) != 0 )
          return 0LL;
      }
      v26 = 1LL;
      LOBYTE(v15) = a4 != 0;
      goto LABEL_27;
    }
    v14 = (unsigned int)(v8 - 9);
    if ( (_DWORD)v8 != 9 )
    {
      if ( (_DWORD)v8 == 10 )
        goto LABEL_7;
      goto LABEL_45;
    }
LABEL_13:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v45 + 24) = 2604LL;
      WdLogEvent5_WdAssertion(v45);
    }
    if ( IsDxgmms2 )
    {
      if ( (_DWORD)v5 == -1 )
        goto LABEL_19;
    }
    else
    {
      LODWORD(v22) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
      if ( (*v22 & 0x10) != 0 )
      {
LABEL_19:
        ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 9);
        return 0LL;
      }
    }
    LOBYTE(v15) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 624),
      1LL,
      (unsigned int)v5,
      v15);
    goto LABEL_19;
  }
  if ( (_DWORD)v8 == 6 )
    goto LABEL_13;
  v27 = v8 - 1;
  if ( !v27 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v35 + 24) = 2586LL;
      WdLogEvent5_WdAssertion(v35);
    }
    LOBYTE(v15) = a4 != 0;
    v26 = 0LL;
LABEL_27:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 624),
      v26,
      (unsigned int)v5,
      v15);
    return 0LL;
  }
  v32 = v27 - 1;
  if ( !v32 )
    goto LABEL_46;
  v33 = v32 - 1;
  if ( !v33 )
  {
    v16 = 6;
    goto LABEL_46;
  }
  v34 = v33 - 1;
  if ( !v34 )
  {
    v16 = 7;
    goto LABEL_46;
  }
  if ( v34 == 1 )
  {
    v16 = 15;
    goto LABEL_46;
  }
LABEL_45:
  v36 = WdLogNewEntry5_WdAssertion(v14, v13);
  *(_QWORD *)(v36 + 24) = 2676LL;
  WdLogEvent5_WdAssertion(v36);
LABEL_46:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 176LL) != 2 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v39 + 24) = 2692LL;
    WdLogEvent5_WdAssertion(v39);
  }
  v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL) + 40LL))(
          *(_QWORD *)(a1 + 624),
          v16);
  v43 = v40;
  if ( v16 >= 6 && v40 < 0 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v42, v41);
    *(_QWORD *)(v44 + 24) = 2699LL;
    WdLogEvent5_WdAssertion(v44);
  }
  return v43;
}
