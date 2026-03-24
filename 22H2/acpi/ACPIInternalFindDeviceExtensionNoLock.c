/*
 * XREFs of ACPIInternalFindDeviceExtensionNoLock @ 0x1C001A750
 * Callers:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C000E31C (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001A750 (ACPIInternalFindDeviceExtensionNoLock.c)
 * Callees:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001A750 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIExtListTestElement @ 0x1C001A904 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C001AD98 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001B0F0 (ACPIExtListEnumNext.c)
 */

__int64 __fastcall ACPIInternalFindDeviceExtensionNoLock(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  __int64 v4; // rdx
  __int64 DeviceExtensionNoLock; // rbx
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock[2]; // [rsp+28h] [rbp-38h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+54h] [rbp-Ch]

  v12 = 0;
  v11 = 0;
  v7 = a2 + 760;
  v10 = 776LL;
  *(_OWORD *)NewIrql = 0LL;
  *(_OWORD *)SpinLock = 0LL;
  for ( i = ACPIExtListStartEnum(&v7); ; i = ACPIExtListEnumNext(&v7) )
  {
    LOBYTE(v4) = 1;
    DeviceExtensionNoLock = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(&v7, v4) )
      return 0LL;
    if ( !DeviceExtensionNoLock )
    {
      if ( v11 == 2 )
        KeReleaseSpinLock(SpinLock[1], NewIrql[0]);
      return 0LL;
    }
    if ( *(_QWORD *)(DeviceExtensionNoLock + 744) == a1 )
      break;
    DeviceExtensionNoLock = ACPIInternalFindDeviceExtensionNoLock(a1, DeviceExtensionNoLock);
    if ( DeviceExtensionNoLock )
      break;
  }
  if ( v11 == 2 )
    KeReleaseSpinLock(SpinLock[1], NewIrql[0]);
  return DeviceExtensionNoLock;
}
