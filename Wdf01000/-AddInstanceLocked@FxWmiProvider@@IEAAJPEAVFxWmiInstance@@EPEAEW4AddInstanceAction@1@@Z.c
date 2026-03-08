/*
 * XREFs of ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C00282C0
 * Callers:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C00281CC (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0029BA0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxWmiProvider::AddInstanceLocked(
        FxWmiProvider *this,
        FxWmiInstance *Instance,
        unsigned __int8 NoErrorIfPresent,
        unsigned __int8 *Update,
        FxWmiProvider::AddInstanceAction Action)
{
  _LIST_ENTRY *p_m_ListEntry; // r10
  const void *_a1; // rax
  __int64 v8; // r11
  unsigned int _a2; // ebx
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // dl
  __int16 v13; // dx
  _LIST_ENTRY *p_m_InstanceListHead; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rcx

  p_m_ListEntry = &Instance->m_ListEntry;
  *Update = 0;
  if ( p_m_ListEntry->Flink == p_m_ListEntry )
  {
    if ( this->m_Parent->m_RegisteredState == WmiRegistered )
    {
      *Update = 1;
    }
    else if ( this->m_Parent->m_RegisteredState == WmiCleanedUp )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Instance);
      v10 = v13 + 15;
      _a2 = -1073741436;
      v11 = 4;
      goto LABEL_4;
    }
    p_m_InstanceListHead = &this->m_InstanceListHead;
    if ( Action )
    {
      Flink = p_m_InstanceListHead->Flink;
      if ( p_m_InstanceListHead->Flink->Blink == p_m_InstanceListHead )
      {
        p_m_ListEntry->Flink = Flink;
        Instance->m_ListEntry.Blink = p_m_InstanceListHead;
        Flink->Blink = p_m_ListEntry;
        p_m_InstanceListHead->Flink = p_m_ListEntry;
        goto LABEL_15;
      }
    }
    else
    {
      Blink = this->m_InstanceListHead.Blink;
      if ( Blink->Flink == p_m_InstanceListHead )
      {
        p_m_ListEntry->Flink = p_m_InstanceListHead;
        Instance->m_ListEntry.Blink = Blink;
        Blink->Flink = p_m_ListEntry;
        this->m_InstanceListHead.Blink = p_m_ListEntry;
LABEL_15:
        ++this->m_NumInstances;
        this->m_RemoveGuid = 0;
        return 0LL;
      }
    }
    __fastfail(3u);
  }
  if ( !NoErrorIfPresent )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Instance);
    _a2 = -1073741808;
    v10 = 16;
    v11 = 2;
LABEL_4:
    WPP_IFR_SF_qd(*(_FX_DRIVER_GLOBALS **)(v8 + 16), v11, 0x12u, v10, WPP_FxWmiProvider_cpp_Traceguids, _a1, _a2);
    return _a2;
  }
  return 0LL;
}
