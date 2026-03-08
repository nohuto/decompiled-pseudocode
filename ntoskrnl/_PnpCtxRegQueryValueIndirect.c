/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1406C9DCC
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406C8298 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406C9A04 (_CmGetDeviceRegPropWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x1406D13D0 (_PnpGetGenericStoreProperty.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14074E0A8 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14087C86C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 520);
  if ( !v2 )
    v2 = (__int64 (__fastcall *)(__int64, __int64))&PnpRegQueryValueIndirect;
  return v2(a1, a2);
}
