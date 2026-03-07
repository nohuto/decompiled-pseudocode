__int64 __fastcall DxgkGetDeviceStateInternal(ULONG64 a1, char a2, __int64 a3)
{
  int v5; // r14d
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rdi
  struct DXGPROCESS *v10; // r13
  _D3DKMT_GETDEVICESTATE *v11; // rbx
  _D3DKMT_GETDEVICESTATE *v12; // rax
  volatile signed __int64 *v13; // rcx
  volatile signed __int32 *v14; // rdx
  struct DXGADAPTER *v15; // r8
  D3DKMT_DEVICESTATE_TYPE v16; // ecx
  D3DKMT_DEVICEPRESENT_STATE *p_PresentState; // rdx
  unsigned int LastCompletedPresentIdDWM; // r13d
  int v19; // ecx
  __int64 v20; // rcx
  bool v21; // al
  int v22; // eax
  D3DKMT_DEVICESTATE_TYPE v23; // eax
  DXGGLOBAL **v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  D3DKMT_DEVICESTATE_TYPE StateType; // ecx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  D3DKMT_DEVICESTATE_TYPE v39; // eax
  __int32 v40; // ecx
  __int32 v41; // ecx
  __int64 v42; // r10
  __int64 v43; // rax
  __int64 VidPnSourceId; // rcx
  __int64 v45; // rax
  UINT SyncRefreshCount; // eax
  __int64 v47; // [rsp+20h] [rbp-148h]
  __int64 v48; // [rsp+28h] [rbp-140h]
  __int64 v49; // [rsp+30h] [rbp-138h]
  __int64 v50; // [rsp+38h] [rbp-130h]
  LARGE_INTEGER SyncQPCTime; // [rsp+40h] [rbp-128h]
  LARGE_INTEGER SyncGPUTime; // [rsp+48h] [rbp-120h]
  int v53; // [rsp+50h] [rbp-118h]
  struct DXGDEVICE *v54; // [rsp+60h] [rbp-108h] BYREF
  volatile signed __int32 *v55; // [rsp+68h] [rbp-100h]
  __int64 v56; // [rsp+70h] [rbp-F8h] BYREF
  int v57; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v58; // [rsp+80h] [rbp-E8h]
  char v59; // [rsp+88h] [rbp-E0h]
  struct DXGADAPTER *v60; // [rsp+90h] [rbp-D8h]
  struct DXGDEVICE *v61; // [rsp+98h] [rbp-D0h] BYREF
  volatile signed __int64 *v62; // [rsp+A0h] [rbp-C8h]
  volatile signed __int64 *v63; // [rsp+A8h] [rbp-C0h]
  struct DXGDEVICE *v64; // [rsp+B0h] [rbp-B8h]
  DXGSESSIONMGR *v65; // [rsp+B8h] [rbp-B0h]
  volatile signed __int64 *v66; // [rsp+C0h] [rbp-A8h]
  _D3DKMT_GETDEVICESTATE v67; // [rsp+C8h] [rbp-A0h] BYREF
  __int128 v68; // [rsp+100h] [rbp-68h] BYREF
  __int128 v69; // [rsp+110h] [rbp-58h]
  __int128 v70; // [rsp+120h] [rbp-48h]
  __int64 v71; // [rsp+130h] [rbp-38h]

  v57 = -1;
  v5 = 0;
  v58 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v59 = 1;
    v57 = 2028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2028);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v57, 2028);
  LODWORD(v56) = 0;
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v10 )
      goto LABEL_6;
