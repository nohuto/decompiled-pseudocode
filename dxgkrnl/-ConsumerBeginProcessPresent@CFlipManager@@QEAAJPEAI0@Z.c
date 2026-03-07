__int64 __fastcall CFlipManager::ConsumerBeginProcessPresent(CFlipManager *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  CFlipPresentUpdate *v7; // rbx
  _QWORD *v8; // r15
  _QWORD *v9; // rcx
  struct CFlipPresentUpdate *v10; // rdx
  int v11; // ebp
  void (__fastcall *v12)(_QWORD, _QWORD); // rax
  __int64 v13; // rax
  __int64 v14; // r9
  _QWORD *v15; // rdx
  __int64 v16; // rax

  v3 = 0;
  v7 = 0LL;
  if ( *((_OWORD *)this + 17) != 0LL
    || (v8 = (_QWORD *)((char *)this + 152), v9 = (_QWORD *)*((_QWORD *)this + 19), v9 == v8) )
  {
    v11 = -1073741823;
  }
  else
  {
    v10 = (struct CFlipPresentUpdate *)((unsigned __int64)(v9 - 3) & -(__int64)(v9 != 0LL));
    *((_QWORD *)this + 34) = v10;
    v11 = CFlipManager::ApplyUpdateToConsumer(this, v10);
    if ( v11 >= 0 )
    {
      CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v8);
      v12 = *(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) + 160LL);
      v12(*((unsigned int *)this + 83), --*((_QWORD *)this + 21));
      if ( (_QWORD *)*v8 == v8 )
        KeResetEvent(*((PRKEVENT *)this + 36));
      v13 = DXGQUOTAALLOCATOR<256,1970291526>::operator new();
      v7 = (CFlipPresentUpdate *)v13;
      if ( v13 )
      {
        v14 = *((_QWORD *)this + 29);
        *(_QWORD *)(v13 + 8) = 0LL;
        v15 = (_QWORD *)((v13 + 24) & -(__int64)(v13 != -16));
        v15[1] = v15;
        *v15 = v15;
        *(_QWORD *)v13 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
        *(_QWORD *)(v13 + 16) = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
        *(_DWORD *)(v13 + 40) = 0;
        *(_QWORD *)(v13 + 48) = 0LL;
        *(_QWORD *)(v13 + 56) = 0LL;
        *(_QWORD *)(v13 + 64) = v14;
        *(_BYTE *)(v13 + 72) = 1;
        *(_QWORD *)(v13 + 80) = 0LL;
        *(_DWORD *)(v13 + 88) = 0;
        v11 = CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
                (CFlipManager *)((char *)this + 104),
                (struct CFlipPresentUpdate *)v13);
        if ( v11 >= 0 )
        {
          CFlipPresentUpdate::SetFlipPropertySet(v7, *(struct CFlipPropertySet **)(*((_QWORD *)this + 34) + 56LL));
          *((_QWORD *)this + 35) = v7;
          *a2 = *((_DWORD *)v7 + 10);
          v16 = *(_QWORD *)(*((_QWORD *)this + 35) + 56LL);
          if ( v16 )
            v3 = *(_DWORD *)(v16 + 32);
          *a3 = v3;
          return (unsigned int)v11;
        }
      }
      else
      {
        v7 = 0LL;
        v11 = -1073741801;
      }
    }
  }
  CFlipManager::FreeCurrentUpdates(this);
  if ( v7 )
    (*(void (__fastcall **)(CFlipPresentUpdate *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  return (unsigned int)v11;
}
