/*
 * XREFs of ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0080CBC
 * Callers:
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00809E0 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C004E768 (--0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxIoResReqList::_CreateAndInit(
        FxIoResReqList **ResourceReqList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *a3,
        unsigned __int8 a4)
{
  unsigned int v4; // ebx
  FxIoResReqList *v7; // rax
  FxIoResReqList *v8; // rax
  FxPoolTypeOrPoolFlags v10; // [rsp+40h] [rbp-18h] BYREF

  v4 = 0;
  *ResourceReqList = 0LL;
  *(_QWORD *)&v10.UsePoolType = 0LL;
  v10.u.PoolFlags = 64LL;
  v7 = (FxIoResReqList *)FxObjectHandleAllocCommon(FxDriverGlobals, &v10, 0xA0uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( v7 && (FxIoResReqList::FxIoResReqList(v7, FxDriverGlobals), v8) )
  {
    *ResourceReqList = v8;
  }
  else
  {
    v4 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxResource_hpp_Traceguids_0, 0xC000009A);
  }
  return v4;
}
