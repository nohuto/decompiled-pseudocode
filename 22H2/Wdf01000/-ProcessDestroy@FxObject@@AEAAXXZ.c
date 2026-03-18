/*
 * XREFs of ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0005034
 * Callers:
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0004EC0 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005B3B8 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C0059B9C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C005B5F0 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 */

void __fastcall FxObject::ProcessDestroy(FxObject *this, FxObjectDebugLeakDetection *FxVerifyLeakDetection)
{
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *m_Lock; // rsi
  unsigned __int16 m_ObjectSize; // ax
  _QWORD *v6; // rdi
  void (__fastcall *v7)(unsigned __int64); // rax
  void (__fastcall *v8)(unsigned __int64); // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x80u) != 0 )
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
  else
    m_Lock = 0LL;
  if ( m_Lock )
  {
    FxTagTracker::CheckForAbandondedTags(m_Lock);
    m_ObjectFlags = this->m_ObjectFlags;
  }
  m_ObjectSize = this->m_ObjectSize;
  if ( m_ObjectSize && (m_ObjectFlags & 8) != 0 )
  {
    v6 = (FxObject_vtbl **)((char *)&this->__vftable + this->m_ObjectSize);
    if ( v6 )
    {
      do
      {
        v7 = (void (__fastcall *)(unsigned __int64))v6[2];
        if ( v7 )
        {
          v7((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          v6[2] = 0LL;
        }
        v8 = (void (__fastcall *)(unsigned __int64))v6[3];
        if ( v8 )
        {
          v8((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          v6[3] = 0LL;
        }
        v6 = (_QWORD *)v6[1];
      }
      while ( v6 );
      m_ObjectSize = this->m_ObjectSize;
    }
    LOBYTE(FxVerifyLeakDetection) = 1;
    if ( m_ObjectSize )
    {
      v9 = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize);
      if ( v9 )
      {
        do
        {
          v10 = (_QWORD *)v9[1];
          if ( !(_BYTE)FxVerifyLeakDetection )
            FxPoolFree(v9);
          LOBYTE(FxVerifyLeakDetection) = 0;
          v9 = v10;
        }
        while ( v10 );
      }
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    if ( BYTE4(this[-1].m_ChildEntry.Blink) )
    {
      _InterlockedDecrement(&this->m_Globals->FxVerifyLeakDetection->ObjectCnt);
      if ( this->m_Type == 4098
        && _InterlockedExchangeAdd(&this->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
      {
        FxVerifyLeakDetection = this->m_Globals->FxVerifyLeakDetection;
        _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
      }
    }
  }
  if ( m_Lock )
  {
    this[-1].m_SpinLock.m_Lock = 0LL;
    FxTagTracker::`scalar deleting destructor'(m_Lock, (unsigned int)FxVerifyLeakDetection);
  }
  this->SelfDestruct(this);
}
