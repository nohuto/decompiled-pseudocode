/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0390AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0003AE4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC44 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0186640 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C01A6278 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C02231E8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C03713B8 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // r15
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  UINT v13; // esi
  unsigned int v14; // eax
  D3DKMT_HANDLE v15; // r13d
  unsigned int v16; // r12d
  volatile signed __int32 *v17; // rsi
  unsigned int v18; // edx
  int v19; // r8d
  int EntryType; // r15d
  unsigned __int64 *v21; // r9
  int v22; // eax
  const wchar_t *v23; // r9
  int v24; // eax
  _DWORD v26[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v27; // [rsp+58h] [rbp-61h]
  __int64 v28; // [rsp+60h] [rbp-59h]
  _BYTE v29[16]; // [rsp+68h] [rbp-51h] BYREF
  char v30[8]; // [rsp+78h] [rbp-41h] BYREF
  DXGPUSHLOCK *v31; // [rsp+80h] [rbp-39h]
  int v32; // [rsp+88h] [rbp-31h]
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v33; // [rsp+90h] [rbp-29h] BYREF
  int v34; // [rsp+120h] [rbp+67h] BYREF
  struct DXGCONTEXT *v35; // [rsp+128h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v36; // [rsp+130h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v31);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v32 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v34 = 0;
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v5 )
      goto LABEL_38;
    v35 = 0LL;
    v36 = 0LL;
    Current = DXGPROCESS::GetCurrent(v4);
    v8 = Current;
    if ( !Current )
    {
      CurrentProcess = PsGetCurrentProcess(v7);
      WdLogSingleEntry1(2LL, CurrentProcess);
      v11 = PsGetCurrentProcess(v10);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"unexpected process: 0x%I64x", v11, 0LL, 0LL, 0LL, 0LL);
LABEL_6:
      v34 = -1073741811;
LABEL_36:
      HandleAsyncCommandError((__int64 *)a1, v34, 0, 3);
      goto LABEL_37;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26, *(_DWORD *)(v5 + 24), Current, &v35, 0, 0);
    if ( !v35 )
    {
      DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v29, *(_DWORD *)(v5 + 24), v8, &v36, 0);
      if ( !v36 )
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid SubmitWait handle: 0x%I64x",
          *(unsigned int *)(v5 + 24),
          0LL,
          0LL,
          0LL,
          0LL);
        v34 = -1073741811;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v29);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26);
        goto LABEL_35;
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v29);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26);
    v13 = *(_DWORD *)(v5 + 28);
    if ( v13 - 1 > 0xFFFE )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 28));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid object count 0x%I64x",
        *(unsigned int *)(v5 + 28),
        0LL,
        0LL,
        0LL,
        0LL);
      v34 = -1073741811;
    }
    else
    {
      v14 = 12 * v13 + 40;
      if ( *((_DWORD *)a1 + 36) < v14 )
      {
        WdLogSingleEntry1(3LL, v14);
        goto LABEL_6;
      }
      v15 = *(_DWORD *)(v5 + 24);
      if ( v35 )
      {
        memset(&v33, 0, sizeof(v33));
        v33.hContext = v15;
        v33.ObjectCount = v13;
        v33.ObjectHandleArray = (const D3DKMT_HANDLE *)(v5 + 8 * v13 + 40);
        if ( *(_BYTE *)(v5 + 32) )
          v33.FenceValue = *(_QWORD *)(v5 + 40);
        else
          v33.FenceValue = 0LL;
        v16 = *(_DWORD *)(v5 + 8 * v13 + 40);
        v17 = (volatile signed __int32 *)((char *)v8 + 248);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v8 + 248));
        v18 = (v16 >> 6) & 0xFFFFFF;
        if ( v18 < *((_DWORD *)v8 + 74)
          && (v19 = *(_DWORD *)(*((_QWORD *)v8 + 35) + 16LL * v18 + 8),
              ((v16 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v8 + 35) + 16LL * v18 + 8) & 0x60))
          && (v19 & 0x2000) == 0
          && (v19 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType((__int64)v8 + 280, v18);
        }
        else
        {
          EntryType = 0;
        }
        _InterlockedDecrement(v17 + 4);
        ExReleasePushLockSharedEx(v17, 0LL);
        KeLeaveCriticalRegion();
        if ( EntryType != 8 && *(_BYTE *)(v5 + 32) )
        {
          WdLogSingleEntry1(3LL, 4252LL);
          goto LABEL_6;
        }
        v21 = 0LL;
        if ( !*(_BYTE *)(v5 + 32) )
          v21 = (unsigned __int64 *)(v5 + 40);
        v22 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v33, 0, 0LL, v21, 0);
        v34 = v22;
        if ( v22 >= 0 )
          goto LABEL_37;
        WdLogSingleEntry1(2LL, v22);
        v23 = L"DxgkWaitForSynchronizationObjectFromGpuInternal failed: 0x%I64x";
      }
      else
      {
        v26[0] = *(_DWORD *)(v5 + 24);
        v28 = v5 + 40;
        v26[1] = v13;
        v27 = v5 + 8 * v13 + 40;
        v24 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal((__int64)v26, 0, v12);
        v34 = v24;
        if ( v24 >= 0 )
          goto LABEL_37;
        WdLogSingleEntry1(2LL, v24);
        v23 = L"DxgkSubmitWaitForSyncObjectsToHwQueue failed: 0x%I64x";
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, v34, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_35:
    if ( v34 < 0 )
      goto LABEL_36;
LABEL_37:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v34, 4u);
    v3 = 1;
    goto LABEL_38;
  }
  WdLogSingleEntry1(2LL, 4197LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4197LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_38:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  return v3;
}