LABEL_5:
    v10 = v9;
    goto LABEL_6;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  if ( !v10 )
  {
    LastCompletedPresentIdDWM = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
    if ( !v59 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return LastCompletedPresentIdDWM;
    goto LABEL_134;
  }
  memset(&v67, 0, sizeof(v67));
  v11 = &v67;
  if ( a2 )
  {
    v12 = (_D3DKMT_GETDEVICESTATE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_D3DKMT_GETDEVICESTATE *)MmUserProbeAddress;
    v67 = *v12;
  }
  else
  {
    v11 = (_D3DKMT_GETDEVICESTATE *)a1;
  }
  if ( !a2 || v11->StateType != D3DKMT_DEVICESTATE_RESET )
  {
    v54 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v61, v11->hDevice, (struct _KTHREAD **)v10, &v54);
    v64 = v54;
    if ( !v54 )
    {
      LastCompletedPresentIdDWM = -1073741811;
      WdLogSingleEntry2(2LL, v11->hDevice, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v11->hDevice,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
      if ( !v59 )
        return LastCompletedPresentIdDWM;
      v25 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return LastCompletedPresentIdDWM;
LABEL_134:
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v57);
      return LastCompletedPresentIdDWM;
    }
    v13 = *(volatile signed __int64 **)(*((_QWORD *)v54 + 2) + 16LL);
    v60 = (struct DXGADAPTER *)v13;
    v66 = v13;
    v62 = v13 + 3;
    _InterlockedIncrement64(v13 + 3);
    v63 = v13 + 17;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v63, 0LL);
    v14 = (volatile signed __int32 *)(v63 + 2);
    v55 = (volatile signed __int32 *)(v63 + 2);
    _InterlockedIncrement((volatile signed __int32 *)v63 + 4);
    v15 = v60;
    if ( !*((_BYTE *)v60 + 209) )
      goto LABEL_15;
    StateType = v11->StateType;
    if ( ((StateType - 1) & 0xFFFFFFFA) != 0 || StateType == D3DKMT_DEVICESTATE_PRESENT )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) < 0x20u )
      {
        v14 = v55;
      }
      else
      {
        v65 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v65 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v35, v34, v15, v36);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v65,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        v14 = v55;
        if ( *((_DWORD *)SessionDataForSpecifiedSession + 4738) && v11->StateType == D3DKMT_DEVICESTATE_PRESENT_DWM )
        {
          v15 = v60;
          goto LABEL_77;
        }
      }
LABEL_15:
      v16 = v11->StateType;
      if ( v16 == D3DKMT_DEVICESTATE_EXECUTION )
      {
        p_PresentState = &v11->PresentState;
        LastCompletedPresentIdDWM = 0;
        LODWORD(v56) = 0;
        if ( v11 == (_D3DKMT_GETDEVICESTATE *)-8LL )
        {
          WdLogSingleEntry1(1LL, 10066LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pExecutionState != NULL", 10066LL, 0LL, 0LL, 0LL, 0LL);
          p_PresentState = 0LL;
        }
        v19 = *((_DWORD *)v54 + 152);
        if ( v19 == 1 )
        {
          v15 = v54;
          if ( (*((_BYTE *)v54 + 1901) & 1) != 0 )
          {
            v20 = *(unsigned int *)(*((_QWORD *)v54 + 60) + 16LL);
          }
          else
          {
            LastCompletedPresentIdDWM = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v54 + 2) + 736LL)
                                                                                                 + 8LL)
                                                                                     + 192LL))(
                                          *((_QWORD *)v54 + 100),
                                          &v56);
            v20 = (unsigned int)v56;
            p_PresentState = &v11->PresentState;
          }
          v21 = (int)v20 < 0;
          LODWORD(v20) = v20 & 0x7FFFFFFF;
          LODWORD(v56) = v20;
          if ( (LastCompletedPresentIdDWM & 0x80000000) != 0 )
            goto LABEL_27;
          if ( (_DWORD)v20 )
          {
            v20 = (unsigned int)(v20 - 2);
            v15 = (struct DXGADAPTER *)0x1C0000000LL;
            switch ( (int)v20 )
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
                goto LABEL_120;
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
              case 24:
                goto LABEL_121;
              default:
                WdLogSingleEntry1(1LL, 10154LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"Unexpected device error!",
                  10154LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v11->PresentState.VidPnSourceId = 5;
                break;
            }
            goto LABEL_27;
          }
          if ( !v21 && !*((_BYTE *)v54 + 73) )
          {
            v22 = 1;
LABEL_26:
            p_PresentState->VidPnSourceId = v22;
LABEL_27:
            v14 = v55;
            goto LABEL_28;
          }
        }
        else
        {
          v20 = (unsigned int)(v19 - 2);
          if ( (_DWORD)v20 )
          {
            v20 = (unsigned int)(v20 - 1);
            if ( (_DWORD)v20 )
            {
              if ( (_DWORD)v20 == 1 )
              {
LABEL_121:
                p_PresentState->VidPnSourceId = 4;
              }
              else
              {
                WdLogSingleEntry1(1LL, 10166LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"Unexpected device execution state!",
                  10166LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v11->PresentState.VidPnSourceId = 4;
              }
            }
            else
            {
LABEL_120:
              p_PresentState->VidPnSourceId = 3;
            }
            goto LABEL_27;
          }
        }
        v22 = 2;
        goto LABEL_26;
      }
      v40 = v16 - 2;
      if ( v40 )
      {
        v41 = v40 - 2;
        if ( v41 )
        {
          v20 = (unsigned int)(v41 - 1);
          if ( (_DWORD)v20 )
          {
            if ( (_DWORD)v20 == 1 )
            {
              v20 = *((unsigned int *)v54 + 152);
              if ( (_DWORD)v20 == 1 )
              {
                LastCompletedPresentIdDWM = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v54 + 2) + 736LL) + 8LL)
                                                                                              + 184LL))(
                                              *((_QWORD *)v54 + 100),
                                              v11->PresentState.VidPnSourceId,
                                              0LL);
                v11->PresentQueueState.bQueuedPresentLimitReached = 0;
                v14 = v55;
                if ( LastCompletedPresentIdDWM == -1071775486 )
                {
                  LastCompletedPresentIdDWM = 0;
                  v11->PresentQueueState.bQueuedPresentLimitReached = 1;
                }
              }
              else
              {
                LastCompletedPresentIdDWM = -1073741130;
              }
            }
            else
            {
              LastCompletedPresentIdDWM = -1073741811;
            }
          }
          else
          {
            v20 = *((unsigned int *)v54 + 152);
            if ( (_DWORD)v20 == 1 )
            {
              if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v54 + 2) + 16LL)) )
              {
                (*(void (__fastcall **)(_QWORD, D3DKMT_DEVICEPAGEFAULT_STATE *))(*(_QWORD *)(*(_QWORD *)(v42 + 736) + 8LL)
                                                                               + 200LL))(
                  *((_QWORD *)v15 + 100),
                  &v11->PageFaultState);
                LastCompletedPresentIdDWM = v56;
                goto LABEL_27;
              }
              v11->PageFaultState.FaultedPrimitiveAPISequenceNumber = -1LL;
              v11->PresentState.PresentStats.PresentCount = 0;
              v11->PresentState.PresentStats.PresentRefreshCount = -1;
              v11->PresentState.PresentStats.SyncRefreshCount = 0;
              v11->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
              LastCompletedPresentIdDWM = v56;
            }
            else
            {
              LastCompletedPresentIdDWM = -1073741130;
            }
          }
