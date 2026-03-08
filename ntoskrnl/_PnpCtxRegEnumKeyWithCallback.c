/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x140824EA0
 * Callers:
 *     PiCreateDriverSwDevices @ 0x140681C40 (PiCreateDriverSwDevices.c)
 *     _PnpGetGenericObjectList @ 0x140823C28 (_PnpGetGenericObjectList.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140823CD0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x140823EA0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140823FCC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x140824314 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140824470 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1408247A0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140824A50 (_CmDeviceClassesSubkeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140864F88 (DrvDbGetDriverPackageMappedProperty.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14094EECC (PipHardwareConfigClearStartOverrides.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A69880 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x140A69BC0 (DrvDbGetObjectSubKeyList.c)
 *     PipMigratePnpState @ 0x140B5AC14 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x140824EF8 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *(_QWORD *)(a1 + 224);
  v6[3] = v4;
  v6[4] = PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v6[5] = v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2);
}
