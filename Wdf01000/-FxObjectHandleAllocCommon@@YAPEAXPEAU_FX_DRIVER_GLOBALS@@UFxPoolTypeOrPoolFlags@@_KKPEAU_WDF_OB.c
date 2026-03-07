void *__fastcall FxObjectHandleAllocCommon(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxPoolTypeOrPoolFlags *TypeOrFlags,
        unsigned __int64 Size,
        unsigned int Tag,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int16 ExtraSize,
        FxObjectType ObjectType)
{
  unsigned int v7; // esi
  unsigned __int16 v8; // di
  unsigned __int64 ContextSize; // rax
  signed int v12; // eax
  unsigned __int64 v13; // r9
  bool v14; // zf
  unsigned __int8 FxPoolTrackingOn; // cl
  void *v16; // rax
  void *result; // rax
  FxPoolTypeOrPoolFlags totalSize; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+58h] [rbp+18h]

  *(_QWORD *)&totalSize.UsePoolType = 0LL;
  v7 = Tag;
  v8 = Size;
  if ( !Tag )
    v7 = FxDriverGlobals->Tag;
  if ( ObjectType == FxObjectTypeInternal )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      v13 = -1LL;
      if ( Size + 48 >= Size )
        v13 = Size + 48;
      v12 = Size + 48 < Size ? 0xC0000095 : 0;
    }
    else
    {
      v12 = 0;
      v13 = Size;
    }
  }
  else
  {
    ContextSize = FxGetContextSize(Attributes);
    v12 = FxCalculateObjectTotalSize2(
            FxDriverGlobals,
            v8,
            ExtraSize,
            ContextSize,
            (unsigned __int64 *)&totalSize.UsePoolType);
    v13 = *(_QWORD *)&totalSize.UsePoolType;
  }
  if ( v12 < 0 )
    return 0LL;
  v14 = TypeOrFlags->UsePoolType == 0;
  FxPoolTrackingOn = FxDriverGlobals->FxPoolTrackingOn;
  totalSize = 0LL;
  if ( v14 )
  {
    totalSize.u.PoolFlags = TypeOrFlags->u.PoolFlags;
  }
  else
  {
    totalSize.u.PoolType = TypeOrFlags->u.PoolType;
    totalSize.UsePoolType = 1;
  }
  if ( FxPoolTrackingOn )
    v16 = retaddr;
  else
    v16 = 0LL;
  result = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &totalSize, v13, v7, v16);
  if ( result )
    return FxObjectAndHandleHeaderInit(
             FxDriverGlobals,
             result,
             ((ExtraSize + 15) & 0xFFF0) + ((v8 + 15) & 0xFFF0u),
             Attributes,
             ObjectType);
  return result;
}
