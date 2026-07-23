/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x140636780
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x14062CFEC (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406363FC (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406BD0D8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14073D934 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14073FACC (_CmGetInstallerClassRegPropWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(size_t, void *, __int64, unsigned int *, const wchar_t *, __int64, bool *); // rax

  v2 = *(__int64 (__fastcall **)(size_t, void *, __int64, unsigned int *, const wchar_t *, __int64, bool *))(a1 + 520);
  if ( !v2 )
    v2 = PnpRegQueryValueIndirect;
  return ((__int64 (__fastcall *)(__int64, __int64))v2)(a1, a2);
}
