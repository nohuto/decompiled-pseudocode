/*
 * XREFs of _CmRaiseCreateEvent @ 0x14076A8FC
 * Callers:
 *     _CmCreateDeviceWorker @ 0x140768C60 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x14076A7E8 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x14076AB18 (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateDeviceContainerWorker @ 0x14076CDB4 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x140A23130 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x140A27EE4 (_CmCreateDevicePanelWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _PnpObjectRaiseCreateEvent @ 0x14076A960 (_PnpObjectRaiseCreateEvent.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14077A710 (_CmMapCmObjectTypeToPnpObjectType.c)
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
