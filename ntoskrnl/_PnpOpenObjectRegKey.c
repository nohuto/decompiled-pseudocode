/*
 * XREFs of _PnpOpenObjectRegKey @ 0x1406CECB8
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x140686E0C (_PnpSetObjectPropertyWorker.c)
 *     PiCMValidateDeviceInstance @ 0x1406C78A0 (PiCMValidateDeviceInstance.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1406D0C78 (PiPnpRtlCacheObjectBaseKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x1406D1148 (_PnpGetObjectPropertyWorker.c)
 *     PiDqOpenObjectRegKey @ 0x140747218 (PiDqOpenObjectRegKey.c)
 *     PiSwPropertySet @ 0x140785B60 (PiSwPropertySet.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x14083A898 (_PnpGetObjectPropertyLocalesWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x14083B0E4 (_PnpGetObjectPropertyKeysWorker.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 *     PiCMOpenObjectKey @ 0x14086B97C (PiCMOpenObjectKey.c)
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140875D30 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgQueryDriverNode @ 0x140878BA8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1408791D8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140959960 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14095B580 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095C298 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095CBE0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceClass @ 0x14095F98C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14096044C (PpDevCfgProcessDeviceReset.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140A611A4 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1406CEDAC (_PnpOpenObjectRegKeyDispatch.c)
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
