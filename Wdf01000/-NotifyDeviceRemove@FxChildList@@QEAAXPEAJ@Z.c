/*
 * XREFs of ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C002525C
 * Callers:
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B120 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00241C0 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0025424 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025E58 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxChildList::NotifyDeviceRemove(FxChildList *this, int *ChildCount)
{
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  KIRQL v6; // r14
  _LIST_ENTRY *p_m_DescriptionListHead; // rsi
  FxObject **i; // rbx
  unsigned __int8 v9; // r8
  const void *_a2; // rax
  __int64 v11; // rdx
  FxObject *v12; // rcx
  FxObject ***v13; // rax
  unsigned __int8 v14; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-28h] BYREF

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xCu, 0x32u, WPP_FxChildList_cpp_Traceguids, _a1);
  m_Globals = this->m_Globals;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  FxVerifierCheckIrqlLevel(m_Globals, 0);
  FxChildList::NotifyDeviceSurpriseRemove(this);
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  this->m_State = ListLockedForParentRemove;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
LABEL_2:
  for ( i = (FxObject **)p_m_DescriptionListHead->Flink; i != (FxObject **)p_m_DescriptionListHead; i = (FxObject **)*i )
  {
    if ( !*((_BYTE *)i + 81) )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(i[8]);
      WPP_IFR_SF_qqq(
        this->m_Globals,
        4u,
        0xCu,
        0x33u,
        WPP_FxChildList_cpp_Traceguids,
        i,
        _a2,
        *(const void **)(v11 + 160));
      v12 = *i;
      if ( *(FxObject ***)&(*i)->m_Type != i || (v13 = (FxObject ***)i[1], *v13 != i) )
        __fastfail(3u);
      *v13 = (FxObject **)v12;
      *(_QWORD *)&v12->m_Type = v13;
      i[1] = (FxObject *)i;
      *i = (FxObject *)i;
      KeReleaseSpinLock(&this->m_ListLock, v6);
      HIBYTE(i[8][2].m_ObjectSize) = 1;
      _InterlockedIncrement(ChildCount);
      FxPkgPnp::PnpProcessEvent(*(FxPkgPnp **)&i[8][6].m_ObjectFlags, PnpEventParentRemoved, v14);
      v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
      goto LABEL_2;
    }
  }
  this->m_State = ListUnlocked;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(&this->m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead, v9);
}
