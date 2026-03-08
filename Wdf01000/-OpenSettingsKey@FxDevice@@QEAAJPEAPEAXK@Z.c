/*
 * XREFs of ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C003CB50
 * Callers:
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0075808 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0079134 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C0081778 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C00207E8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

__int64 __fastcall FxDevice::OpenSettingsKey(FxDevice *this, void **Key, ACCESS_MASK DesiredAccess)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  ACCESS_MASK v6; // r8d
  NTSTATUS v7; // ebx
  FxAutoRegKey parent; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING wdf; // [rsp+48h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  wchar_t wdf_buffer[4]; // [rsp+88h] [rbp+2Fh] BYREF

  parent.m_Key = 0LL;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( SafePhysicalDevice )
  {
    v7 = IoOpenDeviceRegistryKey(SafePhysicalDevice, 1u, v6, &parent.m_Key);
    if ( v7 >= 0 )
    {
      *(&ObjectAttributes.Length + 1) = 0;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      wcscpy(wdf_buffer, L"WDF");
      *(_QWORD *)&wdf.Length = 524294LL;
      wdf.Buffer = wdf_buffer;
      ObjectAttributes.RootDirectory = parent.m_Key;
      ObjectAttributes.ObjectName = &wdf;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      v7 = ZwCreateKey(Key, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
    }
    if ( parent.m_Key )
      ZwClose(parent.m_Key);
  }
  else
  {
    return (unsigned int)-1073741436;
  }
  return (unsigned int)v7;
}
