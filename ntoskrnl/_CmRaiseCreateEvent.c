/*
 * XREFs of _CmRaiseCreateEvent @ 0x14087BC44
 * Callers:
 *     _CmCreateDeviceContainerWorker @ 0x140682A20 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceWorker @ 0x1407893E0 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x14087B924 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x14087BBB0 (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x140A5E2B0 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x140A63028 (_CmCreateDevicePanelWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1406CEAE4 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x14087BCA8 (_PnpObjectRaiseCreateEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[1] = 0LL;
  v8 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v9, v8);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 512);
  if ( result )
  {
    v11[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 2LL, v11);
  }
  return result;
}
