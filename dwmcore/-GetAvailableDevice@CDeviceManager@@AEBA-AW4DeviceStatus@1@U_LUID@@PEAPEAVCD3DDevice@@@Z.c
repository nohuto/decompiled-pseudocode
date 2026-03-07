__int64 __fastcall CDeviceManager::GetAvailableDevice(CDeviceManager *a1, struct _LUID a2, _QWORD *a3)
{
  const struct CDeviceManager::DeviceInfo *DeviceInfo; // rax
  unsigned int v5; // r11d
  __int64 v6; // rcx

  *a3 = 0LL;
  DeviceInfo = CDeviceManager::FindDeviceInfo(a1, a2);
  if ( DeviceInfo )
  {
    v6 = *(_QWORD *)DeviceInfo;
    if ( *(_DWORD *)(*(_QWORD *)DeviceInfo + 1088LL) < (signed int)v5 )
    {
      return 2;
    }
    else
    {
      *a3 = v6;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 8));
      return 1;
    }
  }
  return v5;
}
