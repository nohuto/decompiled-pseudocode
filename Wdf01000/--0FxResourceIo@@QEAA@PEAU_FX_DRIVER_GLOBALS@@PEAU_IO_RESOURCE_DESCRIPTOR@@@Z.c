void __fastcall FxResourceIo::FxResourceIo(
        FxResourceIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_RESOURCE_DESCRIPTOR *Resource)
{
  FxObject::FxObject(this, 0x1016u, 0, FxDriverGlobals);
  this->__vftable = (FxResourceIo_vtbl *)FxResourceCm::`vftable';
  this->m_Descriptor = *Resource;
}
