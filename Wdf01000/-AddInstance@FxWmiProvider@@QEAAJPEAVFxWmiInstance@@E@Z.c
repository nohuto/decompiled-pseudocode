/*
 * XREFs of ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C00281CC
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C0027A20 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiInstanceRegister @ 0x1C0027E20 (imp_WdfWmiInstanceRegister.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C00798BC (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0079970 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C00282C0 (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C002A168 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C002A79C (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

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
