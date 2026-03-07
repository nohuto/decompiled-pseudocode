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
