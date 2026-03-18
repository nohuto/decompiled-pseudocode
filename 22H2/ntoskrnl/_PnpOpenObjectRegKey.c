/*
 * XREFs of _PnpOpenObjectRegKey @ 0x1406CFA10
 * Callers:
 *     _PnpGetObjectPropertyWorker @ 0x1406D0434 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140789868 (PiPnpRtlCacheObjectBaseKey.c)
 *     _PnpSetObjectPropertyWorker @ 0x14079720C (_PnpSetObjectPropertyWorker.c)
 *     PiCMValidateDeviceInstance @ 0x14079A3C8 (PiCMValidateDeviceInstance.c)
 *     PiSwPropertySet @ 0x14079CF70 (PiSwPropertySet.c)
 *     PiDqOpenObjectRegKey @ 0x1407FAB08 (PiDqOpenObjectRegKey.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x14083BB88 (_PnpGetObjectPropertyLocalesWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x14083C3D4 (_PnpGetObjectPropertyKeysWorker.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086D134 (PiDevCfgQueryObjectProperties.c)
 *     PiCMOpenObjectKey @ 0x14086DE9C (PiCMOpenObjectKey.c)
 *     PiDevCfgConfigureDevice @ 0x14087AC04 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x14087C8C4 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgQueryDriverNode @ 0x14087DDB0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x14087E3E0 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14095C980 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14095E5A0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F2B8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FC00 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceClass @ 0x1409629AC (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14096346C (PpDevCfgProcessDeviceReset.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140A63EA4 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1406CFB04 (_PnpOpenObjectRegKeyDispatch.c)
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
