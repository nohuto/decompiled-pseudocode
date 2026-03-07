__int64 __fastcall FxDisposeList::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *WdmObject,
        FxDisposeList **pObject)
{
  FxDisposeList *v6; // rax
  FxDisposeList *v7; // rax
  FxDisposeList *v8; // rbx
  int v9; // edi
  FxPoolTypeOrPoolFlags v11; // [rsp+40h] [rbp-18h] BYREF

  *pObject = 0LL;
  *(_QWORD *)&v11.UsePoolType = 0LL;
  v11.u.PoolFlags = 64LL;
  v6 = (FxDisposeList *)FxObjectHandleAllocCommon(FxDriverGlobals, &v11, 0xA0uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( !v6 )
    return 3221225626LL;
  FxDisposeList::FxDisposeList(v6, FxDriverGlobals);
  v8 = v7;
  if ( !v7 )
    return 3221225626LL;
  v9 = FxDisposeList::Initialize(v7, WdmObject);
  if ( v9 < 0 )
  {
    FxObject::ClearEvtCallbacks(v8);
    v8->DeleteObject(v8);
  }
  else
  {
    *pObject = v8;
  }
  return (unsigned int)v9;
}
