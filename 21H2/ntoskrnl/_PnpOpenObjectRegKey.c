/*
 * XREFs of _PnpOpenObjectRegKey @ 0x14062C674
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1405FF280 (PiCMValidateDeviceInstance.c)
 *     PiDqOpenObjectRegKey @ 0x1406077B8 (PiDqOpenObjectRegKey.c)
 *     PiCMOpenObjectKey @ 0x140628AA8 (PiCMOpenObjectKey.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14062C07C (PiPnpRtlCacheObjectBaseKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x14062CB18 (_PnpGetObjectPropertyWorker.c)
 *     PpDevCfgProcessDeviceClass @ 0x140730028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140730398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407305EC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgGetDriverPackageId @ 0x14073C3A8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverNode @ 0x14073C9B4 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     _PnpSetObjectPropertyWorker @ 0x140745F5C (_PnpSetObjectPropertyWorker.c)
 *     PiSwPropertySet @ 0x140748518 (PiSwPropertySet.c)
 *     PiDevCfgCopyObjectProperties @ 0x140768038 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A507C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A6AA0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A77A8 (PiDevCfgQueryIncludedDriverNode.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140976020 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140976C80 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x140976F5C (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x14062C768 (_PnpOpenObjectRegKeyDispatch.c)
 */

__int64 __fastcall PnpOpenObjectRegKey(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, __int64, int, __int64 *); // rdi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18[10]; // [rsp+48h] [rbp-29h] BYREF

  memset(v18, 0, sizeof(v18));
  v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, __int64 *))(a1 + 488);
  HIDWORD(v18[4]) = 0;
  BYTE4(v18[2]) = a5;
  v18[3] = a6;
  LODWORD(v18[2]) = a4;
  if ( v10 )
  {
    v11 = v10(a1, a2, a3, 2LL, 1, v18);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v18[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = PnpOpenObjectRegKeyDispatch(a1, a2, a3, v18[2], SBYTE4(v18[2]), v18[3], (__int64)&v18[4], HIDWORD(v18[4]));
  v13 = v12;
  if ( !v10 )
    return v13;
  LODWORD(v18[0]) = v12;
  v15 = v10(a1, a2, a3, 2LL, 2, v18);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v13;
  if ( v15 == -1073741536 )
    return LODWORD(v18[0]);
  v17 = v13;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
