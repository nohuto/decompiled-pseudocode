/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x14083EAEC
 * Callers:
 *     PiCreateDriverSwDevices @ 0x14076ABAC (PiCreateDriverSwDevices.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1407886D0 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14083DA50 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14083DC20 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14083DEC8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _PnpGetGenericObjectList @ 0x14083E0F8 (_PnpGetGenericObjectList.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14083E2B8 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmEnumSubkeyCallback @ 0x14083E410 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14083E6C0 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14094017C (PipHardwareConfigClearStartOverrides.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140A28700 (_CmDevicePanelEnumSubkeyCallback.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A2F0F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x140A2F428 (DrvDbGetObjectSubKeyList.c)
 *     PipMigratePnpState @ 0x140B0EC60 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x14083EB44 (_RegRtlEnumKeyWithCallback.c)
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
