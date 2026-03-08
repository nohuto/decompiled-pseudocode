/*
 * XREFs of DxgkUnlock2Internal @ 0x1C031DED8
 * Callers:
 *     DxgkUnlock2 @ 0x1C01CC520 (DxgkUnlock2.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03599A0 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C031D8A0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C038B814 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DxgkUnlock2Internal(DXGDEVICE *this, __int64 a2, __int64 a3, struct _D3DKMT_UNLOCK2 *a4)
{
  D3DKMT_HANDLE hAllocation; // ebp
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // ecx
  struct _EX_RUNDOWN_REF *v13; // rdx
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rdi
  struct DXGALLOCATION *v17; // [rsp+78h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a2 + 209) )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(a2 + 4472),
             (struct DXGPROCESS *)a3,
             this,
             a4,
             0);
  hAllocation = a4->hAllocation;
  v9 = a3 + 248;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a3 + 248));
  v10 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v10 < *(_DWORD *)(a3 + 296) )
  {
    v11 = *(_QWORD *)(a3 + 280);
    if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60)
      && (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) == 0 )
    {
      v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
      if ( v12 )
      {
        if ( v12 == 5 )
        {
          v13 = *(struct _EX_RUNDOWN_REF **)(v11 + 16LL * v10);
          goto LABEL_10;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v13 = 0LL;
LABEL_10:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v17, v13);
  _InterlockedDecrement((volatile signed __int32 *)(v9 + 16));
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  v14 = -1073741811;
  if ( v17 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 1) + 16LL) + 16LL) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
    {
      if ( *((_QWORD *)v17 + 3) )
      {
        v15 = DXGDEVICE::Unlock2(this, v17, 1);
        v16 = v15;
        if ( v15 >= 0 )
        {
          v14 = 0;
        }
        else
        {
          WdLogSingleEntry2(2LL, v17, v15);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to unlock allocation 0x%p, returning 0x%x",
            (__int64)v17,
            v16,
            0LL,
            0LL,
            0LL);
          v14 = v16;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, a4->hAllocation, v17);
      }
    }
    else
    {
      WdLogSingleEntry3(3LL, this, v17, -1073741811LL);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, a4->hAllocation);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v17);
  return v14;
}
