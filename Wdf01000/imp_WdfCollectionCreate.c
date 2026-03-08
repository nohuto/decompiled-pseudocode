/*
 * XREFs of imp_WdfCollectionCreate @ 0x1C004C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0001ADC (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

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
