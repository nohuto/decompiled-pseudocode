void VmBusInterfaceDereference(void)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v1; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 896));
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    --g_VgpuVmBusInterfaceRefCount;
    ((void (__fastcall *)(__int64))qword_1C013CE08)(qword_1C013CDF8);
    if ( !g_VgpuVmBusInterfaceRefCount )
      memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
  }
  v1 = DXGGLOBAL::GetGlobal();
  *((_QWORD *)v1 + 113) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 896, 0LL);
  KeLeaveCriticalRegion();
}
