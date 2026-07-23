/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140766F18
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406052CC (_CmGetDeviceSoftwareKey.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14072C740 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14072CC64 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D4FC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x14072DBF8 (PiDqDeleteUserObject.c)
 *     _CmAddDeviceToContainerWorker @ 0x140759440 (_CmAddDeviceToContainerWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteKey @ 0x140974AAC (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140975028 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140977A70 (_CmAddPanelDeviceWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097809C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097CB7C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CF8C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDeleteKey @ 0x1403FC000 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x14063750C (_RegRtlOpenKeyTransacted.c)
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
