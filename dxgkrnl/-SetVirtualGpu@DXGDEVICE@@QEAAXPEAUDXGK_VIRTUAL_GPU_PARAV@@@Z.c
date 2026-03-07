void __fastcall DXGDEVICE::SetVirtualGpu(DXGDEVICE *this, struct DXGK_VIRTUAL_GPU_PARAV *a2)
{
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 80));
  *((_QWORD *)this + 14) = a2;
  *((_QWORD *)this + 11) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 80, 0LL);
  KeLeaveCriticalRegion();
}
