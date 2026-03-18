/*
 * XREFs of _PnpOpenObjectRegKey @ 0x14077C924
 * Callers:
 *     _PnpGetObjectPropertyKeysWorker @ 0x140697384 (_PnpGetObjectPropertyKeysWorker.c)
 *     PiDevCfgCopyObjectProperties @ 0x140698298 (PiDevCfgCopyObjectProperties.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1406988E0 (_PnpGetObjectPropertyLocalesWorker.c)
 *     PiDqOpenObjectRegKey @ 0x14069984C (PiDqOpenObjectRegKey.c)
 *     PiCMOpenObjectKey @ 0x1406BA8F4 (PiCMOpenObjectKey.c)
 *     PiDevCfgGetDriverPackageId @ 0x140745620 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverNode @ 0x140746270 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x140746CCC (PiDevCfgQueryObjectProperties.c)
 *     PiSwPropertySet @ 0x14076E714 (PiSwPropertySet.c)
 *     PiDevCfgConfigureDevice @ 0x1407702BC (PiDevCfgConfigureDevice.c)
 *     _PnpSetObjectPropertyWorker @ 0x140771B04 (_PnpSetObjectPropertyWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14077B908 (PiPnpRtlCacheObjectBaseKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x14077DBE8 (_PnpGetObjectPropertyWorker.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14094AA64 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14094C2D0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14094CFE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14094D930 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceClass @ 0x14094EA0C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14094F4CC (PpDevCfgProcessDeviceReset.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140A26068 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x14077CA18 (_PnpOpenObjectRegKeyDispatch.c)
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
