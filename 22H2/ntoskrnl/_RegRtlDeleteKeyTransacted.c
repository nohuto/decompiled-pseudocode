/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140766378
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x14068A7FC (_CmGetDeviceSoftwareKey.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14072D150 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14072D674 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072DF0C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x14072E608 (PiDqDeleteUserObject.c)
 *     _CmAddDeviceToContainerWorker @ 0x140758A70 (_CmAddDeviceToContainerWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x140765F94 (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteKey @ 0x14097491C (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140974E98 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x1409778E0 (_CmAddPanelDeviceWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140977F0C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097C9EC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CDFC (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwDeleteKey @ 0x1403FB4A0 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1406BB4DC (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteKeyTransacted(char *a1, const WCHAR *a2, __int64 a3)
{
  int v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  if ( a2 )
  {
    v3 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x10000u, &KeyHandle, a3);
    if ( v3 < 0 )
      goto LABEL_5;
    a1 = (char *)KeyHandle;
  }
  v3 = ZwDeleteKey(a1);
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
