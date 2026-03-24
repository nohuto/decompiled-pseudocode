/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DB930
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C003AC04 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D7ED0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D80A0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0127994 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpuCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  void *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 Pool2; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  _BYTE v30[24]; // [rsp+20h] [rbp-40h] BYREF
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v31; // [rsp+38h] [rbp-28h] BYREF
  int v32; // [rsp+80h] [rbp+20h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v30,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = 1306LL;
    WdLogEvent5_WdError(v5);
    goto LABEL_27;
  }
  v6 = v1 + 40;
  if ( !v1 )
    v6 = 0LL;
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>(v6);
  v10 = v7;
  if ( v7 )
  {
    v32 = -1073741811;
    memset(&v31, 0, sizeof(v31));
    v11 = 0LL;
    v12 = *(unsigned int *)(v7 + 28);
    v13 = *(_QWORD *)(v10 + 40);
    if ( (_DWORD)v12
      && (v8 = (unsigned int)v12, v9 = 0xFFFFFFFFLL, v14 = 4 * v12, v14 <= 0xFFFFFFFF)
      && (v8 *= 8LL, v8 <= 0xFFFFFFFF) )
    {
      v15 = v14 + 56;
      if ( v15 < 0x38 )
      {
        v17 = WdLogNewEntry5_WdWarning(v8, v13, 0xFFFFFFFFLL);
        *(_QWORD *)(v17 + 24) = 1326LL;
      }
      else
      {
        v16 = v15 + (unsigned int)v8;
        if ( (unsigned int)v16 < v15 )
        {
          v17 = WdLogNewEntry5_WdWarning(v16, v13, 0xFFFFFFFFLL);
          *(_QWORD *)(v17 + 24) = 1331LL;
        }
        else if ( *(_DWORD *)(v1 + 128) >= (unsigned int)v16 )
        {
          if ( v13 )
          {
            Pool2 = ExAllocatePool2(64LL, 56LL, 1265072196LL);
            v11 = (void *)Pool2;
            if ( Pool2 )
            {
              v24 = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 104LL) + 128LL;
              *(_BYTE *)(Pool2 + 19) = 1;
              *(_QWORD *)(Pool2 + 24) = v24;
              *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(v10 + 40);
              *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(v10 + 48);
              DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)Pool2);
              v31.ObjectHandleArray = (const D3DKMT_HANDLE *)(v10 + 56);
              v31.FenceValueArray = (const UINT64 *)(v10 + 4 * (*(unsigned int *)(v10 + 28) + 14LL));
              v31.Flags.Value = *(_DWORD *)(v10 + 32);
              v31.hDevice = *(_DWORD *)(v10 + 24);
              v31.ObjectCount = *(_DWORD *)(v10 + 28);
              v31.hAsyncEvent = v11;
              v32 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v31, 0, v11);
            }
            else
            {
              v23 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
              *(_QWORD *)(v23 + 24) = 1352LL;
              WdLogEvent5_WdLowResource(v23);
              v32 = -1073741801;
            }
            goto LABEL_22;
          }
          v17 = WdLogNewEntry5_WdWarning(v16, 0LL, 0xFFFFFFFFLL);
          *(_QWORD *)(v17 + 24) = 1345LL;
        }
        else
        {
          v17 = WdLogNewEntry5_WdWarning(v16, v13, 0xFFFFFFFFLL);
          *(_QWORD *)(v17 + 24) = 1336LL;
        }
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v8, v13, v9);
      *(_QWORD *)(v17 + 24) = 1321LL;
    }
    WdLogEvent5_WdWarning(v17);
LABEL_22:
    VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), &v32, 4u);
    if ( v32 < 0 )
    {
      if ( v11 )
        DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)v11);
      v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = 1385LL;
      WdLogEvent5_WdWarning(v28);
    }
    v4 = 1;
  }
LABEL_27:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  return v4;
}
