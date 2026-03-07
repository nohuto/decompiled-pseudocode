__int64 __fastcall FxWmiProvider::AddInstance(
        FxWmiProvider *this,
        FxWmiInstance *Instance,
        unsigned __int8 NoErrorIfPresent)
{
  FxObject *v6; // rdx
  const void *_a1; // rax
  __int64 _a2; // r10
  int v10; // eax
  unsigned __int8 v11; // r8
  unsigned __int8 updated; // di
  unsigned int v13; // esi
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 update; // [rsp+68h] [rbp+20h] BYREF

  irql = 0;
  update = 0;
  if ( (this->m_Flags & 4) != 0 )
  {
    FxObject::GetObjectHandleUnchecked(this);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v6);
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxWmiProvider_cpp_Traceguids, _a1, _a2, -1073741808);
    return 3221225488LL;
  }
  else
  {
    FxNonPagedObject::Lock(this->m_Parent, &irql, NoErrorIfPresent);
    v10 = FxWmiProvider::AddInstanceLocked(this, Instance, NoErrorIfPresent, &update, AddInstanceToTail);
    updated = update;
    v13 = v10;
    if ( update )
      updated = FxWmiIrpHandler::DeferUpdateLocked(this->m_Parent, irql);
    FxNonPagedObject::Unlock(this->m_Parent, irql, v11);
    if ( updated )
      FxWmiIrpHandler::UpdateGuids(this->m_Parent);
    return v13;
  }
}
