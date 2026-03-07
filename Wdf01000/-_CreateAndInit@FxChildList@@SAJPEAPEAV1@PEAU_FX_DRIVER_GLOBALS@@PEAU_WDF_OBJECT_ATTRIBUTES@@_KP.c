__int64 __fastcall FxChildList::_CreateAndInit(
        FxChildList **ChildList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *ListAttributes,
        unsigned __int64 TotalDescriptionSize,
        FxDevice *Device,
        _WDF_CHILD_LIST_CONFIG *ListConfig,
        unsigned __int8 Static)
{
  unsigned int v8; // ebx
  FxPoolTypeOrPoolFlags v9; // xmm1
  FxChildList *v12; // rcx
  FxChildList *v13; // rax
  FxChildList *v14; // rdi
  FxPoolTypeOrPoolFlags v16; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v16.UsePoolType = 0LL;
  v16.u.PoolFlags = 64LL;
  v8 = 0;
  v9 = v16;
  *ChildList = 0LL;
  v16 = v9;
  v12 = (FxChildList *)FxObjectHandleAllocCommon(
                         FxDriverGlobals,
                         &v16,
                         0x168uLL,
                         0,
                         ListAttributes,
                         0,
                         FxObjectTypeExternal);
  if ( v12 && (FxChildList::FxChildList(v12, FxDriverGlobals, TotalDescriptionSize, Device, Static), (v14 = v13) != 0LL) )
  {
    FxChildList::Initialize(v13, ListConfig);
    *ChildList = v14;
  }
  else
  {
    v8 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, 0xAu, WPP_FxChildList_cpp_Traceguids, 0xC000009A);
  }
  return v8;
}
