void __fastcall FxChildList::BeginIteration(FxChildList *this, _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  unsigned __int64 *p_m_ListLock; // rsi
  KIRQL v5; // bp
  const void *_a1; // rax
  int _a2; // edx
  _FX_DRIVER_GLOBALS *v8; // r10

  p_m_ListLock = &this->m_ListLock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Iterator->Reserved[0] = &this->m_DescriptionListHead;
  if ( (Iterator->Flags & 4) != 0 )
    Iterator->Reserved[1] = (void *)1;
  KeClearEvent(&this->m_ScanEvent.m_Event);
  ++this->m_ScanCount;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(v8, 5u, 0xCu, 0x11u, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
  }
  KeReleaseSpinLock(p_m_ListLock, v5);
}
