__int64 __fastcall imp_WdfCollectionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *CollectionAttributes,
        WDFCOLLECTION__ **Collection)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *ParentObject; // rdx
  __int64 result; // rax
  FxNonPagedObject *v8; // rax
  FxNonPagedObject *v9; // rsi
  signed int _a1; // eax
  unsigned int v11; // edi
  FxPoolTypeOrPoolFlags v12; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF
  WDFCOLLECTION__ *hCol; // [rsp+80h] [rbp+18h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hCol = 0LL;
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], CollectionAttributes, 0) >= 0 )
  {
    ParentObject = CollectionAttributes->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !Collection )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Collection = 0LL;
  result = FxValidateObjectAttributes(m_Globals, CollectionAttributes, 0);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&v12.UsePoolType = 0LL;
    v12.u.PoolFlags = 64LL;
    v8 = (FxNonPagedObject *)FxObjectHandleAllocCommon(
                               m_Globals,
                               &v12,
                               0x90uLL,
                               0,
                               CollectionAttributes,
                               0,
                               FxObjectTypeExternal);
    v9 = v8;
    if ( v8 )
    {
      FxNonPagedObject::FxNonPagedObject(v8, 0x100Eu, 0x90u, m_Globals);
      LODWORD(v9[1].__vftable) = 0;
      v9[1].m_Globals = (_FX_DRIVER_GLOBALS *)&v9[1].m_Type;
      *(_QWORD *)&v9[1].m_Type = (char *)v9 + 128;
      v9->__vftable = (FxNonPagedObject_vtbl *)FxIoResList::`vftable';
      _a1 = FxObject::Commit(v9, CollectionAttributes, (void **)&hCol, 0LL, 1u);
      v11 = _a1;
      if ( _a1 < 0 )
      {
        WPP_IFR_SF_D(m_Globals, 2u, 2u, 0xAu, WPP_FxCollectionApi_cpp_Traceguids, _a1);
        FxObject::ClearEvtCallbacks(v9);
        v9->DeleteObject(v9);
      }
      else
      {
        *Collection = hCol;
      }
    }
    else
    {
      WPP_IFR_SF_(m_Globals, 2u, 2u, 0xBu, WPP_FxCollectionApi_cpp_Traceguids);
      return (unsigned int)-1073741670;
    }
    return v11;
  }
  return result;
}
