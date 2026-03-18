/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x14077D29C
 * Callers:
 *     _CmGetInstallerClassRegPropWorker @ 0x1406BDC58 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406BDEE4 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406CC2C8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceRegPropWorker @ 0x14077CF10 (_CmGetDeviceRegPropWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x14077DF24 (_PnpGetGenericStoreProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(size_t, void *, __int64, unsigned int *, const wchar_t *, __int64, bool *); // rax

  v2 = *(__int64 (__fastcall **)(size_t, void *, __int64, unsigned int *, const wchar_t *, __int64, bool *))(a1 + 520);
  if ( !v2 )
    v2 = PnpRegQueryValueIndirect;
  return ((__int64 (__fastcall *)(__int64, __int64))v2)(a1, a2);
}
