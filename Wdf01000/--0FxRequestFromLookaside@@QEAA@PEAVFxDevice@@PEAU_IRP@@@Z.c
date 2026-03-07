void __fastcall FxRequestFromLookaside::FxRequestFromLookaside(
        FxRequestFromLookaside *this,
        FxDevice *Device,
        _IRP *Irp)
{
  FxRequest::FxRequest(this, Device->m_Globals, Irp, FxRequestDoesNotOwnIrp, FxRequestConstructorCallerIsFx);
  this->__vftable = (FxRequestFromLookaside_vtbl *)FxRequestFromLookaside::`vftable';
  this->m_DeviceBase = Device->m_DeviceBase;
}
