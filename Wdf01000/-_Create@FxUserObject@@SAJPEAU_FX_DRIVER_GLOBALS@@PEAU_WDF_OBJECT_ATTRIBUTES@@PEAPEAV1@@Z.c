__int64 __fastcall FxUserObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxUserObject **pUserObject)
{
  FxNonPagedObject *v6; // rax
  FxUserObject *v7; // rbx
  signed int _a1; // eax
  unsigned int v9; // esi
  FxPoolTypeOrPoolFlags v11; // [rsp+40h] [rbp-28h] BYREF
  void *handle; // [rsp+88h] [rbp+20h] BYREF

  *(_QWORD *)&v11.UsePoolType = 0LL;
  v11.u.PoolFlags = 64LL;
  v6 = (FxNonPagedObject *)FxObjectHandleAllocCommon(
                             FxDriverGlobals,
                             &v11,
                             0x78uLL,
                             0,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
  v7 = (FxUserObject *)v6;
  if ( v6 )
  {
    FxNonPagedObject::FxNonPagedObject(v6, 0x100Cu, 0x78u, FxDriverGlobals);
    v7->__vftable = (FxUserObject_vtbl *)FxUserObject::`vftable';
    _a1 = FxObject::Commit(v7, Attributes, &handle, 0LL, 1u);
    v9 = _a1;
    if ( _a1 >= 0 )
    {
      *pUserObject = v7;
    }
    else
    {
      WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x14u, 0xBu, WPP_FxUserObject_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v7);
      v7->DeleteObject(v7);
    }
    return v9;
  }
  else
  {
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0x14u, 0xAu, WPP_FxUserObject_cpp_Traceguids);
    return 3221225626LL;
  }
}
