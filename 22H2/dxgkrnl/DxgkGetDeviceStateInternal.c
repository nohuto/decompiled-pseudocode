/*
 * XREFs of DxgkGetDeviceStateInternal @ 0x1C0102270
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0012950 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C0102230 (DxgkGetDeviceState.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02BE8F0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C003A380 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x1C003A6F0 (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C02492BC (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C02568B0 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0256980 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceStateInternal(ULONG64 a1, char a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r13
  _D3DKMT_GETDEVICESTATE *v16; // rbx
  _D3DKMT_GETDEVICESTATE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  volatile signed __int64 *v20; // rcx
  __int64 v21; // r8
  struct DXGADAPTER *v22; // rdx
  __int64 v23; // rcx
  D3DKMT_DEVICEPRESENT_STATE *p_PresentState; // r13
  int v25; // ecx
  int v26; // ecx
  bool v27; // al
  int v28; // ecx
  int v29; // eax
  int DeviceState; // r13d
  __int64 v31; // rcx
  DXGGLOBAL **v32; // rbx
  volatile signed __int64 *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v37; // ecx
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  D3DKMT_DEVICESTATE_TYPE StateType; // ecx
  D3DKMT_DEVICESTATE_TYPE v53; // eax
  int v54; // ecx
  _QWORD *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-B0h]
  char v65; // [rsp+60h] [rbp-A8h]
  struct DXGDEVICE *v66; // [rsp+68h] [rbp-A0h]
  __int64 v67; // [rsp+70h] [rbp-98h]
  struct DXGADAPTER *v68; // [rsp+78h] [rbp-90h]
  struct DXGDEVICE *v69; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int64 *v70; // [rsp+88h] [rbp-80h]
  volatile signed __int64 *v71; // [rsp+90h] [rbp-78h]
  volatile signed __int64 *v72; // [rsp+98h] [rbp-70h]
  _D3DKMT_GETDEVICESTATE v73; // [rsp+A0h] [rbp-68h] BYREF
  int v74; // [rsp+120h] [rbp+18h] BYREF
  struct DXGDEVICE *v75; // [rsp+128h] [rbp+20h] BYREF

  LODWORD(v63) = -1;
  v5 = 0;
  v64 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v65 = 1;
    LODWORD(v63) = 2028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2028);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 2028LL);
  v67 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v15 = *((_QWORD *)Current + 1)) == 0 )
  {
    v15 = v14;
    if ( !v14 )
    {
      v46 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v46 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v46);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v47);
      if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_77;
    }
  }
  memset(&v73, 0, sizeof(v73));
  v16 = &v73;
  if ( a2 )
  {
    v17 = (_D3DKMT_GETDEVICESTATE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v17 = (_D3DKMT_GETDEVICESTATE *)MmUserProbeAddress;
    v73 = *v17;
  }
  else
  {
    v16 = (_D3DKMT_GETDEVICESTATE *)a1;
  }
  if ( !a2 || v16->StateType != D3DKMT_DEVICESTATE_RESET )
  {
    v75 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v69, v16->hDevice, (struct _KTHREAD **)v15, &v75);
    v66 = v75;
    if ( v75 )
    {
      v20 = *(volatile signed __int64 **)(*((_QWORD *)v75 + 2) + 16LL);
      v68 = (struct DXGADAPTER *)v20;
      v72 = v20;
      v71 = v20 + 3;
      _InterlockedIncrement64(v20 + 3);
      v70 = v20 + 17;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v70, 0LL);
      v22 = v68;
      if ( *((_BYTE *)v68 + 209) )
      {
        StateType = v16->StateType;
        if ( ((StateType - 1) & 0xFFFFFFFA) == 0 && StateType != D3DKMT_DEVICESTATE_PRESENT )
        {
          LOBYTE(v5) = *((_DWORD *)v68 + 50) == 1;
          v53 = v16->StateType;
          if ( v5 )
          {
            if ( v53 == D3DKMT_DEVICESTATE_EXECUTION )
            {
              v16->PresentState.VidPnSourceId = 1;
              DeviceState = v67;
            }
            else
            {
              DeviceState = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                              (struct DXGADAPTER *)((char *)v68 + 4240),
                              (struct DXGPROCESS *)v15,
                              v75,
                              v16);
            }
            goto LABEL_26;
          }
          if ( v53 == D3DKMT_DEVICESTATE_EXECUTION )
          {
            v16->PresentState.VidPnSourceId = 4;
            DeviceState = v67;
            goto LABEL_26;
          }
LABEL_102:
          DeviceState = -1073741130;
          goto LABEL_26;
        }
      }
      v23 = (unsigned int)v16->StateType;
      if ( (_DWORD)v23 != 1 )
      {
        v37 = v23 - 2;
        if ( v37 )
        {
          v38 = v37 - 2;
          if ( v38 )
          {
            v54 = v38 - 1;
            if ( !v54 )
            {
              if ( *((_DWORD *)v75 + 144) == 1 )
              {
                if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v66 + 2) + 16LL)) )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v21 + 616) + 8LL) + 200LL))(*((_QWORD *)v75 + 96));
                }
                else
                {
                  *v55 = -1LL;
                  v16->PresentState.PresentStats.PresentCount = 0;
                  v16->PresentState.PresentStats.PresentRefreshCount = -1;
                  v16->PresentState.PresentStats.SyncRefreshCount = 0;
                  v16->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
                }
                DeviceState = v67;
              }
              else
              {
                DeviceState = -1073741130;
              }
              goto LABEL_26;
            }
            if ( v54 != 1 )
            {
              DeviceState = -1073741811;
              goto LABEL_26;
            }
            if ( *((_DWORD *)v75 + 144) != 1 )
            {
              DeviceState = -1073741130;
              goto LABEL_26;
            }
            DeviceState = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 2) + 616LL)
                                                                                        + 8LL)
                                                                            + 184LL))(
                            *((_QWORD *)v75 + 96),
                            v16->PresentState.VidPnSourceId,
                            0LL);
            v16->PresentQueueState.bQueuedPresentLimitReached = 0;
            if ( DeviceState != -1071775486 )
              goto LABEL_26;
            v16->PresentQueueState.bQueuedPresentLimitReached = 1;
            goto LABEL_25;
          }
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 2) + 16LL) + 200LL) != 1 )
          {
            DeviceState = -1073741130;
            goto LABEL_26;
          }
          v39 = *((_QWORD *)v75 + 231);
          if ( !v39
            || (v40 = *(unsigned int *)(*(_QWORD *)(v39 + 2696) + 80LL),
                v16->PresentState.VidPnSourceId < (unsigned int)v40) )
          {
            DeviceState = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                            v75,
                            v16->PresentState.VidPnSourceId,
                            &v16->PresentStateDWM.PresentStatsDWM);
            goto LABEL_26;
          }
        }
        else
        {
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 2) + 16LL) + 200LL) != 1 )
            goto LABEL_102;
          v44 = *((_QWORD *)v75 + 231);
          if ( !v44
            || (v40 = *(unsigned int *)(*(_QWORD *)(v44 + 2696) + 80LL),
                v16->PresentState.VidPnSourceId < (unsigned int)v40) )
          {
            DeviceState = DXGDEVICE::QueryLastCompletedPresentId(
                            v75,
                            v16->PresentState.VidPnSourceId,
                            &v16->PresentState.PresentStats);
            goto LABEL_26;
          }
        }
        v56 = WdLogNewEntry5_WdWarning(v40, v68, v21);
        *(_QWORD *)(v56 + 24) = v16->PresentState.VidPnSourceId;
        DeviceState = -1073741811;
        *(_QWORD *)(v56 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v56);
        goto LABEL_26;
      }
      p_PresentState = &v16->PresentState;
      v74 = 0;
      if ( v16 == (_D3DKMT_GETDEVICESTATE *)-8LL )
      {
        v57 = WdLogNewEntry5_WdAssertion(v23, v68);
        *(_QWORD *)(v57 + 24) = 9963LL;
        WdLogEvent5_WdAssertion(v57);
      }
      v25 = *((_DWORD *)v75 + 144);
      if ( v25 == 1 )
      {
        if ( (*((_BYTE *)v75 + 1869) & 1) != 0 )
        {
          v26 = *(_DWORD *)(*((_QWORD *)v75 + 56) + 16LL);
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 2) + 616LL) + 8LL)
                                                        + 192LL))(
                 *((_QWORD *)v75 + 96),
                 &v74);
          v26 = v74;
        }
        v27 = v26 < 0;
        v28 = v26 & 0x7FFFFFFF;
        v74 = v28;
        if ( v5 < 0 )
          goto LABEL_25;
        if ( v28 )
        {
          v61 = (unsigned int)(v28 - 2);
          switch ( (int)v61 )
          {
            case 0:
            case 9:
            case 10:
            case 11:
              p_PresentState->VidPnSourceId = 5;
              break;
            case 4:
              p_PresentState->VidPnSourceId = 6;
              break;
            case 5:
              goto LABEL_113;
            case 7:
            case 8:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 22:
              p_PresentState->VidPnSourceId = 7;
              break;
            case 12:
            case 20:
            case 23:
              goto LABEL_114;
            default:
              v62 = WdLogNewEntry5_WdAssertion(v61, 0x1C0000000uLL);
              *(_QWORD *)(v62 + 24) = 10046LL;
              WdLogEvent5_WdAssertion(v62);
              v5 = -1073741823;
              p_PresentState->VidPnSourceId = 5;
              break;
          }
          goto LABEL_25;
        }
        if ( !v27 )
        {
          v29 = 1;
LABEL_24:
          p_PresentState->VidPnSourceId = v29;
LABEL_25:
          DeviceState = v5;
LABEL_26:
          if ( bTracingEnabled )
          {
            v31 = (unsigned int)(v16->StateType - 1);
            if ( v16->StateType == D3DKMT_DEVICESTATE_EXECUTION )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0pq_EtwWriteTransfer(v31, &DeviceStateEvent, v21, v75, v16->PresentState.VidPnSourceId);
            }
            else if ( v16->StateType == D3DKMT_DEVICESTATE_PRESENT && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              McTemplateK0pqqqqxx_EtwWriteTransfer(
                v31,
                &DevicePresentStateEvent,
                v21,
                v75,
                v16->PresentState.VidPnSourceId,
                v16->PresentState.PresentStats.PresentCount,
                v16->PresentState.PresentStats.PresentRefreshCount,
                v16->PresentState.PresentStats.SyncRefreshCount,
                v16->PresentState.PresentStats.SyncQPCTime.QuadPart,
                v16->PresentState.PresentStats.SyncGPUTime.QuadPart,
                v63,
                v64);
            }
          }
          if ( DeviceState >= 0 && a2 )
          {
            if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_OWORD *)a1 = *(_OWORD *)&v16->hDevice;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v16->PresentQueueState + 1);
            *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v16->PresentQueueState + 3);
            *(_QWORD *)(a1 + 48) = *((_QWORD *)&v16->PresentQueueState + 5);
            v32 = (DXGGLOBAL **)v68;
          }
          else
          {
            v32 = (DXGGLOBAL **)v68;
          }
          ExReleasePushLockSharedEx(v70, 0LL);
          KeLeaveCriticalRegion();
          v33 = v71;
          if ( _InterlockedExchangeAdd64(v71, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v32[2], (struct DXGADAPTER *)v32);
          if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, (__int64)v33);
          if ( v65 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v63);
          }
          return (unsigned int)DeviceState;
        }
      }
      else
      {
        v58 = v25 - 2;
        if ( v58 )
        {
          v59 = (unsigned int)(v58 - 1);
          if ( (_DWORD)v59 )
          {
            if ( (_DWORD)v59 == 1 )
            {
LABEL_114:
              p_PresentState->VidPnSourceId = 4;
            }
            else
            {
              v60 = WdLogNewEntry5_WdAssertion(v59, v22);
              *(_QWORD *)(v60 + 24) = 10059LL;
              WdLogEvent5_WdAssertion(v60);
              p_PresentState->VidPnSourceId = 4;
              v5 = -1073741823;
            }
          }
          else
          {
LABEL_113:
            p_PresentState->VidPnSourceId = 3;
          }
          goto LABEL_25;
        }
      }
      v29 = 2;
      goto LABEL_24;
    }
    v50 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v50 + 24) = v16->hDevice;
    *(_QWORD *)(v50 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v50);
    if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v51);
    if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_77:
    McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v63);
    return 3221225485LL;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v15 + 88) + 208LL))() )
    v5 = 1;
  *(_DWORD *)(a1 + 8) = v5;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v41);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v63);
  return 0LL;
}
