__int64 __fastcall FxIoResList::BuildFromWdmList(FxIoResList *this, _IO_RESOURCE_DESCRIPTOR **WdmResourceList)
{
  unsigned int v2; // ebx
  int v5; // ebp
  unsigned int v6; // r15d
  _IO_RESOURCE_DESCRIPTOR *p_u; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxResourceIo *v9; // rax
  FxObject *v10; // rax
  FxObject *v11; // r12
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  v5 = 0;
  v6 = *(_DWORD *)&(*WdmResourceList)->Flags;
  p_u = (_IO_RESOURCE_DESCRIPTOR *)&(*WdmResourceList)->u;
  if ( v6 )
  {
    while ( 1 )
    {
      m_Globals = this->m_Globals;
      *(_QWORD *)&v13.UsePoolType = 0LL;
      v13.u.PoolFlags = 64LL;
      v9 = (FxResourceIo *)FxObjectHandleAllocCommon(m_Globals, &v13, 0xA8uLL, 0, 0LL, 0, FxObjectTypeInternal);
      if ( !v9 )
        break;
      FxResourceIo::FxResourceIo(v9, this->m_Globals, p_u);
      v11 = v10;
      if ( !v10 )
        break;
      FxObject::AssignParentObject(v10, this);
      if ( !FxCollectionInternal::Add(&this->FxCollectionInternal, this->m_Globals, v11) )
        break;
      ++p_u;
      if ( ++v5 >= v6 )
        goto LABEL_6;
    }
    return (unsigned int)-1073741670;
  }
LABEL_6:
  if ( !FxCollectionInternal::Add(&this->m_OwningList->FxCollectionInternal, this->m_OwningList->m_Globals, this) )
    return (unsigned int)-1073741670;
  *WdmResourceList = p_u;
  return v2;
}
