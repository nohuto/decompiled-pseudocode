int __fastcall WDFDEVICE_INIT::AllocateCxContext(
        WDFDEVICE_INIT *this,
        _FX_DRIVER_GLOBALS *CxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *ContextAttributes,
        void **Context)
{
  FxObject **p_CxContextObject; // rbx
  int result; // eax

  p_CxContextObject = &this->CxContextObject;
  if ( this->CxContextObject )
    return FxObjectAllocateContext(*p_CxContextObject, ContextAttributes, 0, Context);
  result = FxUserObject::_Create(CxDriverGlobals, 0LL, &this->CxContextObject);
  if ( result >= 0 )
    return FxObjectAllocateContext(*p_CxContextObject, ContextAttributes, 0, Context);
  return result;
}
