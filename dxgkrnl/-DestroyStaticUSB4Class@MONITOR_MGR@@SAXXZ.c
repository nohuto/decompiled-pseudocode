void MONITOR_MGR::DestroyStaticUSB4Class(void)
{
  PVOID v0; // rbx

  v0 = MONITOR_MGR::_pUsb4Manager;
  if ( MONITOR_MGR::_pUsb4Manager )
  {
    USB4_HOSTROUTER_MGR::~USB4_HOSTROUTER_MGR((USB4_HOSTROUTER_MGR *)MONITOR_MGR::_pUsb4Manager);
    operator delete(v0);
    MONITOR_MGR::_pUsb4Manager = 0LL;
  }
}
