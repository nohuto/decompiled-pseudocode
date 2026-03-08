/*
 * XREFs of HalpIommuInitDiscard @ 0x140B6C3EC
 * Callers:
 *     HalpIommuInitSystem @ 0x140A86E10 (HalpIommuInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140612F60 (HviGetHardwareFeatures.c)
 *     HalpIommuIvtDiscover @ 0x140B3D380 (HalpIommuIvtDiscover.c)
 *     HalpIommuHsaDiscover @ 0x140B6C630 (HalpIommuHsaDiscover.c)
 */

__int64 __fastcall HalpIommuInitDiscard(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  _QWORD *v5; // rax
  int v6; // ecx
  ULONG_PTR v7; // rdx
  int v8; // eax
  _BOOL8 v20; // rdx
  _QWORD *v21; // rax
  _QWORD v22[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v23; // [rsp+30h] [rbp-20h] BYREF

  v4 = HalpHvCpuManager == 0;
  qword_140C5FD48 = (__int64)&HalpIommuParaVirtDeviceCache;
  HalpIommuParaVirtDeviceCache = (__int64)&HalpIommuParaVirtDeviceCache;
  qword_140C61AD8 = (__int64)&HalpIommuDeviceCreatedList;
  HalpIommuDeviceCreatedList = (__int64)&HalpIommuDeviceCreatedList;
  qword_140C61B38 = (__int64)&HalpRidAliasList;
  HalpRidAliasList = (__int64)&HalpRidAliasList;
  qword_140C5FD38 = (__int64)&IommuInterfaceStateChangeCallbackListHead;
  IommuInterfaceStateChangeCallbackListHead = (__int64)&IommuInterfaceStateChangeCallbackListHead;
  v5 = (_QWORD *)HalIommuDispatch;
  HalpIommuParaVirtDeviceCacheLock = 0LL;
  HalpDeviceBlockUnblockPushLock = 0LL;
  HalpIommuDeviceCreatedListPushLock = 0LL;
  IommuInterfaceStateChangeCallbackPushLock = 0LL;
  *(_QWORD *)(HalIommuDispatch + 8) = IommuGetConfiguration;
  v5[2] = IommuGetLibraryContext;
  v5[3] = IommuMapDevice;
  v5[4] = IommuEnableDevicePasid;
  v5[5] = IommuSetAddressSpace;
  v5[6] = IommuDisableDevicePasid;
  v5[7] = IommuUnmapDevice;
  v5[9] = IommuFlushTb;
  v5[10] = IommuFlushAllPasid;
  v5[11] = IommuProcessPageRequestQueue;
  v5[16] = IommuDevicePowerChange;
  v5[17] = IommuBeginDeviceReset;
  v5[18] = IommuFinalizeDeviceReset;
  v5[19] = IommuGetAtsSettings;
  v5[20] = IommuCreateAtsDevice;
  v5[21] = IommuDeleteAtsDevice;
  qword_140C61B08 = (__int64)&HalpIommuAtsDeviceList;
  HalpIommuAtsDeviceList = (__int64)&HalpIommuAtsDeviceList;
  v23 = 0LL;
  HalpHvParaVirtIommuDomain = 0;
  HalpIommuDmaGuardTableOptIn = 0;
  HalpIommuAtsDeviceLock = 0LL;
  HalpHvIommu = 0;
  if ( !v4 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    HalpHvIommuDeviceDomain = BYTE3(_RDX) & 1;
    _RAX = 1073741827LL;
    __asm { cpuid }
    v20 = (_RDX & 0x2000000) != 0;
    v22[1] = (unsigned int)_RCX;
    HalpHvParaVirtIommuDomain = v20;
    v22[0] = __PAIR64__(_RBX, _RAX);
    HviGetHardwareFeatures((__int64)&v23, v20, 1073741827LL, a4);
    if ( (v23 & 0x20) != 0 )
    {
      v21 = (_QWORD *)HalIommuDispatch;
      HalpHvIommu = 1;
      *(_QWORD *)(HalIommuDispatch + 8) = IommuHvGetConfiguration;
      v21[5] = IommuHvSetAddressSpace;
      v21[9] = IommuHvFlushTb;
      v21[10] = IommuHvFlushAllPasid;
      v21[16] = IommuHvDevicePowerChange;
    }
  }
  *(_QWORD *)&v23 = 0LL;
  v22[0] = 0LL;
  if ( !HalpHvIommu || HalpHvCpuManager )
  {
    v6 = HalpIommuHsaDiscover(&v23);
    if ( v6 >= 0 )
    {
      if ( (v23 & 2) != 0 )
        HalpIommuDmaGuardTableOptIn = 1;
      v6 = HalpIommuIvtDiscover(v22);
      if ( v6 >= 0 && (v22[0] & 2) != 0 )
        HalpIommuDmaGuardTableOptIn = 1;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = HalpIommuList;
  if ( (ULONG_PTR *)HalpIommuList != &HalpIommuList )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 488);
      v7 = *(_QWORD *)v7;
      if ( (v8 & 0x40) == 0 )
        break;
      if ( (ULONG_PTR *)v7 == &HalpIommuList )
        return (unsigned int)v6;
    }
  }
  HalpIommuX2ApicSupport = 0;
  return (unsigned int)v6;
}
