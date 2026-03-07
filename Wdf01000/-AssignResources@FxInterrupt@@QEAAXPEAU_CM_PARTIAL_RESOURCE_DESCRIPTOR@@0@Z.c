void __fastcall FxInterrupt::AssignResources(
        FxInterrupt *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescTrans)
{
  _KINTERRUPT_MODE v6; // edx
  bool v7; // zf
  unsigned __int8 Class; // al
  __int16 v9; // cx
  unsigned __int8 v10; // al
  unsigned int *p_Vector; // rsi
  $2577F5D74A6AFCBEE1DF62E423AAEAA5 *v12; // rdi
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  const _GUID *v16; // [rsp+20h] [rbp-58h]

  this->m_InterruptInfo.Group = CmDescTrans->u.MessageInterrupt.Raw.MessageCount;
  this->m_InterruptInfo.TargetProcessorSet = CmDescTrans->u.Interrupt.Affinity;
  this->m_InterruptInfo.ShareDisposition = CmDescTrans->ShareDisposition;
  v6 = CmDescTrans->Flags & 1;
  v7 = this->m_PassiveHandling == 0;
  this->m_InterruptInfo.Mode = v6;
  Class = CmDescTrans->u.Connection.Class;
  this->m_InterruptInfo.Irql = Class;
  if ( !v7 )
    Class = 0;
  this->m_InterruptInfo.Irql = Class;
  v9 = CmDescTrans->Flags & 2;
  this->m_InterruptInfo.MessageSignaled = v9 != 0;
  if ( v6 != Latched || (v10 = 1, v9) )
    v10 = 0;
  this->m_IsEdgeTriggeredNonMsiInterrupt = v10;
  if ( v9 && CmDescRaw->u.MessageInterrupt.Raw.MessageCount > 1u )
  {
    p_Vector = &this->m_InterruptInfo.Vector;
    v12 = &this->96;
    m_DeviceBase = this->m_DeviceBase;
    v14 = 8LL;
    this->m_InterruptInfo.Vector = CmDescTrans->u.Generic.Start.HighPart + this->m_InterruptInfo.MessageNumber;
  }
  else
  {
    p_Vector = &this->m_InterruptInfo.Vector;
    v12 = &this->96;
    this->m_InterruptInfo.Vector = CmDescTrans->u.Interrupt.Vector;
    v7 = v9 == 0;
    m_DeviceBase = this->m_DeviceBase;
    if ( v7 )
    {
      v14 = 1LL;
      if ( (CmDescTrans->Flags & 1) != 0 )
        v14 = 2LL;
    }
    else
    {
      v14 = 4LL;
    }
  }
  m_DeviceBase->SetDeviceTelemetryInfoFlags(m_DeviceBase, (FxDeviceInfoFlags)v14);
  if ( this->m_PassiveHandling )
    v12->m_DeviceBase->SetDeviceTelemetryInfoFlags(v12->m_DeviceBase, DeviceInfoPassiveLevelInterrupt);
  this->m_CmTranslatedResource = CmDescTrans;
  WPP_IFR_SF_ddLLdiDD(
    this->m_Globals,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.MessageSignaled,
    v15,
    v16,
    this->m_InterruptInfo.MessageSignaled,
    this->m_InterruptInfo.MessageNumber,
    this->m_Policy,
    this->m_Priority,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    this->m_InterruptInfo.Irql,
    *p_Vector);
}
