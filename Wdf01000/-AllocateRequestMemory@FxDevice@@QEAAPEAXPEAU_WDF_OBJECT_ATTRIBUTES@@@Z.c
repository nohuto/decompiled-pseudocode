FxObject *__fastcall FxDevice::AllocateRequestMemory(FxDevice *this, _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int64 v5; // rdx
  FX_POOL_TRACKER *v6; // rbx
  PSLIST_ENTRY v7; // rax
  FX_POOL_TRACKER *v8; // rsi
  void *Caller; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( FxDevice::IsPdo(this) && BYTE3(this->m_PkgPnp[1].m_DisposeSingleEntry.Next) )
  {
    v6 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList(&this->m_RequestLookasideList.L.ListHead);
    if ( v6 )
      goto LABEL_7;
    v7 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))this->m_RequestLookasideList.L.AllocateEx)(
                         (unsigned int)this->m_RequestLookasideList.L.Type,
                         this->m_RequestLookasideList.L.Size,
                         this->m_RequestLookasideList.L.Tag);
  }
  else
  {
    v7 = FxAllocateFromNPagedLookasideList(&this->m_RequestLookasideList, v5);
  }
  v6 = (FX_POOL_TRACKER *)v7;
LABEL_7:
  if ( !v6 )
    return 0LL;
  if ( m_Globals->FxPoolTrackingOn )
  {
    v8 = v6 + 1;
    FxPoolInsertNonPagedAllocateTracker(
      &m_Globals->FxPoolFrameworks,
      v6,
      this->m_RequestLookasideListElementSize,
      m_Globals->Tag,
      Caller);
  }
  else
  {
    v8 = v6;
  }
  v8->Link.Flink = &v6->Link;
  v8->Link.Blink = &m_Globals->Linkage;
  if ( !RequestAttributes )
    RequestAttributes = &this->m_RequestAttributes;
  return FxObjectAndHandleHeaderInit(m_Globals, &v8->Pool, 0x170u, RequestAttributes, FxObjectTypeExternal);
}
