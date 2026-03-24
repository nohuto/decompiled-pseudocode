/*
 * XREFs of ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C026E5FC
 * Callers:
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C026DF3C (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0047124 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C023B0F4 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z @ 0x1C0247B3C (-VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGHWQUEUE::InitializeOnHost(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v6; // r9
  __int64 v7; // rbp
  __int64 v8; // r13
  struct _KTHREAD **Current; // rax
  __int64 *v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // ebx
  unsigned int HostProcess; // eax
  __int64 v22; // rdx
  void *HwQueueProgressFenceCPUVirtualAddress; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  _BYTE v36[32]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v7 = *(_QWORD *)(v6 + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, (__int64)a3, v6);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36, Current);
  v10 = (__int64 *)(v7 + 240);
  v11 = HMGRTABLE::AllocHandle((unsigned int *)(v7 + 240), (__int64)this, 15, 0, 0);
  *((_DWORD *)this + 6) = v11;
  v14 = v11;
  if ( !v11 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, 0LL, v13);
    LODWORD(v16) = -1073741801;
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v15);
    if ( *(struct _KTHREAD **)(v7 + 216) != KeGetCurrentThread() )
    {
      *(_QWORD *)(v7 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
    return (unsigned int)v16;
  }
  v18 = (v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 < *(_DWORD *)(v7 + 256) )
  {
    v19 = *(_DWORD *)(*v10 + 16 * v18 + 8);
    if ( ((v14 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v18 + 8) & 0x60) && (v19 & 0x2000) == 0 && (v19 & 0x1F) != 0 )
      *(_DWORD *)(*v10 + 16 * (((unsigned __int64)v14 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  v20 = *(_DWORD *)(*((_QWORD *)this + 2) + 28LL);
  HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v7);
  if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v8 + 4240),
              HostProcess,
              v20,
              a3,
              a2,
              (unsigned int *)this + 7) >= 0
    && *((_DWORD *)this + 7)
    && a2->hHwQueueProgressFence
    && (HwQueueProgressFenceCPUVirtualAddress = a2->HwQueueProgressFenceCPUVirtualAddress) != 0LL
    && a2->HwQueueProgressFenceGPUVirtualAddress )
  {
    v24 = MapGuestFenceCpuVaToHost(
            (unsigned __int64)HwQueueProgressFenceCPUVirtualAddress,
            (void **)this + 13,
            (unsigned __int64 *)this + 14,
            (unsigned int *)this + 30);
    v16 = v24;
    if ( v24 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v27 + 24) = v16;
      *(_QWORD *)(v27 + 32) = 203LL;
      WdLogEvent5_WdError(v27);
      return (unsigned int)v16;
    }
    a2->HwQueueProgressFenceCPUVirtualAddress = (void *)*((_QWORD *)this + 13);
    v28 = *((unsigned int *)this + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 208));
    v29 = ((unsigned int)v28 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *(_DWORD *)(v7 + 256) )
    {
      v30 = *v10;
      v31 = ((unsigned int)v28 >> 25) & 0x60;
      if ( (((unsigned int)v28 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v29 + 8) & 0x60)
        && (*(_DWORD *)(*v10 + 16 * v29 + 8) & 0x1F) != 0 )
      {
        v32 = 2 * ((v28 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v30 + 8 * v32 + 8) & 0x2000) == 0 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v33 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v33);
          v30 = *v10;
        }
        *(_DWORD *)(v30 + 8 * v32 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v7 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        *((unsigned int *)this + 6),
        &EventCreateHwQueue,
        v34,
        *((_QWORD *)this + 2),
        *((unsigned int *)this + 6),
        this);
    return 0LL;
  }
  else
  {
    v35 = WdLogNewEntry5_WdError(HwQueueProgressFenceCPUVirtualAddress, v22);
    *(_QWORD *)(v35 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v35);
    return 3221225473LL;
  }
}
