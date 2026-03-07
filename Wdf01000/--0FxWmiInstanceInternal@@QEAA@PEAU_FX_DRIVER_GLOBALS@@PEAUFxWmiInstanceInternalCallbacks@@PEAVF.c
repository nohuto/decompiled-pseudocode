void __fastcall FxWmiInstanceInternal::FxWmiInstanceInternal(
        FxWmiInstanceInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxWmiInstanceInternalCallbacks *Callbacks,
        FxWmiProvider *Provider)
{
  FxWmiInstance::FxWmiInstance(this, FxDriverGlobals, 0xB0u, Provider);
  this->__vftable = (FxWmiInstanceInternal_vtbl *)FxWmiInstanceInternal::`vftable';
  *(FxWmiInstanceInternalCallbacks *)&this->m_QueryInstance = *Callbacks;
}
