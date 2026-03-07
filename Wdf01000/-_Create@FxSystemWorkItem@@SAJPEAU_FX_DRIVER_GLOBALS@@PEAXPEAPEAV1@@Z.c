__int64 __fastcall FxSystemWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DEVICE_OBJECT *WdmObject,
        FxSystemWorkItem **pObject)
{
  FxSystemWorkItem *v6; // rax
  FxSystemWorkItem *v7; // rax
  void *v8; // r8
  FxSystemWorkItem *v9; // rbx
  __int64 result; // rax
  unsigned int v11; // edi
  FxPoolTypeOrPoolFlags v12; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v12.UsePoolType = 0LL;
  v12.u.PoolFlags = 64LL;
  v6 = (FxSystemWorkItem *)FxObjectHandleAllocCommon(FxDriverGlobals, &v12, 0xE0uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( !v6 )
    return 3221225626LL;
  FxSystemWorkItem::FxSystemWorkItem(v6, FxDriverGlobals);
  v9 = v7;
  if ( !v7 )
    return 3221225626LL;
  result = FxSystemWorkItem::Initialize(v7, WdmObject, v8);
  v11 = result;
  if ( (int)result >= 0 )
  {
    *pObject = v9;
  }
  else
  {
    v9->Release(v9, 0LL, 0, 0LL);
    return v11;
  }
  return result;
}