LABEL_28:
          if ( bTracingEnabled )
          {
            v23 = v11->StateType;
            if ( v23 == D3DKMT_DEVICESTATE_EXECUTION )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
                goto LABEL_31;
              LODWORD(v47) = v11->ExecutionState;
              McTemplateK0pt_EtwWriteTransfer(
                (REGHANDLE *)&DxgkControlGuid_Context,
                &DeviceStateEvent,
                (__int64)v15,
                v54,
                v47);
LABEL_132:
              v14 = v55;
              goto LABEL_31;
            }
            if ( v23 == D3DKMT_DEVICESTATE_PRESENT )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
                goto LABEL_31;
              v53 = 0;
              SyncGPUTime = v11->PresentState.PresentStats.SyncGPUTime;
              SyncQPCTime = v11->PresentState.PresentStats.SyncQPCTime;
              SyncRefreshCount = v11->PresentState.PresentStats.SyncRefreshCount;
              goto LABEL_128;
            }
            if ( v23 == D3DKMT_DEVICESTATE_PRESENT_DWM && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              v53 = 1;
              SyncGPUTime.QuadPart = 0LL;
              SyncQPCTime = v11->PresentState.PresentStats.SyncGPUTime;
              SyncRefreshCount = v11->PresentState.PresentStats.SyncQPCTime.LowPart;
LABEL_128:
              LODWORD(v50) = SyncRefreshCount;
              LODWORD(v49) = v11->PresentState.PresentStats.PresentRefreshCount;
              LODWORD(v48) = v11->PresentState.PresentStats.PresentCount;
              LODWORD(v47) = v11->ExecutionState;
              McTemplateK0pqqqqxxt_EtwWriteTransfer(
                v20,
                (__int64)v14,
                (__int64)v15,
                v54,
                v47,
                v48,
                v49,
                v50,
                SyncQPCTime.QuadPart,
                SyncGPUTime.QuadPart,
                v53);
              goto LABEL_132;
            }
          }
