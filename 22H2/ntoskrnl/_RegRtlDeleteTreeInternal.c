/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x14086B738
 * Callers:
 *     _PnpSetPropertyWorker @ 0x140798154 (_PnpSetPropertyWorker.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1407D94D0 (PpDevCfgProcessDeviceOperations.c)
 *     _PnpCtxRegDeleteTree @ 0x140812FDC (_PnpCtxRegDeleteTree.c)
 *     _RegRtlDeleteTreeInternal @ 0x14086B738 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgConfigureDevice @ 0x14087AC04 (PiDevCfgConfigureDevice.c)
 *     PipHardwareConfigActivateService @ 0x14087C60C (PipHardwareConfigActivateService.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x14087D1C4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgInitResolveContext @ 0x14087D384 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgFreeResolveContext @ 0x14087D72C (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E8F4 (PiDevCfgCopyDeviceKey.c)
 *     PiDqDeleteUserObject @ 0x14095C2EC (PiDqDeleteUserObject.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FC00 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x14096346C (PpDevCfgProcessDeviceReset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A611A8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A618A0 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A61F64 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A6390C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A647EC (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A6603C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140A66D74 (_CmRemovePanelDeviceWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AC0C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6B02C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     IoGetStackLimits @ 0x14022E950 (IoGetStackLimits.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1406CEE20 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140863068 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x14086B738 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlQueryInfoKey @ 0x14086B8B4 (_RegRtlQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x14086B97C (_RegRtlEnumKey.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(void *a1, const WCHAR *a2, __int64 a3, char a4)
{
  int v4; // r14d
  _WORD *Pool2; // rsi
  unsigned int v8; // r15d
  int v10; // ebx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 HighLimit; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 LowLimit; // [rsp+48h] [rbp-8h] BYREF

  v4 = 0;
  Handle = 0LL;
  v17 = 0;
  HighLimit = 0LL;
  Pool2 = 0LL;
  LowLimit = 0LL;
  v8 = 0;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v10 = -1073741670;
    goto LABEL_3;
  }
  v10 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x3001Fu, &Handle, a3);
  if ( v10 < 0 )
    goto LABEL_3;
  if ( (unsigned int)RegRtlQueryInfoKey((_DWORD)Handle, 0, (unsigned int)&v17, 0, 0LL, 0LL) )
  {
    LODWORD(v13) = 0;
    goto LABEL_12;
  }
  v12 = v17;
  if ( v17 )
  {
    if ( v17 + 1 < v17 )
      goto LABEL_16;
    v12 = v17 + 1;
  }
  v13 = 2LL * v12;
  if ( v13 > 0xFFFFFFFF )
  {
LABEL_16:
    v10 = -1073741675;
    goto LABEL_3;
  }
  v10 = 0;
  if ( (_DWORD)v13 )
    goto LABEL_27;
  do
  {
    while ( 1 )
    {
LABEL_12:
      while ( 1 )
      {
        v17 = (unsigned int)v13 >> 1;
        v14 = RegRtlEnumKey(Handle);
        if ( v14 != -2147483622 && v14 != -1073741444 )
          break;
LABEL_13:
        v16 = RegRtlDeleteKeyTransacted(a1, a2, a3);
        if ( v16 != -1073741535 )
        {
          if ( v16 >= 0 )
            goto LABEL_3;
LABEL_15:
          v10 = v16;
          goto LABEL_3;
        }
        if ( v4 || v8 >= 0xA )
          goto LABEL_15;
        ++v8;
        v4 = 0;
      }
      if ( v14 == -1073741789 )
        break;
      if ( v14 )
        goto LABEL_13;
      LOBYTE(v15) = a4;
      Pool2[((unsigned __int64)(unsigned int)v13 >> 1) - 1] = 0;
      if ( (unsigned int)RegRtlDeleteTreeInternal(Handle, Pool2, a3, v15) )
        ++v4;
      else
        v4 = 0;
    }
    v13 = 2LL * v17;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_16;
    v10 = 0;
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
LABEL_27:
    Pool2 = (_WORD *)ExAllocatePool2(256LL, (unsigned int)v13, 1279739218LL);
  }
  while ( Pool2 );
  v10 = -1073741801;
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v10;
}
