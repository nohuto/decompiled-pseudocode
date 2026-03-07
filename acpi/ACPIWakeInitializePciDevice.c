__int64 __fastcall ACPIWakeInitializePciDevice(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rbx
  KIRQL v2; // di
  _BYTE v4[16]; // [rsp+30h] [rbp-10h] BYREF
  char v5; // [rsp+68h] [rbp+28h] BYREF
  char v6; // [rsp+70h] [rbp+30h] BYREF
  char v7; // [rsp+78h] [rbp+38h] BYREF

  v5 = 0;
  v4[0] = 0;
  v7 = 0;
  v6 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x10020) == 0x10000LL )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    if ( PciPmeInterfaceInstantiated )
    {
      (*((void (__fastcall **)(_QWORD, char *, _BYTE *, char *))PciPmeInterface + 4))(
        *(_QWORD *)(DeviceExtension + 784),
        &v5,
        v4,
        &v7);
      if ( v5 == 1 )
      {
        (*((void (__fastcall **)(_QWORD, char *))PciPmeInterface + 7))(*(_QWORD *)(DeviceExtension + 784), &v6);
        if ( v6 == 1 )
        {
          _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 0x800000000000000uLL);
          if ( v7 )
          {
            (*((void (__fastcall **)(_QWORD, _QWORD))PciPmeInterface + 6))(*(_QWORD *)(DeviceExtension + 784), 0LL);
          }
          else if ( v4[0] )
          {
            (*((void (__fastcall **)(_QWORD))PciPmeInterface + 5))(*(_QWORD *)(DeviceExtension + 784));
          }
        }
      }
    }
    KeReleaseSpinLock(&AcpiPowerLock, v2);
  }
  return 0LL;
}
