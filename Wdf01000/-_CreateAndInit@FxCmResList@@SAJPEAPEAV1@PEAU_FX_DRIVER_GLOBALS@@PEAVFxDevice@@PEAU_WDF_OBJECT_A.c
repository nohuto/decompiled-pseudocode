__int64 __fastcall FxCmResList::_CreateAndInit(
        FxCmResList **ResourceList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *AccessFlags,
        _WDF_OBJECT_ATTRIBUTES *a4,
        unsigned __int8 FxDriverGlobals_0)
{
  unsigned int v5; // ebx
  FxCmResList *v8; // rdi
  FxPoolTypeOrPoolFlags v10; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0;
  *ResourceList = 0LL;
  *(_QWORD *)&v10.UsePoolType = 0LL;
  v10.u.PoolFlags = 64LL;
  v8 = (FxCmResList *)FxObjectHandleAllocCommon(FxDriverGlobals, &v10, 0x98uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( v8 )
  {
    FxResourceCollection::FxResourceCollection(v8, FxDriverGlobals, 0x1036u, 0x98u, FxDriverGlobals_0);
    v8->__vftable = (FxCmResList_vtbl *)FxCmResList::`vftable';
    *ResourceList = v8;
  }
  else
  {
    v5 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxResource_hpp_Traceguids, 0xC000009A);
  }
  return v5;
}
