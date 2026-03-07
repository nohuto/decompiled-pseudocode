bool __fastcall FxUsbDevice::GetFxUrbTypeForRequest(FxUsbDevice *this, FxRequestBase *Request)
{
  if ( this->m_UrbType == FxUrbTypeLegacy )
    return 0;
  if ( Request->m_IrpAllocation )
    return FxUsbDevice::IsObjectDisposedOnRemove(this, Request) != 0;
  return 1;
}
