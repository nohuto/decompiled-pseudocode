/*
 * XREFs of ??0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z @ 0x1C0051758
 * Callers:
 *     ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1C0312C4C (-DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z.c)
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1C03130A8 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 *     ?DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z @ 0x1C0313948 (-DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z.c)
 *     ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1C0313C48 (-DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C80 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DXGDOORBELLAPILOCKS *__fastcall DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS(
        DXGDOORBELLAPILOCKS *this,
        struct DXGHWQUEUE *a2,
        int *a3)
{
  __int64 v6; // r9
  int v7; // eax
  int v8; // edx
  int v9; // r8d

  *(_QWORD *)this = a2;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDOORBELLAPILOCKS *)((char *)this + 8),
    *(struct DXGDEVICE **)(*((_QWORD *)a2 + 2) + 16LL));
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
    (DXGDOORBELLAPILOCKS *)((char *)this + 24),
    (struct _KTHREAD **)(*((_QWORD *)a2 + 2) + 448LL),
    0);
  DXGPUSHLOCK::AcquireExclusive(*((DXGPUSHLOCK **)this + 4));
  *((_DWORD *)this + 10) = 2;
  *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 16LL);
  *((_BYTE *)this + 64) = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGDOORBELLAPILOCKS *)((char *)this + 48));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)this + 72, *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL), 0, v6, 0);
  *a3 = 0;
  v7 = COREDEVICEACCESS::AcquireShared((DXGDOORBELLAPILOCKS *)((char *)this + 72), 0LL);
  *a3 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 16LL), v7);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          *a3,
          v8,
          v9,
          0LL,
          0,
          -1,
          L"CoreDeviceAccess for DXGDEVICE 0x%I64x failed with NTSTATUS 0x%I64x",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 16LL),
          *a3,
          0LL,
          0LL,
          0LL);
    }
  }
  return this;
}
