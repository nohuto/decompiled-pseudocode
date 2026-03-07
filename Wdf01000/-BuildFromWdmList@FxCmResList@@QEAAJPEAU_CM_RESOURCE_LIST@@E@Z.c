__int64 __fastcall FxCmResList::BuildFromWdmList(
        FxCmResList *this,
        _CM_RESOURCE_LIST *WdmResourceList,
        unsigned __int8 AccessFlags)
{
  FxCollectionInternal *v3; // r14
  unsigned int v7; // edi
  unsigned int Count; // r15d
  unsigned int v9; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *PartialDescriptors; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxResourceCm *v12; // rax
  FxObject *v13; // rax
  FxObject *v14; // rdi
  FxPoolTypeOrPoolFlags v16; // [rsp+40h] [rbp-28h] BYREF

  v3 = &this->FxCollectionInternal;
  v7 = 0;
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  this->m_AccessFlags = AccessFlags;
  if ( WdmResourceList )
  {
    Count = WdmResourceList->List[0].PartialResourceList.Count;
    v9 = 0;
    PartialDescriptors = WdmResourceList->List[0].PartialResourceList.PartialDescriptors;
    if ( Count )
    {
      while ( 1 )
      {
        m_Globals = this->m_Globals;
        *(_QWORD *)&v16.UsePoolType = 0LL;
        v16.u.PoolFlags = 64LL;
        v12 = (FxResourceCm *)FxObjectHandleAllocCommon(m_Globals, &v16, 0x90uLL, 0, 0LL, 0, FxObjectTypeInternal);
        if ( !v12 )
          break;
        FxResourceCm::FxResourceCm(v12, this->m_Globals, PartialDescriptors);
        v14 = v13;
        if ( !v13 )
          break;
        FxObject::AssignParentObject(v13, this);
        if ( !FxCollectionInternal::Add(v3, this->m_Globals, v14) )
          break;
        ++v9;
        ++PartialDescriptors;
        v7 = 0;
        if ( v9 >= Count )
          return v7;
      }
      v7 = -1073741670;
      FxCollectionInternal::Clear(v3);
    }
  }
  return v7;
}
