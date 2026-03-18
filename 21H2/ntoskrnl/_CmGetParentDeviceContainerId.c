/*
 * XREFs of _CmGetParentDeviceContainerId @ 0x140A28D58
 * Callers:
 *     _CmUpdateDevicePanel @ 0x14076E224 (_CmUpdateDevicePanel.c)
 *     _CmUpdateDevicePanelInterface @ 0x140A297B0 (_CmUpdateDevicePanelInterface.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceParent @ 0x140788ED4 (_CmGetDeviceParent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmGetParentDeviceContainerId(__int64 a1, const WCHAR *a2, __int64 a3)
{
  wchar_t *Pool2; // rax
  wchar_t *v7; // rdi
  int DeviceParent; // ebx
  int v10; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v11[3]; // [rsp+64h] [rbp-14h] BYREF
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = 0;
  v10 = 0;
  v11[0] = 200;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 400LL, 1380994640LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    DeviceParent = CmGetDeviceParent(a1, a2, Pool2, v11);
    if ( DeviceParent >= 0 )
    {
      DeviceParent = PnpGetObjectProperty(
                       a1,
                       (__int64)v7,
                       1LL,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v12,
                       a3,
                       16,
                       (__int64)&v10,
                       0);
      if ( DeviceParent >= 0 && (v12 != 13 || v10 != 16) )
        DeviceParent = -1073741823;
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DeviceParent;
}
