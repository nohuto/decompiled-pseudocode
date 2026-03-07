__int64 __fastcall DXGHWQUEUE::InitializeOnHost(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // r13
  struct DXGPROCESS *Current; // rax
  _QWORD *v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // r8d
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // ebx
  unsigned int HostProcess; // eax
  void *HwQueueProgressFenceCPUVirtualAddress; // rcx
  int v19; // eax
  __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r8
  _BYTE v25[32]; // [rsp+50h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v7 = *(_QWORD *)(v6 + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25, Current);
  v10 = (_QWORD *)(v7 + 280);
  v11 = HMGRTABLE::AllocHandle((unsigned int *)(v7 + 280), (__int64)this, 15, 0, 0);
  *((_DWORD *)this + 6) = v11;
  v12 = v11;
  if ( v11 )
  {
    v14 = (v11 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *(_DWORD *)(v7 + 296) )
    {
      v15 = *(_DWORD *)(*v10 + 16 * v14 + 8);
      if ( ((v12 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v14 + 8) & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
        *(_DWORD *)(*v10 + 16 * (((unsigned __int64)v12 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    v16 = *(_DWORD *)(*((_QWORD *)this + 2) + 28LL);
    HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v7);
    if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v8 + 4472),
                HostProcess,
                v16,
                a3,
                a2,
                (unsigned int *)this + 7) >= 0
      && *((_DWORD *)this + 7)
      && a2->hHwQueueProgressFence
      && (HwQueueProgressFenceCPUVirtualAddress = a2->HwQueueProgressFenceCPUVirtualAddress) != 0LL
      && a2->HwQueueProgressFenceGPUVirtualAddress )
    {
      v19 = MapGuestFenceCpuVaToHost(
              (unsigned __int64)HwQueueProgressFenceCPUVirtualAddress,
              (void **)this + 15,
              (unsigned __int64 *)this + 16,
              (unsigned int *)this + 34);
      v20 = v19;
      if ( v19 >= 0 )
      {
        a2->HwQueueProgressFenceCPUVirtualAddress = (void *)*((_QWORD *)this + 15);
        v21 = *((unsigned int *)this + 6);
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 248));
        v22 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v22 < *(_DWORD *)(v7 + 296)
          && (((unsigned int)v21 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v22 + 8) & 0x60)
          && (*(_DWORD *)(*v10 + 16 * v22 + 8) & 0x1F) != 0 )
        {
          v23 = 2 * ((v21 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(*v10 + 8 * v23 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*v10 + 8 * v23 + 8) &= ~0x2000u;
        }
        *(_QWORD *)(v7 + 256) = 0LL;
        ExReleasePushLockExclusiveEx(v7 + 248, 0LL);
        KeLeaveCriticalRegion();
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventCreateHwQueue,
            v24,
            *((_QWORD *)this + 2),
            *((unsigned int *)this + 6),
            this);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry2(2LL, v19, 227LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
          v20,
          227LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v20;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, *((_QWORD *)this + 2));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGCONTEXT 0x%I64x Failed to create HwQueue on the host",
        *((_QWORD *)this + 2),
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    if ( *(struct _KTHREAD **)(v7 + 256) != KeGetCurrentThread() )
    {
      *(_QWORD *)(v7 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    return 3221225495LL;
  }
}