LABEL_31:
          if ( (LastCompletedPresentIdDWM & 0x80000000) == 0 && a2 )
          {
            if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_OWORD *)a1 = *(_OWORD *)&v11->hDevice;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v11->PresentQueueState + 1);
            *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v11->PresentQueueState + 3);
            *(_QWORD *)(a1 + 48) = *((_QWORD *)&v11->PresentQueueState + 5);
            v24 = (DXGGLOBAL **)v60;
          }
          else
          {
            v24 = (DXGGLOBAL **)v60;
          }
          _InterlockedDecrement(v14);
          ExReleasePushLockSharedEx(v63, 0LL);
          KeLeaveCriticalRegion();
          if ( _InterlockedExchangeAdd64(v62, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v24[2], (struct DXGADAPTER *)v24);
          if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
          if ( !v59 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
            return LastCompletedPresentIdDWM;
          goto LABEL_134;
        }
        v20 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL) + 200LL) == 1;
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL) + 200LL) != 1 )
        {
          LastCompletedPresentIdDWM = -1073741130;
          goto LABEL_28;
        }
        v43 = *((_QWORD *)v54 + 235);
        if ( !v43
          || (VidPnSourceId = v11->PresentState.VidPnSourceId,
              (unsigned int)VidPnSourceId < *(_DWORD *)(*(_QWORD *)(v43 + 2920) + 96LL)) )
        {
          v68 = 0LL;
          v69 = 0LL;
          v70 = 0LL;
          v71 = 0LL;
          LastCompletedPresentIdDWM = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                                        v54,
                                        v11->PresentState.VidPnSourceId,
                                        (struct _D3DKMT_PRESENT_STATS_DWM2 *)&v68);
          *((_QWORD *)&v11->PresentQueueState + 1) = *(_QWORD *)((char *)&v68 + 4);
          v11->PresentStateDWM.PresentStatsDWM.PresentQPCTime.QuadPart = v69;
          v11->PresentState.PresentStats.SyncQPCTime.LowPart = DWORD2(v69);
          v11->PresentState.PresentStats.SyncGPUTime.QuadPart = v70;
          v11->PresentStateDWM.PresentStatsDWM.CustomPresentDuration = DWORD2(v70);
          goto LABEL_27;
        }
LABEL_104:
        LastCompletedPresentIdDWM = -1073741811;
        WdLogSingleEntry2(3LL, VidPnSourceId, -1073741811LL);
        goto LABEL_27;
      }
      v20 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL) + 200LL) == 1;
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL) + 200LL) == 1 )
      {
        v45 = *((_QWORD *)v54 + 235);
        if ( !v45
          || (VidPnSourceId = v11->PresentState.VidPnSourceId,
              (unsigned int)VidPnSourceId < *(_DWORD *)(*(_QWORD *)(v45 + 2920) + 96LL)) )
        {
          LastCompletedPresentIdDWM = DXGDEVICE::QueryLastCompletedPresentId(
                                        v54,
                                        v11->PresentState.VidPnSourceId,
                                        &v11->PresentState.PresentStats);
          goto LABEL_27;
        }
        goto LABEL_104;
      }
LABEL_110:
      LastCompletedPresentIdDWM = -1073741130;
      goto LABEL_28;
    }
LABEL_77:
    v20 = *((_DWORD *)v15 + 50) == 1;
    v39 = v11->StateType;
    if ( *((_DWORD *)v15 + 50) == 1 )
    {
      if ( v39 == D3DKMT_DEVICESTATE_EXECUTION )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x20u )
        {
          LastCompletedPresentIdDWM = DXGDEVICE::GetDeviceExecutionState(v54, &v11->ExecutionState);
        }
        else
        {
          v11->PresentState.VidPnSourceId = 1;
          LastCompletedPresentIdDWM = v56;
        }
      }
      else
      {
        LastCompletedPresentIdDWM = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                                      (struct DXGADAPTER *)((char *)v15 + 4472),
                                      v10,
                                      v54,
                                      v11);
      }
      goto LABEL_27;
    }
    if ( v39 == D3DKMT_DEVICESTATE_EXECUTION )
    {
      v11->PresentState.VidPnSourceId = 4;
      LastCompletedPresentIdDWM = v56;
      goto LABEL_28;
    }
    goto LABEL_110;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v10 + 11) + 208LL))() )
    v5 = 1;
  *(_DWORD *)(a1 + 8) = v5;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
  if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v57);
  return 0LL;
}
