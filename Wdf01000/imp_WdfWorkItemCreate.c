int __fastcall imp_WdfWorkItemCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  int result; // eax
  unsigned __int8 v9; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int _a2; // ecx
  int v12; // edi
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxObject *pParent; // [rsp+50h] [rbp+8h] BYREF

  pParent = 0LL;
  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  result = FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 24);
  if ( result >= 0 )
  {
    FxObjectHandleGetPtr(v4, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
    if ( !Config )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    if ( !WorkItem )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    _a2 = Config->Size;
    if ( Config->Size != 24 )
    {
      v12 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, v9, 0x12u, 0xAu, WPP_FxWorkItemApi_cpp_Traceguids, _a2, 24, -1073741820);
      return v12;
    }
    if ( !Config->EvtWorkItemFunc )
    {
      v12 = -1073741811;
      WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xBu, WPP_FxWorkItemApi_cpp_Traceguids, 0xC000000D);
      return v12;
    }
    result = FxValidateObjectAttributes(pParent->m_Globals, Attributes, 0);
    if ( result >= 0 )
      return FxWorkItem::_Create(m_Globals, Config, Attributes, pParent, WorkItem);
  }
  return result;
}
