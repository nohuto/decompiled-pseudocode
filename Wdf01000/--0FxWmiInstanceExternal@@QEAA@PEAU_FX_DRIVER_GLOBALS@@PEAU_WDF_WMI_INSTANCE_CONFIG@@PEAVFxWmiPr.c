void __fastcall FxWmiInstanceExternal::FxWmiInstanceExternal(
        FxWmiInstanceExternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_WMI_INSTANCE_CONFIG *Config,
        FxWmiProvider *Provider)
{
  unsigned __int8 UseContextForQuery; // al

  FxWmiInstance::FxWmiInstance(this, FxDriverGlobals, 0xB8u, Provider);
  this->__vftable = (FxWmiInstanceExternal_vtbl *)FxWmiInstanceExternal::`vftable';
  this->m_QueryInstanceCallback.m_Method = 0LL;
  this->m_SetInstanceCallback.m_Method = 0LL;
  this->m_SetItemCallback.m_Method = 0LL;
  this->m_ExecuteMethodCallback.m_Method = 0LL;
  this->m_ContextLength = 0;
  UseContextForQuery = Config->UseContextForQuery;
  this->m_UseContextForQuery = UseContextForQuery;
  if ( !UseContextForQuery )
    this->m_QueryInstanceCallback.m_Method = Config->EvtWmiInstanceQueryInstance;
  this->m_SetInstanceCallback.m_Method = Config->EvtWmiInstanceSetInstance;
  this->m_SetItemCallback.m_Method = Config->EvtWmiInstanceSetItem;
  this->m_ExecuteMethodCallback.m_Method = Config->EvtWmiInstanceExecuteMethod;
}
