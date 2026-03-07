__int64 __fastcall FxPowerIdleMachine::PowerReferenceWorker(
        FxPowerIdleMachine *this,
        unsigned __int8 WaitForD0,
        FxPowerReferenceFlags Flags,
        void *Tag,
        int Line,
        char *File)
{
  unsigned int v9; // ebx
  FxTagTracker *v10; // rcx
  FxTagTracker *m_TagTracker; // rbp
  FxObject **p_Tag; // rsi
  const void *_a1; // rax
  unsigned int v15; // r8d
  _FX_DRIVER_GLOBALS *v16; // r10
  const _GUID *traceGuid; // r11
  KIRQL v18; // r15
  FxObject *m_OwningObject; // r11
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v21; // r11
  const void *v22; // rax
  _FX_DRIVER_GLOBALS *v23; // r11
  unsigned int count; // [rsp+70h] [rbp+8h] BYREF

  count = 0;
  v9 = FxPowerIdleMachine::IoIncrementWithFlags(this, Flags, &count);
  if ( v9 == 259 && WaitForD0 )
  {
    m_TagTracker = this[2].m_TagTracker;
    p_Tag = (FxObject **)&m_TagTracker->m_TagHistory[0].Tag;
    if ( BYTE4(m_TagTracker->m_OwningObject[3].m_Globals) )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(*p_Tag);
      WPP_IFR_SF_qq(v16, 5u, v15, v15, traceGuid, _a1, KeGetCurrentThread());
    }
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&this->m_D0NotificationEvent, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    v18 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
    if ( (this->m_Flags & 0x30) == 0x20 )
    {
      v9 = 0;
    }
    else
    {
      m_OwningObject = m_TagTracker->m_OwningObject;
      v9 = -1073741101;
      if ( (this->m_Flags & 0x10) != 0 )
      {
        if ( BYTE4(m_OwningObject[3].m_Globals) )
        {
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(*p_Tag);
          WPP_IFR_SF_qid(
            v21,
            5u,
            0xCu,
            0xDu,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            ObjectHandleUnchecked,
            (__int64)KeGetCurrentThread(),
            -1073741101);
        }
      }
      else if ( BYTE4(m_OwningObject[3].m_Globals) )
      {
        v22 = (const void *)FxObject::GetObjectHandleUnchecked(*p_Tag);
        WPP_IFR_SF_qid(
          v23,
          5u,
          0xCu,
          0xEu,
          WPP_PowerIdleStateMachine_cpp_Traceguids,
          v22,
          (__int64)KeGetCurrentThread(),
          -1073741101);
      }
      --this->m_IoCount;
      FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
    }
    KeReleaseSpinLock(&this->m_Lock.m_Lock, v18);
  }
  v10 = this->m_TagTracker;
  if ( v10 && (!v9 || v9 == 259) )
    FxTagTracker::UpdateTagHistory(v10, Tag, Line, File, TagAddRef, count);
  return v9;
}
