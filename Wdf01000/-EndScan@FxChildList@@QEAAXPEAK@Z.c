void __fastcall FxChildList::EndScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // r12
  unsigned __int16 v4; // r9
  KIRQL v5; // r13
  unsigned int v6; // edx
  const _GUID *v7; // r8
  const void *_a1; // rax
  int _a2; // edx
  const _GUID *v10; // r8
  _FX_DRIVER_GLOBALS *v11; // r10
  _LIST_ENTRY *Flink; // rdi
  FxChildList *v13; // r15
  _LIST_ENTRY **p_Blink; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  int *v16; // rsi
  const void *ObjectHandleUnchecked; // rax
  __int64 v18; // rdx
  _FX_DRIVER_GLOBALS *v19; // r10
  _LIST_ENTRY *v20; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *i; // rdi
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *v24; // rcx
  _LIST_ENTRY **v25; // rdx
  _LIST_ENTRY *v26; // rcx
  _FX_DRIVER_GLOBALS *v27; // r10
  const void *v28; // rax
  __int64 v29; // rdx
  _FX_DRIVER_GLOBALS *v30; // r10
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  unsigned __int8 v32; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-38h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v6 = this->m_ScanCount - 1;
  this->m_ScanCount = v6;
  v7 = WPP_FxChildList_cpp_Traceguids;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(v11, 5u, 0xCu, 0xCu, v10, _a1, _a2);
  }
  if ( !this->m_ScanCount )
  {
    Flink = this->m_ModificationListHead.Flink;
    if ( Flink != &this->m_ModificationListHead )
    {
      do
      {
        v13 = (FxChildList *)Flink->Flink;
        p_Blink = &Flink[-3].Blink;
        m_Globals = this->m_Globals;
        v16 = (int *)&Flink[1];
        if ( m_Globals->FxVerboseOn )
        {
          WPP_IFR_SF_qll(
            this->m_Globals,
            v6,
            (unsigned int)v7,
            v4,
            traceGuid,
            &Flink[-3].Blink,
            *v16,
            *((_DWORD *)p_Blink + 4));
          m_Globals = this->m_Globals;
        }
        if ( !*((_BYTE *)p_Blink + 80) )
        {
          if ( *v16 == 1 )
          {
            FxChildList::MarkModificationNotPresentWorker(this, &freeHead, (FxDeviceDescriptionEntry *)&Flink[-3].Blink);
          }
          else if ( *v16 == 4 )
          {
            if ( m_Globals->FxVerboseOn )
            {
              ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)p_Blink[8]);
              WPP_IFR_SF_qq(
                v19,
                5u,
                0xCu,
                0xEu,
                WPP_FxChildList_cpp_Traceguids,
                ObjectHandleUnchecked,
                *(const void **)(v18 + 144));
            }
            *v16 = 3;
            v20 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
LABEL_38:
              __fastfail(3u);
            Blink->Flink = v20;
            v20->Blink = Blink;
            Flink->Blink = Flink;
            Flink->Flink = Flink;
          }
        }
        Flink = (_LIST_ENTRY *)v13;
      }
      while ( v13 != (FxChildList *)&this->m_ModificationListHead );
    }
    for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
    {
      v23 = i;
      if ( BYTE2(i[5].Flink) )
      {
        v24 = i->Flink;
        v25 = &i->Blink;
        i = i->Blink;
        if ( v23->Flink->Blink != v23 )
          goto LABEL_38;
        if ( i->Flink != v23 )
          goto LABEL_38;
        i->Flink = v24;
        v24->Blink = i;
        v26 = freeHead.Blink;
        if ( freeHead.Blink->Flink != &freeHead )
          goto LABEL_38;
        *v25 = freeHead.Blink;
        v23->Flink = &freeHead;
        v26->Flink = v23;
        freeHead.Blink = v23;
      }
      else if ( (unsigned int)(LODWORD(i[1].Flink) - 1) <= 1 && !LOBYTE(i[5].Flink) )
      {
        v27 = this->m_Globals;
        if ( i[4].Flink )
        {
          if ( v27->FxVerboseOn )
          {
            v28 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)i[4].Flink);
            WPP_IFR_SF_qq(v30, 5u, 0xCu, 0xFu, WPP_FxChildList_cpp_Traceguids, v28, *(const void **)(v29 + 144));
          }
        }
        else if ( v27->FxVerboseOn )
        {
          WPP_IFR_SF_q(v27, 5u, 0xCu, 0x10u, WPP_FxChildList_cpp_Traceguids, i);
        }
        FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)i, 1u);
      }
    }
    FxChildList::ProcessModificationsLocked(this, &freeHead);
    if ( this->m_InvalidationNeeded )
    {
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
      if ( SafePhysicalDevice )
      {
        this->m_InvalidationNeeded = 0;
        IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
      }
    }
    KeSetEvent(&this->m_ScanEvent.m_Event, 0, 0);
  }
  KeReleaseSpinLock(p_m_ListLock, v5);
  FxChildList::DrainFreeListHead(this, &freeHead, v32);
}
