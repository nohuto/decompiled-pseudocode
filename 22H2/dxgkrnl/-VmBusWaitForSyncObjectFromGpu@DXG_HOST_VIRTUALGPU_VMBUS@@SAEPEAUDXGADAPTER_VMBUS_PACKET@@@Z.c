/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0251530
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017AD0 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0017BF8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040684 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00F6020 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012AE78 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C0274E08 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  UINT v29; // esi
  unsigned int v30; // r12d
  __int64 v31; // rcx
  D3DKMT_HANDLE v32; // r13d
  unsigned int v33; // esi
  __int64 v34; // rdx
  int v35; // r8d
  int EntryType; // esi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  const unsigned __int64 *v40; // r9
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  _DWORD v46[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v47; // [rsp+38h] [rbp-61h]
  __int64 v48; // [rsp+40h] [rbp-59h]
  _BYTE v49[16]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v50[8]; // [rsp+58h] [rbp-41h] BYREF
  DXGPUSHLOCK *v51; // [rsp+60h] [rbp-39h]
  int v52; // [rsp+68h] [rbp-31h]
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v53; // [rsp+70h] [rbp-29h] BYREF
  int v54; // [rsp+100h] [rbp+67h] BYREF
  struct DXGCONTEXT *v55; // [rsp+108h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v56; // [rsp+110h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v51);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v52 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v54 = 0;
    v9 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v9 )
      goto LABEL_37;
    v55 = 0LL;
    v56 = 0LL;
    Current = DXGPROCESS::GetCurrent(v8, v7, v10, v11);
    v15 = Current;
    if ( !Current )
    {
      v16 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v16 + 24) = PsGetCurrentProcess(v18, v17, v19, v20);
      v21 = v16;
LABEL_34:
      WdLogEvent5_WdError(v21);
      goto LABEL_35;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v46, *(_DWORD *)(v9 + 24), Current, &v55, 0);
    if ( !v55 )
    {
      DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
        (DXGHWQUEUEBYHANDLE *)v49,
        *(_DWORD *)(v9 + 24),
        (struct _KTHREAD **)v15,
        &v56,
        0);
      if ( !v56 )
      {
        v24 = WdLogNewEntry5_WdError(v23, v22);
        *(_QWORD *)(v24 + 24) = *(unsigned int *)(v9 + 24);
        WdLogEvent5_WdError(v24);
        v54 = -1073741811;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v49, v25);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v46);
LABEL_36:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v54, 4u);
        v5 = 1;
        goto LABEL_37;
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v49, v22);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v46);
    v29 = *(_DWORD *)(v9 + 28);
    if ( v29 - 1 > 0xFFFE )
    {
      v21 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v21 + 24) = *(unsigned int *)(v9 + 28);
      goto LABEL_34;
    }
    v30 = 12 * v29 + 40;
    if ( *((_DWORD *)a1 + 22) < v30 )
    {
      v31 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v31 + 24) = v30;
LABEL_13:
      WdLogEvent5_WdWarning(v31);
LABEL_35:
      v54 = -1073741811;
      goto LABEL_36;
    }
    v32 = *(_DWORD *)(v9 + 24);
    if ( v55 )
    {
      memset(&v53, 0, sizeof(v53));
      v53.hContext = v32;
      v53.ObjectCount = v29;
      v53.ObjectHandleArray = (const D3DKMT_HANDLE *)(v9 + 8 * v29 + 40);
      if ( *(_BYTE *)(v9 + 32) )
        v53.FenceValue = *(_QWORD *)(v9 + 40);
      else
        v53.FenceValue = 0LL;
      v33 = *(_DWORD *)(v9 + 8 * v29 + 40);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v15 + 208));
      v34 = (v33 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v34 < *((_DWORD *)v15 + 64)
        && (v35 = *(_DWORD *)(*((_QWORD *)v15 + 30) + 16LL * (unsigned int)v34 + 8),
            ((v33 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v15 + 30) + 16LL * (unsigned int)v34 + 8) & 0x60))
        && (v35 & 0x2000) == 0
        && (v35 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)v15 + 240, v34);
      }
      else
      {
        EntryType = 0;
      }
      ExReleasePushLockSharedEx((char *)v15 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( EntryType != 8 && *(_BYTE *)(v9 + 32) )
      {
        v31 = WdLogNewEntry5_WdWarning(v38, v37, v39);
        *(_QWORD *)(v31 + 24) = 3812LL;
        goto LABEL_13;
      }
      v40 = 0LL;
      if ( !*(_BYTE *)(v9 + 32) )
        v40 = (const unsigned __int64 *)(v9 + 40);
      v41 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v53, 0, 0LL, v40, 0);
    }
    else
    {
      v46[0] = *(_DWORD *)(v9 + 24);
      v48 = v9 + 40;
      v46[1] = v29;
      v47 = v9 + 8 * v29 + 40;
      v41 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal(v46, 0LL);
    }
    v54 = v41;
    if ( v41 < 0 )
    {
      v44 = WdLogNewEntry5_WdError(v43, v42);
      *(_QWORD *)(v44 + 24) = v54;
      WdLogEvent5_WdError(v44);
    }
    goto LABEL_36;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 3756LL;
  WdLogEvent5_WdError(v6);
LABEL_37:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
  return v5;
}
