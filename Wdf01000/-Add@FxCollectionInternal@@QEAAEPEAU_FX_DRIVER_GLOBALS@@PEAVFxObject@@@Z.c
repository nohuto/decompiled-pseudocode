bool __fastcall FxCollectionInternal::Add(
        FxCollectionInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FX_POOL *Item)
{
  bool v3; // zf
  void *v6; // r9
  FX_POOL **v7; // rax
  FX_POOL **v8; // rbx
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *Blink; // rdx
  __m128i v12; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = FxDriverGlobals->FxPoolTrackingOn == 0;
  v12.m128i_i64[0] = 0LL;
  v12.m128i_i64[1] = 64LL;
  if ( v3 )
    v6 = 0LL;
  else
    v6 = retaddr;
  v7 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v12, 0x18uLL, FxDriverGlobals->Tag, v6);
  v8 = v7;
  if ( v7 )
  {
    v9 = (_LIST_ENTRY *)(v7 + 1);
    Blink = this->m_ListHead.Blink;
    if ( Blink->Flink != &this->m_ListHead )
      __fastfail(3u);
    v7[2] = (FX_POOL *)Blink;
    v9->Flink = &this->m_ListHead;
    Blink->Flink = v9;
    this->m_ListHead.Blink = v9;
    *v7 = Item;
    FxObject::AddRef(
      (FxObject *)Item,
      this,
      185,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
    ++this->m_Count;
  }
  else
  {
    v8 = 0LL;
  }
  return v8 != 0LL;
}
