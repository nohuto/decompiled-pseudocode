int __fastcall imp_WdfDpcCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DPC_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDPC__ **Dpc)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  int result; // eax
  unsigned __int8 v9; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
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
    if ( !Dpc )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    if ( Config->Size == 24 )
    {
      result = FxValidateObjectAttributes(pParent->m_Globals, Attributes, 0);
      if ( result >= 0 )
        return FxDpc::_Create(m_Globals, Config, Attributes, pParent, Dpc);
    }
    else
    {
      WPP_IFR_SF_DDd(m_Globals, v9, 0x12u, 0xAu, WPP_FxDpcApi_cpp_Traceguids, Config->Size, 24, -1073741820);
      return -1073741820;
    }
  }
  return result;
}
