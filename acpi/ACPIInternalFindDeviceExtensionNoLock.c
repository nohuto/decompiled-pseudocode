__int64 __fastcall ACPIInternalFindDeviceExtensionNoLock(__int64 a1, __int64 a2)
{
  char *i; // rax
  __int64 DeviceExtensionNoLock; // rbx
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock[2]; // [rsp+28h] [rbp-38h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]

  v11 = 0;
  v10 = 0;
  v6 = a2 + 800;
  v9 = 816LL;
  *(_OWORD *)NewIrql = 0LL;
  *(_OWORD *)SpinLock = 0LL;
  for ( i = ACPIExtListStartEnum((__int64)&v6); ; i = ACPIExtListEnumNext((__int64)&v6) )
  {
    DeviceExtensionNoLock = (__int64)i;
    if ( !ACPIExtListTestElement((__int64)&v6, 1) )
      return 0LL;
    if ( !DeviceExtensionNoLock )
    {
      if ( v10 == 2 )
        KeReleaseSpinLock(SpinLock[1], NewIrql[0]);
      return 0LL;
    }
    if ( *(_QWORD *)(DeviceExtensionNoLock + 784) == a1 )
      break;
    DeviceExtensionNoLock = ACPIInternalFindDeviceExtensionNoLock(a1, DeviceExtensionNoLock);
    if ( DeviceExtensionNoLock )
      break;
  }
  if ( v10 == 2 )
    KeReleaseSpinLock(SpinLock[1], NewIrql[0]);
  return DeviceExtensionNoLock;
}
