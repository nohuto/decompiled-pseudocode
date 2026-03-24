/*
 * XREFs of _CmRaiseCreateEvent @ 0x14074BAB0
 * Callers:
 *     _CmCreateDeviceInterfaceWorker @ 0x14074B99C (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x14074BCD0 (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateDeviceWorker @ 0x14074CD34 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceContainerWorker @ 0x1407595C8 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x140974C5C (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x140977BB4 (_CmCreateDevicePanelWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1406363C8 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x14074BB14 (_PnpObjectRaiseCreateEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[1] = 0LL;
  v8 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v9, v8, v10);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 512);
  if ( result )
  {
    v12[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 2LL, v12);
  }
  return result;
}
