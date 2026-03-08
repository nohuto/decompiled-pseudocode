/*
 * XREFs of ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8
 * Callers:
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C002EC00 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C00306E0 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0030A70 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0030DB0 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0030F00 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0031050 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x1C00331F0 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0033E60 (imp_WdfDeviceAssignMofResourceName.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003BC2C (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C003BD78 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003C320 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0049C90 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0049EF0 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfRegistryQueryString @ 0x1C004B880 (imp_WdfRegistryQueryString.c)
 *     imp_WdfStringCreate @ 0x1C004C8C0 (imp_WdfStringCreate.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C004F320 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0055060 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C002DA0C (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 */

__int64 __fastcall FxDuplicateUnicodeString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source,
        _UNICODE_STRING *Destination)
{
  size_t Length; // r14
  signed int _a1; // edi
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r9
  unsigned __int64 v11; // rbp
  wchar_t **p_Buffer; // rdi
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rax
  FX_POOL_TRACKER *v16; // rax
  __m128i v17; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int16 srcCbLengthAndNull; // [rsp+78h] [rbp+10h] BYREF

  Length = Source->Length;
  srcCbLengthAndNull = 0;
  _a1 = RtlUShortAdd(Length, 2u, &srcCbLengthAndNull);
  if ( _a1 < 0 )
  {
    v9 = 10;
LABEL_3:
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 2u, v9, WPP_stringutil_cpp_Traceguids, _a1);
    return (unsigned int)_a1;
  }
  v11 = srcCbLengthAndNull;
  p_Buffer = &Destination->Buffer;
  if ( v8 < srcCbLengthAndNull )
  {
    if ( *p_Buffer )
    {
      FxPoolFree((FX_POOL_TRACKER *)*p_Buffer);
      *Destination = 0LL;
    }
    Tag = FxDriverGlobals->Tag;
    v14 = retaddr;
    v17.m128i_i64[0] = 0LL;
    v17.m128i_i64[1] = 256LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v14 = 0LL;
    v15 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v17, v11, Tag, v14);
    *p_Buffer = (wchar_t *)v15;
    if ( !v15 )
    {
      _a1 = -1073741670;
      v9 = 11;
      goto LABEL_3;
    }
    Destination->MaximumLength = v11;
  }
  memmove(*p_Buffer, Source->Buffer, Length);
  v16 = (FX_POOL_TRACKER *)*p_Buffer;
  Destination->Length = Length;
  *((_WORD *)&v16->Link.Flink + (Length >> 1)) = 0;
  return 0LL;
}
