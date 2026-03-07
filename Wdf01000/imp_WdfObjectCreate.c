__int64 __fastcall imp_WdfObjectCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Object)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  int v7; // edi
  void *_a1; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxObject *pParent; // [rsp+40h] [rbp+8h] BYREF
  FxUserObject *pUserObject; // [rsp+50h] [rbp+18h] BYREF

  pUserObject = 0LL;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 0) >= 0 )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !Object )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, Attributes, 2);
  if ( (int)result >= 0 )
  {
    v7 = FxUserObject::_Create(m_Globals, Attributes, &pUserObject);
    if ( v7 >= 0 )
    {
      _a1 = (void *)FxObject::GetObjectHandleUnchecked(pUserObject);
      *Object = _a1;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0x13u, 0xAu, WPP_FxUserObjectApi_cpp_Traceguids, _a1);
    }
    return (unsigned int)v7;
  }
  return result;
}
