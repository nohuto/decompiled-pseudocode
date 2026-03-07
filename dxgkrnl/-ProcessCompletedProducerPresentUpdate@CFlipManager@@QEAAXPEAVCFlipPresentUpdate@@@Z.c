void __fastcall CFlipManager::ProcessCompletedProducerPresentUpdate(PRKEVENT *this, struct CFlipPresentUpdate *a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // r9
  CFlipManager::PresentHistory *v5; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rdx
  struct CFlipPresentUpdate *v9; // r8
  CFlipManager::PresentHistory *v10; // rcx
  struct CFlipManager::PresentHistory::Entry *v11; // rax
  CFlipManager *v12; // rcx
  CFlipManager **v13; // rdx
  CFlipManager::PresentHistory *v14; // rcx
  struct CFlipManager::PresentHistory::Entry *v15; // rax

  v2 = (_QWORD *)((char *)a2 + 64);
  v4 = *((_QWORD *)a2 + 8);
  if ( (PRKEVENT)v4 == this[30] )
  {
    CFlipManager::EnqueueConsumerUpdate(this, a2);
    v5 = (CFlipManager::PresentHistory *)this[3];
    if ( v5 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v5);
      *((_DWORD *)NextEntry + 10) = 2;
      *((_QWORD *)NextEntry + 2) = *v2;
    }
    v7 = (_QWORD **)(this + 22);
    if ( *v7 != v7 )
    {
      while ( 1 )
      {
        v8 = *v7;
        if ( *v7 == v7 )
          break;
        while ( *(PRKEVENT *)(((unsigned __int64)(v8 - 3) & -(__int64)(v8 != 0LL)) + 0x40) != this[30] )
        {
          v8 = (_QWORD *)*v8;
          if ( v8 == v7 )
            return;
        }
        CFlipQueuedObject::Remove((CFlipQueuedObject *)(((unsigned __int64)(v8 - 3) & -(__int64)(v8 != 0LL)) + 16));
        CFlipManager::EnqueueConsumerUpdate(this, v9);
        v10 = (CFlipManager::PresentHistory *)this[3];
        if ( v10 )
        {
          v11 = CFlipManager::PresentHistory::GetNextEntry(v10);
          *((_DWORD *)v11 + 10) = 5;
          *((_QWORD *)v11 + 2) = *v2;
        }
      }
    }
  }
  else if ( this[6] == (PRKEVENT)1 )
  {
    CFlipManager::MarkAsLost((__int64)this, -1073741823, 16, v4);
  }
  else
  {
    v12 = (CFlipManager *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
    v13 = (CFlipManager **)this[23];
    if ( *v13 != (CFlipManager *)(this + 22) )
      __fastfail(3u);
    *(_QWORD *)v12 = this + 22;
    *((_QWORD *)v12 + 1) = v13;
    *v13 = v12;
    this[23] = (PRKEVENT)v12;
    v14 = (CFlipManager::PresentHistory *)this[3];
    if ( v14 )
    {
      v15 = CFlipManager::PresentHistory::GetNextEntry(v14);
      *((_DWORD *)v15 + 10) = 6;
      *((_QWORD *)v15 + 2) = *v2;
    }
  }
}
