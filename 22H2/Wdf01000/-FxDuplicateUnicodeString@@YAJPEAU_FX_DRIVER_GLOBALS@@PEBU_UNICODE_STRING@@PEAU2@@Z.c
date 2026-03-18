/*
 * XREFs of ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0061C1C
 * Callers:
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C0044430 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0045E20 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0046180 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0046490 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C00465C0 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C00466F0 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x1C0048400 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0048E70 (imp_WdfDeviceAssignMofResourceName.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C004FD24 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C004FE54 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00503B0 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C005D190 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C005D3C0 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfRegistryQueryString @ 0x1C005E900 (imp_WdfRegistryQueryString.c)
 *     imp_WdfStringCreate @ 0x1C005F4B0 (imp_WdfStringCreate.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C0061ACC (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00670B0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     memmove @ 0x1C001D640 (memmove.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C0043284 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 */

__int64 __fastcall FxDuplicateUnicodeString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source,
        _UNICODE_STRING *Destination)
{
  size_t Length; // rbp
  int _a1; // ebx
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r9
  unsigned __int64 v11; // rbx
  wchar_t *Buffer; // rcx
  FX_POOL **v13; // rax
  wchar_t *v14; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 srcCbLengthAndNull; // [rsp+58h] [rbp+10h] BYREF

  Length = Source->Length;
  srcCbLengthAndNull = 0;
  _a1 = RtlUShortAdd(Length, 2u, &srcCbLengthAndNull);
  if ( _a1 < 0 )
  {
    v9 = 10;
LABEL_3:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 2u, v9, WPP_stringutil_cpp_Traceguids, _a1);
    return (unsigned int)_a1;
  }
  v11 = srcCbLengthAndNull;
  if ( v8 < srcCbLengthAndNull )
  {
    Buffer = Destination->Buffer;
    if ( Buffer )
    {
      FxPoolFree((FX_POOL_TRACKER *)Buffer);
      *Destination = 0LL;
    }
    v13 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, 1u, v11, FxDriverGlobals->Tag, retaddr);
    Destination->Buffer = (wchar_t *)v13;
    if ( !v13 )
    {
      _a1 = -1073741670;
      v9 = 11;
      goto LABEL_3;
    }
    Destination->MaximumLength = v11;
  }
  memmove(Destination->Buffer, Source->Buffer, Length);
  v14 = Destination->Buffer;
  Destination->Length = Length;
  v14[Length >> 1] = 0;
  return 0LL;
}
