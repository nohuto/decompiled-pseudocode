FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes)
{
  void *ParentObject; // rdx
  FxObject *pParentObject; // [rsp+38h] [rbp+10h] BYREF

  pParentObject = 0LL;
  if ( !Attributes )
    return 0LL;
  ParentObject = Attributes->ParentObject;
  if ( !ParentObject )
    return 0LL;
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParentObject);
  return FxDeviceBase::_SearchForDevice(pParentObject, 0LL);
}
