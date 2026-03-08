/*
 * XREFs of ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C
 * Callers:
 *     imp_WdfRegistryQueryULong @ 0x1C0001610 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x1C002E9E0 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfDeviceInitAssignName @ 0x1C002EB50 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C002EC00 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C00306E0 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0030880 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0030A70 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0030DB0 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0030F00 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0031050 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00327E0 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0032C40 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0033E60 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfDriverCreate @ 0x1C0037350 (imp_WdfDriverCreate.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C0049AE0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0049C90 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0049EF0 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C004A310 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C004A530 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x1C004A7B0 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x1C004A8F0 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C004A9F0 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryAssignValue @ 0x1C004ABC0 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfRegistryCreateKey @ 0x1C004ACD0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1C004AF50 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C004B1B0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C004B470 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryString @ 0x1C004B880 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C004BB60 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryQueryValue @ 0x1C004BD60 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C004BF00 (imp_WdfRegistryRemoveValue.c)
 *     imp_WdfStringCreate @ 0x1C004C8C0 (imp_WdfStringCreate.c)
 *     FxIoTargetValidateOpenParams @ 0x1C00508A4 (FxIoTargetValidateOpenParams.c)
 * Callees:
 *     WPP_IFR_SF_qddd @ 0x1C0019200 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxValidateUnicodeString(_FX_DRIVER_GLOBALS *FxDriverGlobals, const _UNICODE_STRING *String)
{
  int _a2; // r8d
  int MaximumLength; // eax

  _a2 = String->Length;
  if ( (_a2 & 1) != 0 )
  {
    WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxValidateFunctions_hpp_Traceguids_0, String, _a2, 0xC000000D);
  }
  else
  {
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0 )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xEu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        0xC000000D);
    }
    else if ( (_WORD)MaximumLength && !String->Buffer )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xFu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        0xC000000D);
    }
    else
    {
      if ( (unsigned __int16)_a2 <= (unsigned __int16)MaximumLength )
        return 0LL;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)String,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        _a2,
        MaximumLength,
        -1073741811);
    }
  }
  return 3221225485LL;
}
