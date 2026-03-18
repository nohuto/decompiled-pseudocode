/*
 * XREFs of _CmRaiseDeleteEvent @ 0x140A65658
 * Callers:
 *     _CmDeleteDeviceInterfaceWorker @ 0x140A61BA4 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140A6244C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x140A62B90 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140A62F58 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140A63B84 (_CmDeleteDeviceContainerWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x140A66360 (_CmDeleteDevicePanelWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140789824 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x140A6588C (_PnpObjectRaiseDeleteEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseDeleteEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[1] = 0LL;
  v6 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseDeleteEvent(a1, v7, v6);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 512);
  if ( result )
  {
    v9[0] = 0LL;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 3LL, v9);
  }
  return result;
}
